#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,x,i;
  cin>>n;

  int poly[n+1];

  for(i=0;i<=n;i++){

    cin>> poly[i];
  }

cin>> x;

  int result=poly[0];
for(i=1;i<=n;i++){
     result=result*x+poly[i];

  }
cout<<result;

}
