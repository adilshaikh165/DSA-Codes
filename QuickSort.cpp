#include<iostream>
using namespace std;

int Partition(int arr[], int s, int e){
    int pivot = arr[e];
    int pIndex = s;

    for(int i=s;i<=e-1;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[pIndex]);
            pIndex++;
        }
    }

    swap(arr[e],arr[pIndex]);

    return pIndex;
}

void QuickSort(int arr[], int s, int e)
{
    if(s<e){
        int p = Partition(arr,s,e);
        QuickSort(arr,s,(p-1));
        QuickSort(arr,(p+1),e);
    }
    
}

int main(){
    int myarr[5];

    cout << "Enter 5 elements in any order : " << endl;

    for(int i=0 ; i<5 ; i++){
        cin >> myarr[i];
    }

    cout << "Array before Quick sort : " <<endl;
    for(int i=0;i<5;i++){
        cout << myarr[i] << " ";
    }

    QuickSort(myarr,0,4);

    cout << endl;
    cout << "Array after Quick sort : " <<endl;
    for(int i=0;i<5;i++){
        cout << myarr[i] << " ";
    }
    
    return 0;
}