#include<bits/stdc++.h>


using namespace std;

int main()
{
 list<int> s;
 s.push_back(5);
 s.emplace_back(4);
 s.push_front(9); // inserts at the front in vector insert operation is used and list push_front is cheap as it maintains doubly linked list
 s.emplace_front(12); // same as push_front
 s.po
 for( auto it=s.begin(); it!=s.end();it++){
     cout<< *(it) << " ";
 }
 cout<<endl;
 //all operations are same as vector{begin,end,rbegin,rend,size,swap,clear,insert}
}
