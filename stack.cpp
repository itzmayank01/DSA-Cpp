#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string> s;

    s.push("Love");
    s.push("babbar");
    s.push("Kumar");

    cout<<"Top element--)"<<s.top()<<endl;
 
 s.pop();
   cout<<"Top element--)"<<s.top()<<endl; 

   cout<<"size of stack"<<s.size()<<endl;
   cout<<"Empty or not"<<s.empty()<<endl;
}