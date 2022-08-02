#include<bits/stdc++.h>

int firstMissing(int arr[], int n){

    sort(arr, arr+n);

    int j=1;

    for(int i=0; i<n; i++){

        if(arr[i] > 0 && arr[i] != j) return j;
        
        if(arr[i] == j) j++;
    }
    return arr[n-1] < 0 ? 1 : arr[n-1]+1;
}