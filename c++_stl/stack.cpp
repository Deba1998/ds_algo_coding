#include<bits/stdc++.h>


using namespace std;

int main()
{    

    //LIFO
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3);  //{3,2,1}
    st.emplace(5); //{5,3,2,1}
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    stack<int> st1,st2;
    st1.swap(st2); //swapping 2 stacks
    //push,pop,top all O(1) operations
}