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

class LongLongTripDiv1 {
public:
  string isAble(int N, vector <int> A, vector <int> B, vector <int> D, long long T) {
    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arr1[] = {0,0,1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {2,1,2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {7,6,5}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 11LL; string Arg5 = "Possible"; verify_case(0, Arg5, isAble(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_1() { int Arg0 = 3; int Arr1[] = {0,0,1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {2,1,2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {7,6,5}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 25LL; string Arg5 = "Possible"; verify_case(1, Arg5, isAble(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_2() { int Arg0 = 2; int Arr1[] = {0}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 9LL; string Arg5 = "Possible"; verify_case(2, Arg5, isAble(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_3() { int Arg0 = 2; int Arr1[] = {1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 1000000000000000000LL; string Arg5 = "Impossible"; verify_case(3, Arg5, isAble(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_4() { int Arg0 = 4; int Arr1[] = {0,0,1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {2,1,2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {10,10,10}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 1000LL; string Arg5 = "Impossible"; verify_case(4, Arg5, isAble(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_5() { int Arg0 = 9; int Arr1[] = {4,8,5,8,3,6,2,6,7,6,6}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {2,7,1,5,1,3,1,1,5,4,2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {6580,8822,1968,673,1394,9337,5486,1746,5229,4092,195}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); long long Arg4 = 937186357646035002LL; string Arg5 = "Impossible"; verify_case(5, Arg5, isAble(Arg0, Arg1, Arg2, Arg3, Arg4)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  LongLongTripDiv1 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// There is a country with N cities. The cities are numbered 0 through N-1. There are some bidirectional roads in the country. Each road connects a pair of cities. More precisely, for each i, road i connects the cities A[i] and B[i].

Limit is a deer that likes to travel along the roads. Traveling along road i (in either direction) takes him exactly D[i] minutes. Limit does not like cities, so he never waits in a city.

Limit is currently in the city 0, starting his travels. In exactly T minutes, he wants to be in the city N-1.

You are given the int N; the vector <int>s A, B, and D; and the long long T.
Return "Possible" (quotes for clarity) if Deer Limit can reach city N-1 in exactly T minutes.
Otherwise, return "Impossible".

DEFINITION
Class:LongLongTripDiv1
Method:isAble
Parameters:int, vector <int>, vector <int>, vector <int>, long long
Returns:string
Method signature:string isAble(int N, vector <int> A, vector <int> B, vector <int> D, long long T)


CONSTRAINTS
-N will be between 2 and 50, inclusive.
-A will contain between 1 and 50 elements, inclusive.
-A, B and D will each contain the same number of elements.
-Each element in A and B will be between 0 and N-1, inclusive.
-Each element in D will be between 1 and 10,000, inclusive.
-For each valid i, A[i] and B[i] will be different.
-No two roads will connect the same pair of cities.
-T will be between 1 and 10^18, inclusive.


EXAMPLES

0)
3
{0,0,1}
{2,1,2}
{7,6,5}
11

Returns: "Possible"

city 0 -> city 1 -> city 2 is a valid way.

1)
3
{0,0,1}
{2,1,2}
{7,6,5}
25

Returns: "Possible"

city 0 -> city 2 -> city 1 -> city 0 -> city 2 is a valid way.

2)
2
{0}
{1}
{1}
9

Returns: "Possible"

Here, Limit just travels back and forth between cities 0 and 1 along the only road in the country.

3)
2
{1}
{0}
{1}
1000000000000000000

Returns: "Impossible"



4)
4
{0,0,1}
{2,1,2}
{10,10,10}
1000

Returns: "Impossible"

In this test case, there is absolutely no way how to reach city N-1 from city 0.

5)
9
{4,8,5,8,3,6,2,6,7,6,6}
{2,7,1,5,1,3,1,1,5,4,2}
{6580,8822,1968,673,1394,9337,5486,1746,5229,4092,195}
937186357646035002

Returns: "Impossible"



*/
// END CUT HERE
