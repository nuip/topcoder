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

class PiecewiseLinearFunctionDiv2 {
public:
  vector <int> countSolutions(vector <int> Y, vector <int> query) {
    vector<int> re;
    int i,j,cnt;
    for(i=0;i<query.size();i++){
      cnt=(query.at(i)==Y.at(0));
      for(j=1;j<Y.size();j++){
        cnt+=(( Y[j-1]<query[i] && query[i]<=Y[j] )||( Y[j-1]>query[i] && query[i]>=Y[j] ));
        if(Y[j-1]==Y[j] && Y[j]==query[i]){
          cnt=-1;
          break;
        }
      //cout<<cnt<<" ";
      }//cout<<endl;
      re.pb(cnt);
    }
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arr0[] = {1, 4, -1, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-2, -1, 0, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0, 1, 2, 3 }; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(0, Arg2, countSolutions(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {0, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-1, 0, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0, -1, 0 }; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(1, Arg2, countSolutions(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {2, 4, 8, 0, 3, -6, 10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0, 1, 2, 3, 4, 0, 65536}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {3, 4, 5, 4, 3, 3, 0 }; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(2, Arg2, countSolutions(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {-178080289, -771314989, -237251715, -949949900, -437883156, -835236871, -316363230, -929746634, -671700962}
; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {-673197622, -437883156, -251072978, 221380900, -771314989, -949949900, -910604034, -671700962, -929746634, -316363230}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {8, 6, 3, 0, 7, 1, 4, 8, 3, 4 }; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(3, Arg2, countSolutions(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  PiecewiseLinearFunctionDiv2 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// F is a function that is defined on all real numbers from the closed interval [1,N].
You are given a vector <int> Y with N elements.
For each i (1 <= i <= N) we have F(i) = Y[i-1].
Additionally, you know that F is piecewise linear: for each i, on the interval [i,i+1] F is a linear function.
The function F is uniquely determined by this information.
For example, if F(4)=1 and F(5)=6 then we must have F(4.7)=4.5.

As another example, this is the plot of the function F for Y = {1, 4, -1, 2}.



You are also given a vector <int> query.
For each i, compute the number of solutions to the equation F(x) = query[i].
Note that sometimes this number of solutions can be infinite.

Return a vector <int> of the same length as query.
For each i, element i of the return value should be -1 if the equation F(x) = query[i] has an infinite number of solutions.
Otherwise, element i of the return value should be the actual number of solutions this equation has.

DEFINITION
Class:PiecewiseLinearFunctionDiv2
Method:countSolutions
Parameters:vector <int>, vector <int>
Returns:vector <int>
Method signature:vector <int> countSolutions(vector <int> Y, vector <int> query)


CONSTRAINTS
-Y will contain between 2 and 50 elements, inclusive.
-Each element of Y will be between -1,000,000,000 and 1,000,000,000, inclusive.
-query will contain between 1 and 50 elements, inclusive.
-Each element of query will be between -1,000,000,000 and 1,000,000,000, inclusive.


EXAMPLES

0)
{1, 4, -1, 2}
{-2, -1, 0, 1}

Returns: {0, 1, 2, 3 }

This is the example from the problem statement. The detailed information about the queries is:

There is no such x that F(x) = -2 is satisfied.
F(x) = -1 is only true for x = 3.
F(x) = 0 has two roots: 2.8 and 10/3.
F(x) = 1 has three roots: 1, 2.6 and 11/3.


1)
{0, 0}
{-1, 0, 1}

Returns: {0, -1, 0 }

This function's plot is a horizontal segment between points (1, 0) and (2, 0). F(x) = 0 is satisfied for any x between 1 and 2 and thus the number of solutions is infinite. For any other value on the right-hand side, it has no solutions.

2)
{2, 4, 8, 0, 3, -6, 10}
{0, 1, 2, 3, 4, 0, 65536}

Returns: {3, 4, 5, 4, 3, 3, 0 }



3)
{-178080289, -771314989, -237251715, -949949900, -437883156, -835236871, -316363230, -929746634, -671700962}

{-673197622, -437883156, -251072978, 221380900, -771314989, -949949900, -910604034, -671700962, -929746634, -316363230}

Returns: {8, 6, 3, 0, 7, 1, 4, 8, 3, 4 }



*/
// END CUT HERE
