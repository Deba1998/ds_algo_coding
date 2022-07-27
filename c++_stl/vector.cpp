#include<bits/stdc++.h>


using namespace std;

int main()
{
    vector<int> v;     //creates empty container
    v.push_back(1);
    v.emplace_back(2); // same as push back but faster than push back
    vector<pair<int,int>> vec;
    vec.push_back({1,2});  // have to give curly braces to define it as a pair
    vec.emplace_back(3,4); // doest have to give curly braces to define it as pair
    vector<int> vi(5,100);   //vector of length 5 initialised with 100
    vector<int> vit (5); //initializes a  of size 5 with 0 or garbage value depends on the container

    vector<int> v1 (5,20);
    vector<int> v2(v1); //copy of v1
    
    vector<int> :: iterator it= v2.begin(); // first element pointer
    vector<int> :: iterator it1= v2.end();   // pointer after last element
    vector<int> :: reverse_iterator it2= v2.rbegin();   // pointer before last element
    vector<int> :: reverse_iterator it3= v2.rend();     // pointer of element before first element
    cout<< *(it2)<< endl;

    for(vector<int> :: iterator it4= v2.begin(); it4!=v2.end(); it4++)
    {
        cout<< *(it4) << " ";
    }
    cout<< endl;

    for(auto it5= v2.begin(); it5!=v2.end(); it5++)
    {
        cout<< *(it5) << " ";
    }
    cout<< endl;
    
    // erase method
    v.erase(v.begin()+1); // erase one element not range
    v.erase(v.begin(), v.end()); // erase a range of elements, start inclusive and end not inclusive


    //insert method
    vector<int> vx(2,100); // {100,100}
    vx.insert(vx.begin(),300); // {300,100,100}
    vx.insert(vx.begin()+1,2,10);//{300,10,10,100,100}
    // for(auto it6= vx.begin(); it6!=vx.end(); it6++)
    // {
    //     cout<< *(it6) << " ";
    // }
    // cout<< endl;


    vector<int> shree (2,39);
    vx.insert(vx.begin(),shree.begin(),shree.end());//{39,39,300,10,10,100,100} inserting the vector shree at a certain position
    for(auto it6= vx.begin(); it6!=vx.end(); it6++)
    {
        cout<< *(it6) << " ";
    }
    cout<< endl;
    cout<< vx.size(); //size of the vector
    cout<<endl;
    vx.pop_back(); //removes last element
    vector <int> vd= {10,20};
    vector <int> ve= {30,40};
    vd.swap(ve); ///swaps 2 vector
    for(auto it7= vd.begin(); it7!=vd.end(); it7++)
    {
        cout<< *(it7) << " ";
    }
    cout<<endl;
    for(auto it8= ve.begin(); it8!=ve.end(); it8++)
    {
        cout<< *(it8) << " ";
    }
    cout<<endl;
    ve.clear(); //erases the vector
    cout<< ve.empty(); // checks if a vector is empty or not return 0 if false and 1 if true
    return 0;
}