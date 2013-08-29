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

class LISNumberDivTwo {
public:
  int calculate(vector <int> seq) {
    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1, 4, 4, 2, 6, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(0, Arg1, calculate(Arg0)); }
	void test_case_1() { int Arr0[] = {5, 8, 9, 12, 16, 32, 50}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(1, Arg1, calculate(Arg0)); }
	void test_case_2() { int Arr0[] = {1, 1, 9, 9, 2, 2, 3, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; verify_case(2, Arg1, calculate(Arg0)); }
	void test_case_3() { int Arr0[] = {50, 40, 30, 20, 10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; verify_case(3, Arg1, calculate(Arg0)); }
	void test_case_4() { int Arr0[] = {42}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(4, Arg1, calculate(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  LISNumberDivTwo ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Let A be a sequence of integers. We want to create this sequence as a concatenation of some (one or more) strictly increasing sequences. The LISNumber of A is the smallest number of strictly increasing sequences we need.

For example, the LISNumber of the sequence A = {1, 4, 4, 2, 6, 3} is 4, since A can be created as {1, 4} + {4} + {2, 6} + {3}, and there is no way to create A by concatenating 3 (or fewer) strictly increasing sequences.

Another example: The LISNumber of the sequence B = {10, 20, 30} is 1, since B is already a strictly increasing sequence.

Note that the optimal way of writing a sequence as a concatenation of some strictly increasing sequences is always unique.

You are given a vector <int> seq. Return the LISNumber of the sequence seq.

DEFINITION
Class:LISNumberDivTwo
Method:calculate
Parameters:vector <int>
Returns:int
Method signature:int calculate(vector <int> seq)


CONSTRAINTS
-seq will contain between 1 and 50 elements, inclusive.
-Each element of seq will be between 1 and 50, inclusive.


EXAMPLES

0)
{1, 4, 4, 2, 6, 3}

Returns: 4

This is the example from the problem statement.

1)
{5, 8, 9, 12, 16, 32, 50}

Returns: 1

In this case, seq itself is already strictly increasing. Thus, the LISNumber of this sequence is 1.

2)
{1, 1, 9, 9, 2, 2, 3, 3}

Returns: 6

{1, 1, 9, 9, 2, 2, 3, 3} = {1} + {1, 9} + {9} + {2} + {2, 3} + {3}

3)
{50, 40, 30, 20, 10}

Returns: 5



4)
{42}

Returns: 1



*/
// END CUT HERE
