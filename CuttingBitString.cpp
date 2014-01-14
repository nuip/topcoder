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
// BEGIN CUT HERE
#define long_long __int64
// END CUT HERE

using namespace std;
typedef long_long ll;

class CuttingBitString {
public:
  string p5str[50];
  int N;
  string gS(ll n){
    string re="";
    while(n){
      re=(n%2?"1":"0")+re;
      n/=2;
    }
    return re;
  }
  int genStrs(){
    ll n=1;
    int i=0;
    string tmp;
    for(i=0;;i++,n*=5){
      tmp=gS(n);
      if(tmp.size()>50)
        break;
      p5str[i]=(tmp);
    }
    return i;
  }
  int solve(string S){
    if(!S.size())
      return 0;
  //  cout<<S<<endl;
    int ind,tmp,re=100;
   /* ind=upper_bound(p5str,p5str+N,S)-p5str;
    if(ind){
      ind--;
      cout<<"ind:"<<ind<<endl;
      while(S.substr(0,p5str[ind].size())==p5str[ind]){
        tmp=solve(S.substr(p5str[ind].size()))+1;
        re=min(re,tmp);
        ind--;
      }*/
    for(ind=0;ind<N;ind++){
      if(S.substr(0,p5str[ind].size())!=p5str[ind])
        continue;
      tmp=solve(S.substr(p5str[ind].size()))+1;
      re=min(re,tmp);
    }
    return re;
  }
  int getmin(string S) {
    int i,j,re=0,ind;
    N=genStrs();
    sort(p5str,p5str+N);
    for(i=0;i<N;i++){
  //    cout<<p5str[i]<<endl;
    }
    if((re=solve(S))>=100)
      re=-1;
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "101101101"; int Arg1 = 3; verify_case(0, Arg1, getmin(Arg0)); }
	void test_case_1() { string Arg0 = "1111101"; int Arg1 = 1; verify_case(1, Arg1, getmin(Arg0)); }
	void test_case_2() { string Arg0 = "00000"; int Arg1 = -1; verify_case(2, Arg1, getmin(Arg0)); }
	void test_case_3() { string Arg0 = "110011011"; int Arg1 = 3; verify_case(3, Arg1, getmin(Arg0)); }
	void test_case_4() { string Arg0 = "1000101011"; int Arg1 = -1; verify_case(4, Arg1, getmin(Arg0)); }
	void test_case_5() { string Arg0 = "111011100110101100101110111"; int Arg1 = 5; verify_case(5, Arg1, getmin(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  CuttingBitString ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// We are in a distant future.
After the downfall of mankind, the Earth is now ruled by fairies.
The "Turing game Online" website is hot among fairies right now.
On this website, everyone can play the programming puzzle "Turing game".

Fairies love powers of 5, that is, the numbers 1, 5, 25, 125, 625, and so on.
In the Turing game, the player is given a string of bits (zeros and ones).
The ideal situation is when the string is represents a power of 5 in binary, with no leading zeros.
If that is not the case, the fairy player tries to cut the given string into pieces, each piece being a binary representation of a power of 5, with no leading zeros.
Of course, it may be the case that even this is impossible.
In that case, the fairy player becomes depressed, and bad things happen when a fairy gets depressed.
You, as one of the surviving humans, are in charge of checking the bit strings to prevent the bad things from happening.

You are given a string S that consists of characters '0' and '1' only.
S represents the string given to a player of the Turing game.
Return the smallest positive integer K such that it is possible to cut S into K pieces, each of them being a power of 5.
If there is no such K, return -1 instead.

DEFINITION
Class:CuttingBitString
Method:getmin
Parameters:string
Returns:int
Method signature:int getmin(string S)


CONSTRAINTS
-S will contain between 1 and 50 characters, inclusive.
-Each character in S will be either '0' or '1'.


EXAMPLES

0)
"101101101"

Returns: 3

We can split the given string into three "101"s.
Note that "101" is 5 in binary.

1)
"1111101"

Returns: 1

"1111101" is 5^3.

2)
"00000"

Returns: -1

0 is not a power of 5.

3)
"110011011"

Returns: 3

Split it into "11001", "101" and "1".

4)
"1000101011"

Returns: -1



5)
"111011100110101100101110111"

Returns: 5



*/
// END CUT HERE
