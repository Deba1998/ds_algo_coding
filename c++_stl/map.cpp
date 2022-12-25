#include<bits/stdc++.h>


using namespace std;

int main()
{    

    // stores unique key in sorted order
    //if key not present then return value 0
    map<int,int> mp;
    mp[1]=2;
    mp.insert({3,4});
    mp.emplace(2,5);
    map <pair<int,int>,int> mpp;
    mpp[{2,3}]=10;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mp[1]<<endl;
    cout<<mp[5]<<endl;   //return 0 if not present in map
    auto it=mp.find(3);
    cout<<it->second<<endl;
    auto it1=mp.find(5); //will return mp.end after the map

    auto it4=mp.lower_bound(2);
    auto it5=mp.upper_bound(3);

    //erase,size,swap, empty is same
}