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

class FindPolygons {
public:
  double EPS=1e-9;
  double minimumPolygon(int L) {
    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 4; double Arg1 = 0.0; verify_case(0, Arg1, minimumPolygon(Arg0)); }
	void test_case_1() { int Arg0 = 5; double Arg1 = -1.0; verify_case(1, Arg1, minimumPolygon(Arg0)); }
	void test_case_2() { int Arg0 = 12; double Arg1 = 2.0; verify_case(2, Arg1, minimumPolygon(Arg0)); }
	void test_case_3() { int Arg0 = 4984; double Arg1 = 819.0; verify_case(3, Arg1, minimumPolygon(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  FindPolygons ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// 
Alice is a high school student.
One day, her teacher asked her to draw a simple polygon (see Notes for a definition).
The polygon must satisfy two conditions:

First, each of its vertices must be at a grid point.
(I.e., both coordinates of each vertex must be integers.)

Second, the perimeter of the polygon must be exactly equal to the integer L.

You are given the int L.
If there is no such polygon, return -1.
If there is at least one such polygon, find the one which has the least number of sides. If there are still more than one choice, find the one with the smallest possible difference between the lengths of its longest side and its shortest side. Return the difference between the lengths of its longest side and its shortest side.

DEFINITION
Class:FindPolygons
Method:minimumPolygon
Parameters:int
Returns:double
Method signature:double minimumPolygon(int L)


NOTES
-A simple polygon is a polygon such that no two consecutive sides are parallel and no two non-consecutive sides share a common point.
-Return values with absolute or relative error at most 1e-9 will be accepted as correct. 


CONSTRAINTS
-L will be between 1 and 5000, inclusive.


EXAMPLES

0)
4

Returns: 0.0

There is no triangle whose perimeter is 4, but there is a square.

1)
5

Returns: -1.0

There is no simple polygon that matches all the constraints.

2)
12

Returns: 2.0

There is a triangle whose sides are 3, 4, 5.

3)
4984

Returns: 819.0



*/
// END CUT HERE
