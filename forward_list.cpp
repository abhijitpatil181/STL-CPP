/*Topic->forward_list
->internally uses singly LL
->only forward traversal

syntax-> forward_list<data_type>f_name;
*/

#include <iostream>
#include <forward_list>
#include <algorithm>
using namespace std;

int main(){
    forward_list<int>f_list={4,7,9,5,6};
    forward_list<int>::iterator it=f_list.begin();
    // cout<<*it<<endl;
    // cout<<*(++it)<<endl;
    //cout<<*(--it)<<endl;    //reverse traversal is not possible

    f_list.sort();
    while(it!=f_list.end()){
        cout<<*it<<" ";
        it++;
    }
}

/*all other operation which are valid for vector also we can use for list*/