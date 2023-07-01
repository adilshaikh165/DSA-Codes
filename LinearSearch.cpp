#include<iostream>
using namespace std;

void linearSearch(int arr[], int num){
    int temp = -1;

    for(int i=0; i<5;i++){
        if(arr[i]==num){
            cout << "The element is found at position : " << i+1 <<endl;
            temp = 1;
            break;
        }
    }
    if(temp== -1){
        cout << "The element is not present in an array!" << endl;
    }
}


int main(){
    int arr[5];
    cout << "Enter the elements in an array :" << endl;
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }

    cout << "The elements in an array : " << endl;
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    cout << "Enter the element you want to search : " << endl;
    int num;
    cin >> num;

    linearSearch(arr,num);

    return 0;
}
