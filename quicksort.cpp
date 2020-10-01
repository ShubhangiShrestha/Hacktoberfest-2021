#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int *a, int s, int e){
    int pivot = a[e];
    int i=s-1;
    for(int j=s; j<=e-1; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[++i], a[e]);
    return i;
}

void quickSort(int *a, int s, int e){
    if(s>=e)
        return;
    
    int index = partition(a, s, e);
    quickSort(a, s, index-1);
    quickSort(a, index+1, e);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    quickSort(a, 0, n-1);
    
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}


