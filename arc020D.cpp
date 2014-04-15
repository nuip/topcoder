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
#define all(X) (X).begin(),(X).end()

using namespace std;
typedef long long ll;

int N,M,K,d[200],dist[20][20];
ll dp[1<<12][33][120],ndp[1<<12][33][120],MOD=1000000007;

int main(){
  int i,j,k,l,next;
  cin>>N>>M>>K;
  if(N>12)return 0;

  for(i=0;i<N;i++)
    cin>>d[i];

  for(i=0;i<N;i++){
    for(j=0;j<=i;j++){
      for(k=i;k<N;k++){
        dist[j][k]+=d[i];
        dist[k][j]+=d[i];
      }
    }
  }

  for(i=0;i<N;i++)
    dp[0][0][i]=1;
  for(i=1;i<K;i++){
    for(j=0;j<(1<<N);j++){
      for(k=0;k<M;k++){
        for(l=0;l<N;l++){
          for(next=0;next<N;next++){
            if((j>>next)%2)continue;
            ndp[j&(1<<next)][(k+dist[l][next])%M][next]+=dp[j][k][l];
            ndp[j&(1<<next)][(k+dist[l][next])%M][next]%=MOD;
          }
        }
      }
    }
  }
  ll re=0;
  for(i=0;i<(1<<N);i++){
    for(j=0;j<N;j++){
      re=(re+dp[i][0][j])%MOD;
    }
  }
  cout<<re<<endl;
  return 0;
}