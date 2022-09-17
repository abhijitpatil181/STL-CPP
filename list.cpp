/* Topic->List
-> internally implements doubly LL
-> non-contigous memory allocation
-> better inerting ,extracting and forward and reverse traversing in any position
   within the container for which iterator already has been obtained.
-> bi-directional iterator

syntax-> list<data_type>l_name;
*/

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    list<int>L={4,5,7,3,7,2,3};
    L.push_back(20);
    L.push_front(30);
    L.pop_front();
    L.pop_back();

    L.sort();

    list<int>::iterator it=L.begin();
    L.insert(++it,20);    //insert operation
    L.unique();
    for(auto i:L){
        cout<<i<<" ";
    }

}