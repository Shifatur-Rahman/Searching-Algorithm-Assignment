#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int first, int last, int target, int arr[]){


while(first<=last){
    int mid = (first+last)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]>target){
        last = mid-1;
    } else{
        first = mid+1;
    }
}

return -1;

}

int main(){

int arr[] = {-1,0,3,5,9,12};
int target = 2;
int first = 0;
int last = sizeof(arr)/sizeof(arr[0]) - 1;
int res =  binarySearch(first, last, target, arr);

cout<<res<<endl;

}
