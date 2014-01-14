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

class LittleElephantAndString {
public:
  int getNumber(string A, string B) {
    int a,b,re;
    multiset<int> rem;
    multiset<int>::iterator it;
    for(a=b=B.size()-1;a>=0;a--){
      if(A[a]==B[b]){
        b--;
      }else{
        rem.insert(A[a]);
      }
    }
    re=b+1;
    for(;b>=0;b--){
      if((it=rem.find(B[b])) != rem.end()){
        rem.erase(it);
      }else{
        return -1;
      }
    }
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "ABC"; string Arg1 = "CBA"; int Arg2 = 2; verify_case(0, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "A"; string Arg1 = "B"; int Arg2 = -1; verify_case(1, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "AAABBB"; string Arg1 = "BBBAAA"; int Arg2 = 3; verify_case(2, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; string Arg1 = "ZYXWVUTSRQPONMLKJIHGFEDCBA"; int Arg2 = 25; verify_case(3, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "A"; string Arg1 = "A"; int Arg2 = 0; verify_case(4, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_5() { string Arg0 = "DCABA"; string Arg1 = "DACBA"; int Arg2 = 2; verify_case(5, Arg2, getNumber(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  LittleElephantAndString ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// 
Little Elephant from the Zoo of Lviv likes strings.




You are given a string A and a string B of the same length. In one turn Little Elephant can choose any character of A and move it to the beginning of the string (i.e., before the first character of A). Return the minimal number of turns needed to transform A into B. If it's impossible, return -1 instead.


DEFINITION
Class:LittleElephantAndString
Method:getNumber
Parameters:string, string
Returns:int
Method signature:int getNumber(string A, string B)


CONSTRAINTS
-A will contain between 1 and 50 characters, inclusive.
-B will contain between 1 and 50 characters, inclusive.
-A and B will be of the same length.
-A and B will consist of uppercase letters ('A'-'Z') only.


EXAMPLES

0)
"ABC"
"CBA"

Returns: 2

The optimal solution is to make two turns. On the first turn, choose character 'B' and obtain string "BAC". On the second turn, choose character 'C' and obtain "CBA".

1)
"A"
"B"

Returns: -1

In this case, it's impossible to transform A into B.

2)
"AAABBB"
"BBBAAA"

Returns: 3



3)
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"ZYXWVUTSRQPONMLKJIHGFEDCBA"

Returns: 25



4)
"A"
"A"

Returns: 0



5)
"DCABA"
"DACBA"

Returns: 2



*/
// END CUT HERE
