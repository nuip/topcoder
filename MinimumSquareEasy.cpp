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

class MinimumSquareEasy {
public:
  long long minArea(vector <int> x, vector <int> y) {
    int i,j,k,minL=1<<30,minx,maxx,miny,maxy;
    int n=x.size();
    minL=2123456789;
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        minx=miny=1123456789;
        maxx=maxy=-1123456789;
        for(k=0;k<n;k++){
          if(k==i || k==j)continue;
          minx=min(minx,x[k]);
          maxx=max(maxx,x[k]);
          miny=min(miny,y[k]);
          maxy=max(maxy,y[k]);
        }
      //  cout<<i<<","<<j<<":"<<max(maxx-minx,maxy-miny)<<endl;
        minL=min(minL,max(maxx-minx,maxy-miny));
      }
    }
    return ll(minL+2)*ll(minL+2);
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {0, 1, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0, 1, 5}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 4LL; verify_case(0, Arg2, minArea(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {-1, -1, 0, 2, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-2, -1, 0, -1, -2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 9LL; verify_case(1, Arg2, minArea(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {1000000000, -1000000000, 1000000000, -1000000000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1000000000, 1000000000, -1000000000, -1000000000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 4000000008000000004LL; verify_case(2, Arg2, minArea(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {93, 34, 12, -11, -7, -21, 51, -22, 59, 74, -19, 29, -56, -95, -96, 9, 44, -37, -54, -21}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {64, 12, -43, 20, 55, 74, -20, -54, 24, 20, -18, 77, 86, 22, 47, -24, -33, -57, 5, 7}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 22801LL; verify_case(3, Arg2, minArea(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  MinimumSquareEasy ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// There are N points in the plane. You are given their description as two vector <int>s, x and y, with N elements each. The N points have coordinates (x[0],y[0]), (x[1],y[1]), ..., (x[N-1],y[N-1]).

You want to draw a single square onto the plane. The vertices of the square must have integer coordinates, and the sides of the square must be parallel to the coordinate axes. Additionally, at least N-2 of the N given points must lie strictly inside the square (i.e., not on its boundary).

Return the smallest possible area of a square that satisfies these constraints.

DEFINITION
Class:MinimumSquareEasy
Method:minArea
Parameters:vector <int>, vector <int>
Returns:long long
Method signature:long long minArea(vector <int> x, vector <int> y)


CONSTRAINTS
-x will contain between 3 and 50 elements, inclusive.
-y will contain the same number of elements as x.
-All points will be pairwise distinct.
-Each element of x will be between -1,000,000,000 and 1,000,000,000, inclusive.
-Each element of y will be between -1,000,000,000 and 1,000,000,000, inclusive.


EXAMPLES

0)
{0, 1, 2}
{0, 1, 5}

Returns: 4

The square must contain at least one of the three given points. One of the optimal solutions is the square with opposite corners at (-1,-1) and (1,1).

1)
{-1, -1, 0, 2, 0}
{-2, -1, 0, -1, -2}

Returns: 9

This time the square must contain at least three of the five given points. The optimal solution is the square with opposite corners at (-2,-3) and (1,0).

2)
{1000000000, -1000000000, 1000000000, -1000000000}
{1000000000, 1000000000, -1000000000, -1000000000}

Returns: 4000000008000000004

In this case one of the optimal solutions is a square that contains all four points.

3)
{93, 34, 12, -11, -7, -21, 51, -22, 59, 74, -19, 29, -56, -95, -96, 9, 44, -37, -54, -21}
{64, 12, -43, 20, 55, 74, -20, -54, 24, 20, -18, 77, 86, 22, 47, -24, -33, -57, 5, 7}

Returns: 22801



*/
// END CUT HERE
