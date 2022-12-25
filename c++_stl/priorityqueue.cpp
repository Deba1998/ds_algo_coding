#include<bits/stdc++.h>


using namespace std;

int main()
{    
    //max heap
    priority_queue<int> pq; //by default largest item will stay at the top
    pq.push(8); //{8}
    pq.push(10); //{10,8}
    pq.push(3);  //{10,8,3}
    pq.emplace(5); //{10,,8,3,5}
    cout<<pq.top()<<endl; //10
    pq.pop(); //pop fron the top
    cout<<pq.top()<<endl;

    //min heap
    priority_queue<int,vector<int>,greater<int>> mh;
    mh.push(8); //{8}
    mh.push(10); //{8,10}
    mh.push(3);  //{3,8,10}
    mh.emplace(5); //{3,5,8,10}
    cout<<mh.top()<<endl;

    // push,pop- o(logn) top- o(1)
}