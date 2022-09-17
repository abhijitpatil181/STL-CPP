/* Topic-> Iterator
->points to location in a container

syntax:- conainer_name<data_type>::iterator it; 

we cannot access elements of some container using [] operator for that we can use iterator.
iterator are used to iterate over/access map,set,list etc

*/

#include <iostream>
#include <list>
#include <set>
#include <map>
using namespace std;

int main(){
    // list<int>L={1,2,3,4,5};
    // list<int>::iterator it=L.begin();
    // while(it!=L.end()){
    //     cout<<*it<<" ";
    //     ++it;
    // }

    // set<int>s={4,5,62,5,6,2,5,2};
    // set<int>::iterator it=s.begin();
    // while(it!=s.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

    map<int,string>m;
    m[1]="abs";
    m[10]="dhdg";
    m[5]="bqwd";
    m[20]="dghw";
    m[1]="7742";
    cout<<m[15]<<endl;
    map<int,string>::iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

}