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

class PackingBallsDiv1 {
public:
  int minPacks(int K, int A, int B, int C, int D) {
    vector<ll> X;
    X.pb(A);
    int i,j;
    for(i=1;i<k;i++){
      X.pb((X[i-1]*B+C)%D+1);
    }
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 4; int Arg2 = 2; int Arg3 = 5; int Arg4 = 6; int Arg5 = 4; verify_case(0, Arg5, minPacks(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_1() { int Arg0 = 1; int Arg1 = 58; int Arg2 = 23; int Arg3 = 39; int Arg4 = 93; int Arg5 = 58; verify_case(1, Arg5, minPacks(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_2() { int Arg0 = 23; int Arg1 = 10988; int Arg2 = 5573; int Arg3 = 4384; int Arg4 = 100007; int Arg5 = 47743; verify_case(2, Arg5, minPacks(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_3() { int Arg0 = 100000; int Arg1 = 123456789; int Arg2 = 234567890; int Arg3 = 345678901; int Arg4 = 1000000000; int Arg5 = 331988732; verify_case(3, Arg5, minPacks(Arg0, Arg1, Arg2, Arg3, Arg4)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  PackingBallsDiv1 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// We have balls of K different colors.
The colors are numbered 0 through K-1, and the number of balls of color i is X[i].
We want to divide the balls into as few packages as possible.
Each package must contain between 1 and K balls, inclusive.
Additionally, each package must be either a "normal set" (all balls in the package have the same color), or a "variety set" (no two balls have the same color).

You are given the int K.
You are also given ints A, B, C, and D.
Use these to generate the array X using the following pseudocode:

X[0] = A
for i = 1 to K-1:
    X[i] = (X[i-1] * B + C) % D + 1


Compute and return the smallest possible number of packages.

DEFINITION
Class:PackingBallsDiv1
Method:minPacks
Parameters:int, int, int, int, int
Returns:int
Method signature:int minPacks(int K, int A, int B, int C, int D)


NOTES
-You can assume that the answer will fit into a signed 32-bit integer.


CONSTRAINTS
-K will be between 1 and 100,000, inclusive.
-B, C and D will be between 1 and 1,000,000,000, inclusive.
-A will be between 1 and D, inclusive.


EXAMPLES

0)
3
4
2
5
6

Returns: 4

There are three colors of balls.
Using the pseudocode in the problem statement, we can compute that X[0]=4, X[1]=2, and X[2]=4.
As there are 10 balls and we can only put at most 3 into each package, we need at least 4 packages.
One possible solution with 4 packages is {0,1,2}, {0,0}, {0,1}, and {2,2,2}.
(That is, the first package contains one ball of each color, the second package contains two balls of color 0, and so on.)

1)
1
58
23
39
93

Returns: 58

All the balls have the same color, and each package can only contain one ball. Thus, the number of packages is the same as the number of balls.

2)
23
10988
5573
4384
100007

Returns: 47743



3)
100000
123456789
234567890
345678901
1000000000

Returns: 331988732

Watch out for integer overflow when generating X.

*/
// END CUT HERE
