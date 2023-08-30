#include<iostream>
using namespace std;

void bubbleSort(int arr[])
{
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    int myarr[5];

    cout << "Enter 5 elements in any order : " << endl;

    for(int i=0 ; i<5 ; i++){
        cin >> myarr[i];
    }

    cout << "Array before bubble sort : " <<endl;
    for(int i=0;i<5;i++){
        cout << myarr[i] << " ";
    }

    bubbleSort(myarr);

    cout << endl;
    cout << "Array after bubble sort : " <<endl;
    for(int i=0;i<5;i++){
        cout << myarr[i] << " ";
    }
    return 0;
}