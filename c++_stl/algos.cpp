#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second<p2.second) return true;
    if (p1.second>p2.second) return false;
    if (p1.first>p2.first) return true;
    return false;
}

int main()
{
   int a[]={3,1,4,2};
   auto n=4;
   sort(a,a+n);
   for(auto  i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
   sort(v.begin(),v.end());  //sorting vector();
   sort(a+2,a+4); //sorting specific range of array elements
   sort(a,a+5,greater<int>());
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    sort (a,a+3,comp);//write comp function to sort in our own way
    for (int i=0;i<3;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }

   int num=7;
   int cnt=__builtin_popcount(num); //returns number of set bits in a binary form of a number 
   cout<< cnt<<endl;
   long long num1=  123964873;
   int count=__builtin_popcountll(num1);//for long long same as built in  popcount
   cout<<count<<endl;
   string s="213";
   sort(s.begin(),s.end());//sorting string
   do{
       cout<<s<<endl;  
   }while(next_permutation(s.begin(),s.end())); //make the string to next permutation , always remember to use sorted string
   
   int maxi=*max_element(a,a+n); //return iterator  to max element of array or vector
   int mini=*min_element(a,a+n); // returns iterator to min element of array or vector
}