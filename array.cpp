/* Topic-> Array in STL
-> fixed size array
-> continous memory
-> random access
-> fast linear traversal

synatx-> array<data_tye,size>array_name;
*/

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
    array<int,6>arr;

    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<arr.at(2)<<endl; //get element at particular position
    cout<<arr.front()<<endl; //element at first index  of array
    cout<<arr.back()<<endl;   //element at last index of array
    sort(arr.begin(),arr.end());  //sort element in ascending order
    sort(arr.begin(),arr.end(),greater<int>());//sort elements in descending order
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}