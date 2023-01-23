#include<iostream>
using namespace std;

void moveZerosToLeft(int *arr, int n){    
    int j = n-1, i = n-1;        
    while(i>=0 && j>=0)
    {            
        if(arr[j]!=0){               
            swap(arr[j--],arr[i--]);      
        }            
        else{               
            j--;           
        }
    }
}  