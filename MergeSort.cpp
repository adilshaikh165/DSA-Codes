#include<iostream>
using namespace std;

void merge(int arr[],int l, int m, int r){
    int i=l;        //starting index for left subarray
    int j=m+1;      //starting index for right subarray
    int k=l;        //starting index for temp array

    int temp[5];

    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }

    while(i<=m){
        temp[k]=arr[i];
        i++;
        k++;
    }

    while(j<=r){
        temp[k]=arr[j];
        j++;
        k++;
    }

    for(int p=l;p<=r;p++){              //copying the elements from the temp array to original array
        arr[p]=temp[p];
    }

}

void mergeSort(int arr[], int l, int r)
{
    if(l<=r){
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int myarr[5];

    cout << "Enter 5 elements in any order : " << endl;

    for(int i=0 ; i<5 ; i++){
        cin >> myarr[i];
    }

    cout << "Array before merge sort : " <<endl;
    for(int i=0;i<5;i++){
        cout << myarr[i] << " ";
    }

    mergeSort(myarr,0,4);

    cout << endl;
    cout << "Array after merge sort : " <<endl;
    for(int i=0;i<5;i++){
        cout << myarr[i] << " ";
    }
    
    return 0;
}