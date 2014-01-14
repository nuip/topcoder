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

int main(){
  vector<int> item;
  item.push_back(100);item.push_back(100);item.push_back(100);

  multiset <int> s;
  for(int i=0;i<item.size();i++)
    s.insert(item[i]);

  multiset<int> :: iterator it=s.end();
  int cur=0;
  while(!s.empty()){
    it=s.end();
    it--;
    int v=*it;
    if(v==100){
      cur+=(s.size()+1)/3;
      break;
    }
    s.erase(it);
    it=s.upper_bound(300-v);
    cur++;
    if(it==s.begin())continue;
    else{
      s.erase(--it);
    }
  }
  cout<<cur<<endl;
}