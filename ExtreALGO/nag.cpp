#include <bits/stdc++.h>
using namespace std;


void rearrange(int arr[], int n){
    
    int i = 0; 
    int j = n-1;
    while(i<j){
        if(arr[i] <0 && i<j) i++;
        if(arr[j] >0 && i<j) j++;
        if(j>i) swap(arr[i] , arr[j]);
        else break;
    }
    
    
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++){
        cout << arr[i];
        
    }
}

int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}
