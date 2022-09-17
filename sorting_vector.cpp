
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// struct Point{
//     int x,y;
//     Point(int x,int y){
//         this->x=x;
//         this->y=y;
//     }
    
// };

void printVector(const vector<pair<int,int>>&p){
    for(auto i:p){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

 
bool comparator1(pair<int,int>a,pair<int,int>b){
    return a.first<b.first ;
}

bool comparator2(pair<int,int>a,pair<int,int>b){
    return a.second>b.second ;
}

int main() {
    // vector<Point>p;
    // p.push_back(Point(20,30));
    // p.push_back(Point(37,34));
    // p.push_back(Point(27,65));
    // p.push_back(Point(10,39));
    // p.push_back(Point(27,83));
    // p.push_back(Point(50,28));
    
    // cout<<"before sorting"<<endl;
    // printVector(p);
    // sort(p.begin(),p.end(),&comparator1);
    // // sort(p.begin(),p.end(),&comparator2);

    // cout<<"after sorting"<<endl;
    // printVector(p);

    int n;
    cin>>n;
    vector<pair<int,int>>point(n);
    for(int i=0;i<n;i++){
        cin>>point[i].first>>point[i].second;
    }
    cout<<"before sorting"<<endl;
    printVector(point);
    sort(point.begin(),point.end(),&comparator1);
    cout<<"after sorting"<<endl;
    printVector(point);

    return 0;
}