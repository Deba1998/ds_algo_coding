#include<bits/stdc++.h>


using namespace std;

int main()
{    

    // sorted and unique
    // begin,end,rbegin,rend,swap,empty,size same as vector
    //all operation log(n) time
    set<int> s;
    s.insert(5);  //{5}
    s.emplace(1);  //{1,5}
    s.insert(4);   //{1,4,5}
    s.insert(3);   //{1,3,4,5}
    s.emplace(2);  //{1,2,3,4,5}

    auto it=s.find(3); // returns an iterator, if an element is not found it returns set.end()
    it++;
    cout<< *(it) <<endl;
    s.erase(5); //logatrithmic time
    int count=s.count(1); //return the number of counts
    auto it1=s.find(3);
    s.erase(it1); //takes constant time
    auto it2=s.find(2);
    auto it3=s.find(4);
    s.erase(it2,it3); //range delete start inclusive end not inclusive
    cout<<s.size()<<endl;
    auto lb=s.lower_bound(1);// returns an iterator to the first instance of the element if present if not present then return the iterator to the next greator element
    auto ub= s.upper_bound(1); // return iterator to the next greater element than the element passed in the argument , if not present then also returns an iterator to the next greater element
    
}