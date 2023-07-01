#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the total number of elements in an array: " << endl;
    cin >> n;

    int arr[n];
    cout << endl;
    cout << "Enter the elements in array : " <<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "BEFORE SELECTION SORT : " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;

    //SELECTION SORT CODE

    for(int i=0; i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout << "AFTER SELECTION SORT : " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}
