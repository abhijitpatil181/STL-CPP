/* Topic -> set
-> elements are unique and ordered

Topic-> multiset
-> allows duplicate element but it is ordered

Topic-> unorderd_set
-> elements are unique but unorderd

Topic-> unorderd_multiset
-> allows duplicate elements and they are unorderd
*/

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    set<int>s1;
    // unordered_set<int>s1;
    // multiset<int>s1;
    // unordered_multiset<int>s1;
    s1.insert(5);
    s1.insert(40);
    s1.insert(5);
    s1.insert(21);
    s1.insert(20);
    s1.insert(21);

    set<int>::iterator it=s1.begin();
    while(it!=s1.end()){
        cout<<*it<<" ";
        it++;
    }
}