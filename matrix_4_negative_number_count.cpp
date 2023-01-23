#include<bits./stdc++.h>
using namespace std;

// -1 k upper bound ki position - 0 usse apan ko no. of negative elements mil jayenge 

int countNegativeNumbers(vector<vector<int>> &mat){
	int total = 0;
	for(int i =0;i<mat.size();i++){
		int l = upper_bound(mat[i].rbegin(),mat[i].rend(),-1)-mat[i].rbegin();
		total+=l;
	}
	return total;
}
