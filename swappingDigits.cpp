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
//--
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


using namespace std;

class SwappingDigits{
public:
  string minNumber(string num){
    int j,i;
    int mini=0;
    char temp;
    for(j=0;j<num,size();j++){
      mini=j;
      for(i=j+1;i<num.size();i++){
        if(num[i]=='0')continue;
        if(num[i]<=num[mini]){
          mini=i;
        }
      }
      if(mini!=j)break;
    }
    if(j<num.size()){
      temp=num[mini];
      num[mini]=num[j];
      num[j]=temp;
    }
    return num;
  }
};

int main(){

  return 0;
}