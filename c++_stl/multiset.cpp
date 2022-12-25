#include<bits/stdc++.h>


using namespace std;

int main()
{    

    // sorted but not unique
    // begin,end,rbegin,rend,swap,empty,size same as vector
    multiset<int> s;
    s.insert(5);  //{5}
    s.emplace(1);  //{1,5}
    s.insert(4);   //{1,4,5}
    s.insert(4);  //{1,4,4,5}
    s.erase(4);  //erase all occurences of 4
    int count= s.count(1); //counting occurances
    //trick to erase single instance of an element is using iterator method
    s.erase(s.find(1)); //only first instance is deleted
    //s.erase(s.find(1),it); // erases range instances

}