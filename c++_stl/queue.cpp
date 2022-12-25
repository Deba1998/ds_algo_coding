#include<bits/stdc++.h>


using namespace std;

int main()
{    

    //FIFO
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3);  //{1,2,3}
    q.emplace(5); //{1,2,3,5}
    cout<<q.back()<<endl;
    q.pop(); //pop fron the front
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    stack<int> q1,q2;
    q1.swap(q2); //swapping 2 stacks
    //push,pop,top all O(1) operations
}