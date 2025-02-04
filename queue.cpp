#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 
queue<string> q;

q.push("love");
q.push("Babbar");
q.push("Kumar");
cout<<"Before Pop"<<endl;

cout<<"First Element"<<q.front()<<endl;

q.pop();
cout<<"first element"<<q.front();
cout<<"Size"<<q.size();


}