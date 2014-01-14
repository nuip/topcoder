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

class WinterAndPresents {
public:
  long long getNumber(vector <int> apple, vector <int> orange) {
    vector<ll> A(apple.size()),O(orange.size());
    ll i,j,m,M,re,X=5123456,x;
    for(i=0;i<apple.size();i++){
      A[i]=apple[i];
      O[i]=orange[i];
    }
    for(i=0;i<A.size();i++)
      if(X>A[i]+O[i])
        X=A[i]+O[i];
    re=X;
    for(i=0;i<A.size();i++){
      if(A[i]>X){
        re+=(1+X)*X/2;
      }else{
        re+=(1+A[i])*A[i]/2+(X-A[i])*A[i];
      }
      if(O[i]<X){
        re-=(1+X-O[i])*(X-O[i])/2;
      }
    }
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 3LL; verify_case(0, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {1, 2, 0, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {4, 5, 0, 6}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 0LL; verify_case(1, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {2, 2, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 2, 2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 16LL; verify_case(2, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {7, 4, 5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 10, 2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 46LL; verify_case(3, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {1000000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1000000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 1000002000000LL; verify_case(4, Arg2, getNumber(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  WinterAndPresents ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// 
It's winter time!
You need to prepare a Christmas gift for your friend.




You have several bags arranged in a row.
The bags only contain apples and oranges.
You are given an vector <int> apple and an vector <int> orange.
For each i, the i-th element of apple represents the number of apples in the i-th bag, and the i-th element of orange represents the number of oranges in the i-th bag.




You will choose the gift using the following procedure:
First, you will choose any positive integer X such that there are at least X pieces of fruit in each bag.
Then, you will take exactly X pieces of fruit out of each bag, and combine all the fruit into one present.
Return the number of different gifts that may be produced by following the given procedure.
(Two gifts are considered different if they contain a different number of apples or a different number of oranges.)


DEFINITION
Class:WinterAndPresents
Method:getNumber
Parameters:vector <int>, vector <int>
Returns:long long
Method signature:long long getNumber(vector <int> apple, vector <int> orange)


CONSTRAINTS
-apple will contain between 1 and 50 elements, inclusive.
-orange will contain between 1 and 50 elements, inclusive.
-apple and orange will contain the same number of elements.
-Each element of apple and orange will be between 0 and 1,000,000, inclusive.


EXAMPLES

0)
{1}
{1}

Returns: 3

Three different presents are possible in this case: 


0 apples and 1 orange


1 apple and 0 oranges


1 apple and 1 orange



1)
{1, 2, 0, 3}
{4, 5, 0, 6}

Returns: 0

As there is an empty bag, there is no way to choose the present.

2)
{2, 2, 2}
{2, 2, 2}

Returns: 16



3)
{7, 4, 5}
{1, 10, 2}

Returns: 46



4)
{1000000}
{1000000}

Returns: 1000002000000



*/
// END CUT HERE
