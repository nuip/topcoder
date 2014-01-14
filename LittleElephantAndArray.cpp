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

class LittleElephantAndArray {
public:
  int getNumber(long long A, int N) {
    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { long long Arg0 = 1LL; int Arg1 = 9; int Arg2 = 1; verify_case(0, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_1() { long long Arg0 = 10LL; int Arg1 = 2; int Arg2 = 15; verify_case(1, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_2() { long long Arg0 = 4747774LL; int Arg1 = 1; int Arg2 = 8369; verify_case(2, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_3() { long long Arg0 = 6878542150015LL; int Arg1 = 74; int Arg2 = 977836619; verify_case(3, Arg2, getNumber(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  LittleElephantAndArray ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// 
Little Elephant from the Zoo of Lviv likes sequences of integers.




You are given a long long A and an int N.
Little Elephant has the sequence S = (A, A+1, ..., A+N).
Little Elephant now wants to erase some digits from some of the numbers.
He may erase multiple digits from the same number, but he will not erase any of the numbers completely.
After erasing some digits from a number the gaps disappear.
For example, by erasing the middle digit of the number 147 Little Elephant obtains the number 17 (and not two separate numbers 1 and 7).




It is allowed for some number to contain leading zeroes after erasings.
For example, from the number 1047 Little Elephant may create, among other possibilities, the number 047 or the number 47.
These are two different ways of erasing. 
They are both allowed and the numbers they produce have the same value.




Two ways of erasing the digits are considered different if there is some position in some element of S that was erased in one of the cases and was not erased in the other one.
For example, if S = (11, 12), there are two different ways to change it to (1, 2).
(In one of them we erase the first and in the other we erase the second digit of the number 11.)




After erasing the digits, Little Elephant wants to obtain a non-decreasing sequence.
Let R be the number of different ways to do that.
Return R modulo 1,000,000,007.


DEFINITION
Class:LittleElephantAndArray
Method:getNumber
Parameters:long long, int
Returns:int
Method signature:int getNumber(long long A, int N)


CONSTRAINTS
-A will be between 1 and 1,000,000,000,000,000 (10^15), inclusive.
-N will be between 0 and 100, inclusive.


EXAMPLES

0)
1
9

Returns: 1



1)
10
2

Returns: 15



2)
4747774
1

Returns: 8369



3)
6878542150015
74

Returns: 977836619



*/
// END CUT HERE
