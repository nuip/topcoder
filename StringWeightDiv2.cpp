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

#define ll long long
// BEGIN CUT HERE
#define ll __int64
// END CUT HERE

using namespace std;

ll gcd1(ll n,ll m,ll &x,ll &y){

  if(m==0){
   x=0;
   y=1;
   return n;
  }
  
  ll temp,re=gcd1(m,n%m,x,y);
  temp=x;
  x=-(n/m)*x+y;
  y=temp;
  return re;
}

ll gcd(ll n,ll m,ll &x,ll &y){
if(n<m)return gcd1(m,n,x,y);
else return gcd1(n,m,y,x);
}

class modint{
public:
  ll v,mod;

  modint(ll tmp,ll valu=0){
    mod=tmp;
    v=valu;
  }

  void modify(){
    if(v<0){
      v-=(v/mod)*mod-mod;
    }
    v%=mod;
  }

  modint modify(ll nn){
    modint n(mod,nn);
    return modify(n);
  }

  modint modify(modint n){
    n.modify();
    return n;
  }

  modint& operator=(ll n){
    v=modify(n).v;
    return *this;
  }
  modint& operator=(modint n){
    v=modify(n).v;
    return *this;
  }

  modint operator+(ll n){
    return modify(v+modify(n).v);
  }
  modint operator+(modint n){
    return modify(v+modify(n).v);
  }
  modint& operator+=(ll n){
    v=modify(v+modify(n).v).v;
    return *this;
  }
  modint& operator+=(modint n){
    v=modify(v+modify(n).v).v;
    return *this;
  }

  modint operator-(ll n){
    return modify(v-modify(n).v);
  }
  modint& operator-=(ll n){
    v=modify(v-modify(n).v).v;
    return *this;
  }
  modint operator-(modint n){
    return modify(v-modify(n).v);
  }
  modint& operator-=(modint n){
    v=modify(v-modify(n).v).v;
    return *this;
  }

  modint operator*(ll n){
    return modify(v*modify(n).v);
  }
  modint& operator*=(ll n){
    v=modify(v*modify(n).v).v;
    return *this;
  }
  modint operator*(modint n){
    return modify(v*modify(n).v);
  }
  modint& operator*=(modint n){
    v=modify(v*modify(n).v).v;
    return *this;
  }

  modint operator/(ll n){
    ll ninv,hoge;
    gcd(n,mod,ninv,hoge);
    return modify(v*modify(ninv).v);
  }
  modint& operator/=(ll n){
    ll ninv,hoge;
    gcd(n,mod,ninv,hoge);
    v=modify(v*modify(ninv).v).v;
    return *this;
  }
  modint operator/(modint n){
    ll ninv,hoge;
    gcd(n.v,mod,ninv,hoge);
    return modify(v*modify(ninv).v);
  }
  modint& operator/=(modint n){
    ll ninv,hoge;
    gcd(n.v,mod,ninv,hoge);
    v=modify(v*modify(ninv).v).v;
    return *this;
  }
};

class StringWeightDiv2 {
public:
  int countMinimums(int L) {
    modint re(1000000009,1);
    int i;
    if(L<=26){
      for(i=0;i<L;i++){
        re*=26-i;
      }
    }else{
      for(i=0;i<26;i++){
        re*=(i+1);
      }
      for(i=0;i<25;i++){
        re*=L-1-i;
      }
      for(i=0;i<25;i++){
        re/=i+1;
      }
    }
    return re.v;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; int Arg1 = 26; verify_case(0, Arg1, countMinimums(Arg0)); }
	void test_case_1() { int Arg0 = 2; int Arg1 = 650; verify_case(1, Arg1, countMinimums(Arg0)); }
	void test_case_2() { int Arg0 = 50; int Arg1 = 488801539; verify_case(2, Arg1, countMinimums(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  StringWeightDiv2 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// In this problem, all strings consist of uppercase English letters only.
That is, there are 26 distinct letters.

The weight of a string S can be computed as follows: 
for each letter that occurs at least once in S, its leftmost and rightmost occurrences L and R are found and the weight is increased by R-L.

For example, if S="ABCACAZ", the weight of S is (5-0) + (1-1) + (4-2) + (6-6) = 7.
(The leftmost occurrence of 'A' is at the index L=0, the rightmost one is at R=5, so 'A' contributes 5-0 = 5 to the weight of S. The only 'B' contributes 0, the pair of 'C's adds 2, and the only 'Z' adds 0.)

You are given a int L.
Consider all strings of length L.
Compute the weight of each of these strings.
The strings with the minimum weight among all of them are called light.
Your task is to count the number of light strings of length L.
Since this count may be very large, return it modulo 1,000,000,009.

DEFINITION
Class:StringWeightDiv2
Method:countMinimums
Parameters:int
Returns:int
Method signature:int countMinimums(int L)


CONSTRAINTS
-L will be between 1 and 1000, inclusive.


EXAMPLES

0)
1

Returns: 26

Any string of length 1 has weight equal to 0.

1)
2

Returns: 650

We can divide strings of length 2 into two classes: the strings with distinct first and second letter, and the strings with two equal letters. The strings composed of two equal letters have weight 1. All the other strings have weight 0. Thus, the number of strings of minimum weight is 26*26-26=650.

2)
50

Returns: 488801539



*/
// END CUT HERE
