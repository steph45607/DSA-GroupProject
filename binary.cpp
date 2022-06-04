#ifndef BINARY
#define BINARY

#include <iostream>
using namespace std;

// Merge sort 
void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[1000000];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}

void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
        //divide the array at mid and sort independently using merge sort
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        //merge or conquer sorted arrays
        merge(arr,low,high,mid);
    }
}

int binarySearch(int arr[], int l, int r, int x){
    merge_sort(arr, 0, r-1);
    if ( r >= l){
        int mid = l + (r - l) / 2;

        if(arr[mid] == x){
            return mid;
        }

        if(arr[mid] > x){
            return binarySearch(arr, l, mid - 1, x);
        }

        return binarySearch(arr, mid + 1, r, x);

    }
    return -1;
}

#endif