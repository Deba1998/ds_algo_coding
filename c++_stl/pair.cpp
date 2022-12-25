#include<bits/stdc++.h>


using namespace std;

int main()
{
    pair<int,int> p= {1,2};
    cout<< p.first<< " "<< p.second<< endl;
    pair<int, pair <int,int>> pi={1,{2,44}};
    cout << pi.first<<" "<<pi.second.second<<" "<<pi.second.first<<endl;
    pair <int ,int> arr[]={{1,2},{3,5},{6,9}};
    cout<< arr[1].second;
    return 0;
}