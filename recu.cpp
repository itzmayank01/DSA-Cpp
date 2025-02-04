#include<bits/stdc++.h>
using namespace std;

void abc(int i,int n){
  
  if(i==n)
  return ;
  cout<<i<<endl;
  
  abc(i+1,n);


}
int main(){
int n;
cin>>n;
abc(1,n);
return 0;

}