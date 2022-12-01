#include <iostream>
using namespace std;
int main() {
  int now=0,pre=0,n;
  while(cin>>n){
    int num[3000]={0};
        cin>>pre;
        for(int i=1;i<n;i++){
        cin>>now;
        num[abs(now-pre)]=1;
        pre = now;
        }
    bool flg=1;
    for(int j=1;j<n;j++){
      if(num[j]==0){
        cout<<"Not jolly"<<endl;
        flg=0;
        break;
        }
    }
    if(flg)cout<<"Jolly"<<endl;
      }  
  }
