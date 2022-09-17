/*Topic-> deque
-> dynamic array
-> elements can be added or removed from both end
-> functionality is similar to vector
*/


#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(4);
    d.push_back(5);
    d.push_back(7);

    //    4 1 5 7

    // cout<<d.front()<<endl;
    // cout<<d.back()<<endl;

    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
}