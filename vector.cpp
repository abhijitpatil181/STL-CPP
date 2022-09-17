/* Topic -> vector

-> holds the object of same data type
-> dynamic array
-> contigous memory allocation
-> random access
-> fast linear traversal
-> fast insertion/deletion at end

synatx-> vector<data_type>vector_name;
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>v={75,67,39,89,29};
    cout<<v.size()<<endl;  //no of elements in vector
    cout<<v.capacity()<<endl;  //max no of element vector can add
    v.push_back(4);             //add element at end of vector
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();        //remove last element from the vector
    cout<<v.at(2)<<endl;;      //access element at particular index
    cout<<v.front()<<" "<<v.back()<<endl;
    v.empty();        //returns true or false(true if vector is empty)

    sort(v.begin(),v.end());  //sort vector in ascending order
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());  //sort in descending order
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>::iterator it=v.begin();   //printing element using iterator
    while(it!=v.end()){
        cout<<*it<<" ";
        it++;
    }cout<<endl;

    vector<int>v1(100);
    v1.resize(10);
    cout<<v1.capacity()<<endl;
    v1.shrink_to_fit();
    cout<<v1.capacity()<<endl;

    vector<string>v2={"ab","bc","de"};
    v2.emplace(v2.begin()+1,"ge");
    for(auto i:v2){
        cout<<i<<" ";
    }
}

/* we can try more function
->assign()  //assign new vector to existing vector
->clear()  //clear the vector
->erase()  //remove particular range of elements
->reserve()  //allocate that much of memory to vector
->resize()   //adjust the size of vector
->insert()  //insert elements at arbitary position
->vector<int>::iterator it=v.rbegin();  //reverse iterator pointing to last element
->vector<int>::iterator it=v.rend();  //reverse iterator pointing to memory before first element
->shrink_to_fit()  //Requests the container to reduce its capacity to fit its size.
->emplace()  //insert and construct element place
*/