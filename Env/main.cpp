#include <bits/stdc++.h>

using namespace std;  


int check(string n,int l){
  int count = 0;
  for(int i = 0;i<l;i++){
    if(n[i]=='B'){
      count+=1;
    }else{
      break;
    }
  }
  return count;
}

int main()  
{
  #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
	freopen("err.txt","w",stderr);
  #endif
  cout<<"Hello Worl";
  cerr<<"Error Occured";
}