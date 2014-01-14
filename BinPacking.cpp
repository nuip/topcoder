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

class BinPacking {
public:
  int minBins(vector <int> item) {
    sort(item.begin(),item.end(),greater<int>());
    int i,j,k,l;
    ll used=0,sum=0,re=0;
    while(used+1ll!=(1ll<<item.size())){
      sum=0;
      for(i=0;i<item.size();i++){
        if(used&(1ll<<i))continue;
        if(sum+item[i]<=300){
          used|=(1ll<<i);
          sum+=item[i];
        }
      }
      re++;
      cout<<used<<",";
    }
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {150, 150, 150, 150, 150}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(0, Arg1, minBins(Arg0)); }
	void test_case_1() { int Arr0[] = {130, 140, 150, 160}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(1, Arg1, minBins(Arg0)); }
	void test_case_2() { int Arr0[] = {100, 100, 100, 100, 100, 100, 100, 100, 100}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(2, Arg1, minBins(Arg0)); }
	void test_case_3() { int Arr0[] = {100, 200, 100, 100, 100, 100, 200, 100, 200}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(3, Arg1, minBins(Arg0)); }
	void test_case_4() { int Arr0[] = {157, 142, 167, 133, 135, 157, 143, 160, 141, 123, 162, 159, 165, 137, 138, 152}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 8; verify_case(4, Arg1, minBins(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  BinPacking ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Fox Ciel has some items. The weight of the i-th (0-based) item is item[i]. She wants to put all items into bins.


The capacity of each bin is 300. She can put an arbitrary number of items into a single bin, but the total weight of items in a bin must be less than or equal to 300.


You are given the vector <int> item. It is known that the weight of each item is between 100 and 300, inclusive. Return the minimal number of bins required to store all items.


DEFINITION
Class:BinPacking
Method:minBins
Parameters:vector <int>
Returns:int
Method signature:int minBins(vector <int> item)


CONSTRAINTS
-item will contain between 1 and 50 elements, inclusive.
-Each element of item will be between 100 and 300, inclusive.


EXAMPLES

0)
{150, 150, 150, 150, 150}

Returns: 3

You have five items and each bin can hold at most two of them. You need at least three bins.

1)
{130, 140, 150, 160}

Returns: 2

For example, you can distribute the items in the following way:

Bin 1: 130, 150
Bin 2: 140, 160



2)
{100, 100, 100, 100, 100, 100, 100, 100, 100}

Returns: 3



3)
{100, 200, 100, 100, 100, 100, 200, 100, 200}

Returns: 4



4)
{157, 142, 167, 133, 135, 157, 143, 160, 141, 123, 162, 159, 165, 137, 138, 152}

Returns: 8



*/
// END CUT HERE
