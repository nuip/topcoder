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

class ConvexPolygonGame {
public:
  string winner(vector <int> X, vector <int> Y) {
    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {0, 1, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0, 0, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Petya"; verify_case(0, Arg2, winner(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {0, 4, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0, 0, 2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Masha"; verify_case(1, Arg2, winner(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {0, 100, 100, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0, 0, 100, 100}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Masha"; verify_case(2, Arg2, winner(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {0, 50, 100, 50}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0, -1, 0, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Petya"; verify_case(3, Arg2, winner(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {-100000, 100000, 100000, -100000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-1, -1, 1, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Masha"; verify_case(4, Arg2, winner(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  ConvexPolygonGame ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Little Petya likes convex polygons a lot. Recently he has received a convex polygon as a gift from his mother. The only thing that Petya likes more than convex polygons is playing with little Masha. Petya invented the following game for two players that involves his polygon.
At the beginning of the game there is a convex polygon drawn on the plane. The coordinates of vertices of this polygon are given in vector <int> X and vector <int> Y. Petya and Masha take alternate turns, Masha plays first. On his or her turn the player draws a new convex polygon that has the following properties:

 All vertices of the new polygon have integer coordinates.

 Each new vertex is located either strictly inside the old polygon or on an edge of the old polygon.

 No vertex of the new polygon coincides with any vertex of the old polygon.

 No three vertices of the new polygon lie on the same line.

 The new polygon has non-zero area.


Note that the new polygon and the old polygon are not required to have the same number of vertices. 
After drawing a new polygon the player erases the old one. A player who can't make a move loses the game. Determine who will be the winner if both kids play optimally. If the winner is Masha, return the string "Masha" (without quotes), otherwise return "Petya".

DEFINITION
Class:ConvexPolygonGame
Method:winner
Parameters:vector <int>, vector <int>
Returns:string
Method signature:string winner(vector <int> X, vector <int> Y)


CONSTRAINTS
-X will contain between 3 and 50 elements, inclusive.
-Y will contain between 3 and 50 elements, inclusive.
-X and Y will contain the same number of elements.
-Each element of X will be between -100 000 and 100 000, inclusive.
-Each element of Y will be between -100 000 and 100 000, inclusive.
-The polygon represented by X and Y will be convex, will have non-zero area and won't contain any 3 vertices that are located on the same line.
-Vertices of the polygon will be listed in counter-clockwise order.


EXAMPLES

0)
{0, 1, 0}
{0, 0, 1}

Returns: "Petya"

Masha has no valid moves, so she loses the game immediately.

1)
{0, 4, 2}
{0, 0, 2}

Returns: "Masha"

One of the possible Masha's moves is to select the triangle (1, 0), (3, 1), (1, 1). Regardless of her first move Petya will never be able to make the next move.

2)
{0, 100, 100, 0}
{0, 0, 100, 100}

Returns: "Masha"



3)
{0, 50, 100, 50}
{0, -1, 0, 1}

Returns: "Petya"



4)
{-100000, 100000, 100000, -100000}
{-1, -1, 1, 1}

Returns: "Masha"



*/
// END CUT HERE
