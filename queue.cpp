/* Topic ->queue
-> follows first in first out (FIFO)
-> elements are inserted from one end of the containers and extracted from other end
*/

#include <iostream>
#include <queue>    //FIFO -first in first out
using namespace std;

int main(){
    queue<int>q;
    
    q.push(4);           //always insert element to rear end
    q.push(40);
    q.push(70);
    q.push(30);
    
    q.pop();
   
    // cout<<q.size()<<endl;
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return EXIT_SUCCESS;
}