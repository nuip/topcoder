#include <string>
#include <vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<functional>
#include<list>
#include<deque>
#include<bitset>
#include<set>
#include<map>
#include<cstdio>
#include<cstring>
#include<sstream>
#define X first
#define Y second
#define pb push_back
#define pqPair priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >

#define long_long long long

using namespace std;
typedef long_long ll;

class FoxAndGomoku {
public:
  string win(vector <string> board) {
    int cnsq1,cnsq2,i,j;
    bool f=0;
    /*for(i=0;i<board.size();i++){
      cnsq1=cnsq2=0;
      for(j=0;j<board.size();j++){
        if(board[i][j]=='o'){
          cnsq1++;
        }else{
          cnsq1=0;
        }
        if(board[j][i]=='o'){
          cnsq2++;
        }else{
          cnsq2=0;
        }
        if(cnsq1>=5 || cnsq2>=5){
          f=1;
        }
      }
    }
    for(i=0;i<=2*(board.size()-1);i++){
      cnsq1=0;
      for(j=max(0,i-(int)board.size()+1);j<=i&&j<board.size();j++){
        //cout<<"("<<i-j<<","<<j<<"),";
        if(board[i-j][j]=='o'){
          cnsq1++;
        }else{
          cnsq1=0;
        }
        if(cnsq1>=5){
          f=1;
        }
      }
    }*/
    cout<<board[0].length()<<",,,,"<<board.size()<<endl;
    i=1-board.size();
    cout<<i<<endl;
    cout<<board.size()-i<<endl;
    if(0<board.size()-i)cout<<"true";
    while(0<board.size()-i){
    cout<<board[0]<<endl;
      cout<<"i:["<<i;
      cnsq1=0;
      cout<<"]";
      for(j=-min(0,i);j<board.size()&&i+j<board.size();j++){
        cout<<"("<<i+j<<","<<j<<"),";
        if(board[i+j][j]=='o'){
          cnsq1++;
        }else{
          cnsq1=0;
        }
        if(cnsq1>=5){
          f=1;
        }
      }
      i++;
    }
    return (f?"found":"not found");
  }
  

};



// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
