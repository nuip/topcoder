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
#define P pair<int,int>
// BEGIN CUT HERE
#define long_long __int64
// END CUT HERE

using namespace std;
typedef long_long ll;

class AlbertoTheAviator {
public:
  int MaximumFlights(int F, vector <int> duration, vector <int> refuel) {
    vector<P> dr;
    int i,j,dri=0,re=0;
    vector<int> dp(5123),tmp;

    for(i=0;i<duration.size();i++){
      dr.pb(P(refuel[i],duration[i]));
    }
    sort(dr.begin(),dr.end());
    fill(dp.begin(),dp.end(),0);
 //   cout<<dr[0].X<<","<<dr[0].Y<<endl;

    for(dri=0;dri<dr.size();dri++){
      tmp=dp;
      //for(i=0;i<dr[dri].X;i++)cout<<" ,";;
      for(i=dr[dri].Y;i<=F;i++){
        dp[i]=max(tmp[i-dr[dri].Y+dr[dri].X]+1,tmp[i]);
        re=max(dp[i],re);
        //cout<<dp[i]<<",";
      }//cout<<endl;
    }
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 10; int Arr1[] = {10}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 1; verify_case(0, Arg3, MaximumFlights(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 10; int Arr1[] = {8, 4}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0, 2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 2; verify_case(1, Arg3, MaximumFlights(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 12; int Arr1[] = {4, 8, 2, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {2, 0, 0, 0}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 3; verify_case(2, Arg3, MaximumFlights(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 9; int Arr1[] = {4, 6}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0, 1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 2; verify_case(3, Arg3, MaximumFlights(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arg0 = 100; int Arr1[] = {101}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {100}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 0; verify_case(4, Arg3, MaximumFlights(Arg0, Arg1, Arg2)); }
	void test_case_5() { int Arg0 = 1947; int Arr1[] = {2407, 2979, 1269, 2401, 3227, 2230, 3991, 2133, 3338, 356, 2535, 3859, 3267, 365}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {2406, 793, 905, 2400, 1789, 2229, 1378, 2132, 1815, 355, 72, 3858, 3266, 364}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 3; verify_case(5, Arg3, MaximumFlights(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  AlbertoTheAviator ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Alberto is an aviation pioneer.
He pilots an airplane called "14-bis".
Initially, there are F units of fuel in the fuel tank of his airplane.

There are some flight missions Alberto may take.
The missions all start and end in the same location, and he may do them in any order.
However, he can only do each mission at most once.
You are given two vector <int>s of the same length: duration and refuel.
For each valid i:

duration[i] is the amount of fuel consumed while running mission i
After Alberto completes mission i and gets paid, he will buy refuel[i] units of fuel. This amount will always be strictly smaller than the amount consumed during the mission.


Alberto can only choose a mission if he has enough fuel for it.
That is, at the beginning of the mission his fuel tank must have at least duration[i] units of fuel.

Compute and return the maximum number of missions Alberto can take.

DEFINITION
Class:AlbertoTheAviator
Method:MaximumFlights
Parameters:int, vector <int>, vector <int>
Returns:int
Method signature:int MaximumFlights(int F, vector <int> duration, vector <int> refuel)


CONSTRAINTS
-F will be between 1 and 5,000 inclusive.
-duration and refuel will have between 1 and 50 elements, inclusive.
-Each element of duration will be between 1 and 5,000, inclusive.
-Each element of refuel will be between 0 and 5,000, inclusive.
-For each i, refuel[i] will be strictly smaller than duration[i].
-duration and refuel will contain the same number of elements.


EXAMPLES

0)
10
{10}
{0}

Returns: 1

There is only one mission. Alberto has enough fuel to take it, so the optimal solution is to take it.

1)
10
{8, 4}
{0, 2}

Returns: 2



2)
12
{4, 8, 2, 1}
{2, 0, 0, 0}

Returns: 3



3)
9
{4, 6}
{0, 1}

Returns: 2



4)
100
{101}
{100}

Returns: 0

There is only one mission. Alberto does not have enough fuel to take it. The answer is 0.

5)
1947
{2407, 2979, 1269, 2401, 3227, 2230, 3991, 2133, 3338, 356, 2535, 3859, 3267, 365}
{2406, 793, 905, 2400, 1789, 2229, 1378, 2132, 1815, 355, 72, 3858, 3266, 364}

Returns: 3



*/
// END CUT HERE
