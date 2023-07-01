
#include<iostream>
#include<vector>

using namespace std;

int main(){
 vector<int> v;         //Dynamic vector
 vector<int> a(5,1);    //Size of vector a is 5 and initialize every element with "1".
 vector<int> last{a};
 cout << "Last vector : " << endl;
 for(int i : last){
    cout << i << " ";
 }cout << endl;

 cout << "Capacity : " << v.capacity() << endl;

 v.push_back(1);
 cout << "Capacity : " << v.capacity() << endl;

 v.push_back(2);
 cout << "Capacity : " << v.capacity() << endl;

 v.push_back(3);
 cout << "Capacity : " << v.capacity() << endl;

 v.push_back(4);
 cout << "Capacity : " << v.capacity() << endl;

 v.push_back(5);
 cout << "Capacity : " << v.capacity() << endl;
 cout << "Size : " << v.size();

 cout<< "Element at 2nd index : " << v.at(2) << endl;

 cout << "Front : " << v.front() << endl;
 cout << "Back : " << v.back() << endl;

 cout << "Before pop " << endl;
 for(int i : v){
    cout << i << " ";
 }cout << endl;

 v.pop_back();
 cout << "After pop " << endl;
 for(int i : v){
    cout << i << " ";
 }cout << endl;

 cout << "Before clearing the vector : " << endl;
 cout << v.size() << endl;

 v.clear();

 cout << "After clearing the vector : " << endl;
 cout << v.size() << endl;



}
