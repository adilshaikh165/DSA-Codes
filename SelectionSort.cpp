#include<iostream>
using namespace std;

void selectionSort(int arr[])
{
    for(int i=0;i<4;i++){
        int min = i;

        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
}

int main(){
    int myarr[5];

    cout << "Enter 5 elements in any order : " << endl;

    for(int i=0 ; i<5 ; i++){
        cin >> myarr[i];
    }

    cout << "Array before selection sort : " <<endl;
    for(int i=0;i<5;i++){
        cout << myarr[i] << " ";
    }

    selectionSort(myarr);

    cout << endl;
    cout << "Array after selection sort : " <<endl;
    for(int i=0;i<5;i++){
        cout << myarr[i] << " ";
    }
    return 0;
}
