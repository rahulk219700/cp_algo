#include<iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int target){
    if (low<=high){
        int mid = low + (high-low)/2;
        if (target==arr[mid]){
            return mid;
        }
        else if (target > arr[mid]){
            return binary_search(arr,mid+1,high,target);
    
        }
        else{
            return binary_search(arr,low,mid-1,target);
        }
    }
    else{
        return -1;
    }
}

int main()
{
    int arr[]={2,3,4,5,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int res = binary_search(arr,0,n-1,target);
    res == -1?cout<<"not found\n":cout<<"target found at "<<res<<endl;
    return 0;
}