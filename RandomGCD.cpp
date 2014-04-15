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
#define MOD (1000000007)

#define long_long long long
// BEGIN CUT HERE
#define long_long __int64
// END CUT HERE

using namespace std;
typedef long_long ll;

class RandomGCD {
public:
  ll pow(ll a,ll b){
    if(b==0)return 1;
    ll tmp= pow(a,b/2);
    if(b%2)return tmp*tmp*a%MOD;
    else return tmp*tmp%MOD;
  }
  int countTuples(int N, int K, int low, int high) {
    if(K> high-low)
      return (low<=K && K<=high);
    int divs[112345];
    ll i,j,k;
    ll re=1,h,l;
    for(i=2;i<=100000;i++)
      for(j=i*2;j<=100000;j+=i)
        divs[j]++;
    for(i=2;i<=536;i++)
      if(536%i==0)
      cout<<i<<":"<<divs[i]<<endl;
    l=(low+K-1)/K;
    h=high/K;
    re=pow(h-l+1,N);
    cout<<l<<","<<h<<","<<re<<endl;
    for(i=2;i<=100000;i++){
      if(h/i==(l-1)/i)continue;
      ll tmp=pow(h/i-(l-1)/i,N);
      re=( re-tmp*(-divs[i]+1) )%MOD;
      re=(re+MOD)%MOD;
      if(i<100)
        cout<<i<<":"<<re<<","<<tmp<<endl;
    }
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 2; int Arg2 = 2; int Arg3 = 4; int Arg4 = 3; verify_case(0, Arg4, countTuples(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 2; int Arg1 = 100; int Arg2 = 2; int Arg3 = 4; int Arg4 = 0; verify_case(1, Arg4, countTuples(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 1; int Arg1 = 5; int Arg2 = 5; int Arg3 = 5; int Arg4 = 1; verify_case(2, Arg4, countTuples(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 73824; int Arg1 = 17347; int Arg2 = 9293482; int Arg3 = 9313482; int Arg4 = 0; verify_case(3, Arg4, countTuples(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 222; int Arg1 = 222; int Arg2 = 222; int Arg3 = 22222; int Arg4 = 339886855; verify_case(4, Arg4, countTuples(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  RandomGCD ___test;
  ___test.run_test(3);
}
/*
// PROBLEM STATEMENT
// Consider the integers between low and high, inclusive.
We are going to select a sequence of N integers from this range.
The sequence is allowed to contain repeated elements, hence there are (high-low+1)^N possible sequences (where '^' denotes exponentiation).

Out of those sequences, we are only interested in the ones that have one additional property:
the greatest common divisor (GCD) of their elements must be exactly K.

You are given the ints N, K, low, and high.
Let X be the number of N-tuples described above.
Because X can be very large, compute and return the value (X modulo 1,000,000,007).

DEFINITION
Class:RandomGCD
Method:countTuples
Parameters:int, int, int, int
Returns:int
Method signature:int countTuples(int N, int K, int low, int high)


NOTES
-The greatest common divisor of a sequence is the largest positive integer that divides each element of the sequence.


CONSTRAINTS
-N, K and low will each be between 1 and 1,000,000,000, inclusive.
-high will be between low and 1,000,000,000, inclusive.
-The difference high - low will be less than or equal to 100,000.


EXAMPLES

0)
2
2
2
4

Returns: 3

There are 9 possible sequences: {(2, 2), (2, 3), (2, 4), (3, 2), (3, 3), (3, 4), (4, 2), (4, 3), (4, 4)}.
Out of these, 3 of them have the requested gcd of 2: {(2, 2), (2, 4), (4, 2)}.
Hence, the answer is 3.

1)
2
100
2
4

Returns: 0

Sometimes no combinations yield the requested GCD.

2)
1
5
5
5

Returns: 1

Sometimes you select only one number.

3)
73824
17347
9293482
9313482

Returns: 0



4)
222
222
222
22222

Returns: 339886855



*/
// END CUT HERE
