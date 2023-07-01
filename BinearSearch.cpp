#include<iostream>
using namespace std;

int binarySearch(int arr[],int left,int right,int x){
    while(left <= right){
        int mid = left + (right-left)/2;

        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }

    return -1;

}


int main(){
    int arr[10];

    cout << "Enter the elements in an array in Ascending order : " << endl;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    cout << "The elements in an array are : " << endl;
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }

    int num;
    cout << endl;
    cout << "Enter the number you want to search : " << endl;
    cin>>num;

    int left=0;
    int right=9;

    int output = binarySearch(arr,left,right,num);

    if(output == -1){
        cout <<"The element not found!" << endl;
    }
    else{
        cout << "The element is found at index : " << output << endl;
    }

    return 0;
}
