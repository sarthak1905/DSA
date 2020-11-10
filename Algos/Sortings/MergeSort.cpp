#include<bits/stdc++.h>

using namespace std;

int* merge(int arr[], int s,int mid, int e)
{
    int D[p+q];
    int i=s, j=mid+1, k=0;
    while(i<p && j<q)
    {
        if(*(B+i) < *(C+j))
        {
            D[k] = *(B+i);
            ++i;
        }
        else 
        {
            D[k] = *(C+j);
            ++j;
        }
        ++k;
    }
    if(i == p)
        for(i=j; j<q; ++i, ++k) D[k] = *(C+j); 
    else 
        for(j=i; i<p; ++j, ++k) D[k] = *(B+i);
    return D;
}

void mergeSort(int arr[], int s, int e)
{
    if(e == 1)
        return arr;
    int mid = (s+e)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, mid, e);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i) cin >> arr[i];
    int* res = mergeSort(arr,0,n);
    cout << "The sorted array is:\n";
    for(int i=0; i<n; ++i) cout << *(res+i) << " ";
    return 0;
}