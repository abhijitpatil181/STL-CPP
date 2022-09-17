/* Topic->map   O(log(n))
-> implements balanced binary tree
-> unique and sorted key
-> key value pair

Topic-> unordered_map   O(1)
-> internally implements hash table
-> unique but not in sorted order keys(random key->value pair)

Topic->multimap
->duplicate keys but sorted

Topic-> unordered_multimap
->duplicate keys and unorederd

*/
#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

void printMap(map<int,string>& m){
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
}


int main(){
    map<int,string>m;
    // unordered_map<int,string>m;
    // multimap<int,string>m;
    // unordered_multimap<int,string>m;
    pair<int ,string>p;
    m.insert(make_pair(1,"c"));
    // m.insert(make_pair(3,"cpp"));
    // m.insert(make_pair(2,"python"));
    // m.insert(make_pair(5,"javascript"));
    // m.insert(make_pair(5,"perl"));
    // m.insert(make_pair(4,"c#"));
    //cout<<m[1]<<endl;  //printing elements by key

    // m[3]="cpp";
    // m[2]="python";
    // m[5]="javascript";
    // m[5]="perl";
    // m[4]="c#";
    cout<<m[1]<<endl;
    cout<<m[2]<<endl;
    printMap(m);
    
}