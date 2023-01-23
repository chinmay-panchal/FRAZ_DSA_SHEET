#include<bits./stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
bool isPerfectSquare(long long n) {
	// Write your code here.
	long long int s=1; long long int e=n; long long int mid = s+(e-s)/2;
	while(s<=e){
		if(mid*mid==n){
			return true;
		}
		else if(mid*mid<n){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid = s+(e-s)/2;
	}
	return false;
}