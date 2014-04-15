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

class MagicalStringDiv1 {
public:
  int getLongest(string S) {
    int i,j,l[100],r[100];
    memset(l,0,sizeof(l));
    memset(r,0,sizeof(r));
    for(i=0;i<S.size();i++){
      l[i+1]=l[i]+(S[i]=='>');
    }
    for(i=S.size()-1;i>=0;i--){
      r[i]=r[i+1]+(S[i]=='<');
    }
for(i=0;i<S.size();i++)
cout<<l[i]<<",";
    cout<<endl;
    
for(i=0;i<S.size();i++)
cout<<r[i]<<",";
    cout<<endl;
    int re=0;
    for(i=0;i<S.size();i++){
      re=max(re, min(l[i],r[i]));
    }
    for(i=0;i<S.size()-1;i++){
      re=max(re, min(l[i],r[i+1]));
    }
    return re*2;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "<><><<>"; int Arg1 = 4; verify_case(0, Arg1, getLongest(Arg0)); }
	void test_case_1() { string Arg0 = ">>><<<"; int Arg1 = 6; verify_case(1, Arg1, getLongest(Arg0)); }
	void test_case_2() { string Arg0 = "<<<>>>"; int Arg1 = 0; verify_case(2, Arg1, getLongest(Arg0)); }
	void test_case_3() { string Arg0 = "<<<<><>>><>>><>><>><>>><<<<>><>>>>><<>>>>><><<<<>>"; int Arg1 = 24; verify_case(3, Arg1, getLongest(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  MagicalStringDiv1 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Magical Girl Illy uses "magical strings" to cast spells.
For her, a string X is magical if and only if there exists a non-negative integer k such that X is composed of k consecutive '>' characters followed by k consecutive '<' characters.
Note that the empty string is also magical (for k=0).

Once Illy picked up a string S.
Each character of S was either '<' or '>'.
Illy can change S by removing some of its characters.
(The characters she does not remove will remain in their original order.)
Illy wants to change S into a magical string by removing as few of its characters as possible.

You are given the string S.
Compute and return the length of the magical string Illy will obtain from S.

DEFINITION
Class:MagicalStringDiv1
Method:getLongest
Parameters:string
Returns:int
Method signature:int getLongest(string S)


CONSTRAINTS
-S will contain between 1 and 50 characters, inclusive.
-Each character of S will be '<' or '>'.


EXAMPLES

0)
"<><><<>"

Returns: 4

The longest magical string Illy can produce is ">><<".
Its length is 4.
To change S into ">><<", Illy must remove the characters at 0-based indices 0, 2, and 6.

1)
">>><<<"

Returns: 6

S is already a magical string. Therefore Illy doesn't have to remove any character.


2)
"<<<>>>"

Returns: 0

Illy has to remove all characters of S.

3)
"<<<<><>>><>>><>><>><>>><<<<>><>>>>><<>>>>><><<<<>>"

Returns: 24



*/
// END CUT HERE
