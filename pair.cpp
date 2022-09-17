/* Topic-> pair
-> contain two values of same or different type

syntax->pair<data_type1,data_type2>pair_name;
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    pair<char,float>p;
    p.first='a';
    p.second=3.4;
    cout<<p.first<<" "<<p.second<<endl;
}