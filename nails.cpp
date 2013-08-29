#include<iostream>
using namespace std;

signed short nailMap[5100][5100];

void init(){
  for(int i=0;i<5100;i++){
    for(int j=0;j<5100;j++){
      nailMap[i][j]=0;
    }
  }
  return;
}
int main(){
  int nails,gomu;
  cin>> nails >> gomu;
  init();
  int topx,topy,x;
  for(int i=0;i<gomu;i++){
    cin>>topx>>topy>>x;
    nailMap[topx][topy]++;
    nailMap[topx+x+1][topy]--;
    nailMap[topx+x+2][topy+1]++;
    nailMap[topx+x+2][topy+x+2]--;
    nailMap[topx][topy+1]--;
    nailMap[topx+x+1][topy+x+2]++;
  }
 /* for(int i=1;i<=nails+3;i++){
    for(int j=1;j<=i+3;j++)
      cout<<nailMap[i][j];
    cout<<endl;
  }*/
  int temp;
  for(int i=1;i<=nails;i++){
    temp=0;
    for(int j=1;j<=i;j++){
      nailMap[i][j]=temp+=nailMap[i][j];
    }
  }
 /* for(int i=1;i<=nails+3;i++){
    for(int j=1;j<=i+3;j++)
      cout<<nailMap[i][j];
    cout<<endl;
  }*/
  for(int j=1;j<=nails;j++){
    temp=0;
    for(int i=j;i<=nails;i++)
      nailMap[i][j]=temp+=nailMap[i][j];
  }
/*  for(int i=1;i<=nails+3;i++){
    for(int j=1;j<=i+3;j++)
      cout<<nailMap[i][j];
    cout<<endl;
  }*/
  for(int i=0;i<=nails;i++){
    temp=0;
    for(int j=1;j+i<=nails;j++)
      nailMap[i+j][j]=temp+=nailMap[i+j][j];
  }
  int res=0;
  for(int i=1;i<=nails;i++){
    for(int j=1;j<=i;j++)
      res+=(nailMap[i][j]>0);
  }
  cout<<res<<endl;
  /*  for(int i=1;i<=nails+3;i++){
    for(int j=1;j<=i+3;j++)
      cout<<nailMap[i][j];
    cout<<endl;
  }*/
  return 0;
}