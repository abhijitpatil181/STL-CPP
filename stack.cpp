/*Topic->stack
-> elements are inserted and extracted from only one end of container
-> follows (LIFO) last in first out

*/
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>s;
    cout<<s.size()<<endl;
    s.push(3);
    s.push(6);
    s.push(10);
    s.push(30);

    cout<<s.top()<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    
}

