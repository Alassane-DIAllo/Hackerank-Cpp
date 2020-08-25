#include <iostream>
#include <vector>
#include <algorithm>
using namespaces std;

int T ;
cin>>T;
int pre[];

int main(){
    while(T--){
      int n;
      cin>>n;
      for(int i=0;i<n;i++){
          int x;
          cin>>x;
          if(i==0) pre[i]=x;
          else pre[i] =pre[i-1]+x;
      }
      bool flag = false;
      for(int i=1; i<n;i++){
         if (p[i-1] == p[n-1]-p[i]){
            flag = true;
            break;
         }
      }
      if(flag==true) cout<<"YES\n";
      else cout<<"NO\n";
    }
}
