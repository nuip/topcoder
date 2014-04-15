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

class TorusSailingEasy {
public:
  double expectedTime(int N, int M, int goalX, int goalY) {
    int plus=1<<30,minus=1<<30,arou=1<<30;
    int i,j;
    for(i=1;i<101;i++){
      int x=i%N;
      int y=i%M;
      if(x==goalX && y==goalY){
        plus=i;
        break;
      }
    }
    for(i=1;i<101;i++){
      int x=i%N;
      int y=i%M;
      if(x==0 && y==0){
        arou=i;
        break;
      }
    }

    minus=arou-plus;

    if(plus==(1<<30))
      return -1;

    double ans=plus*minus;
    printf("%.9f\n",ans);
    return ans;
    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 2; int Arg2 = 1; int Arg3 = 1; double Arg4 = 1.0; verify_case(0, Arg4, expectedTime(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 2; int Arg1 = 2; int Arg2 = 0; int Arg3 = 1; double Arg4 = -1.0; verify_case(1, Arg4, expectedTime(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 3; int Arg1 = 3; int Arg2 = 1; int Arg3 = 1; double Arg4 = 2.0; verify_case(2, Arg4, expectedTime(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 4; int Arg1 = 6; int Arg2 = 1; int Arg3 = 3; double Arg4 = 27.0; verify_case(3, Arg4, expectedTime(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  TorusSailingEasy ___test;
  ___test.run_test(-1);
  ___test.expectedTime(10,9,9,1);
}
/*
// PROBLEM STATEMENT
// 
Fox Ciel is sailing in the Donut sea. The Donut sea is a torus. For navigation, the torus is divided into N times M cells, as shown in the figure below.




(Image by YassineMrabet from Wikimedia Commons, licensed under CC BY-SA 3.0.)



Each of the cells has two integer coordinates (n, m), where 0 <= n < N and 0 <= m < M. Note that the coordinates wrap around modulo N and M. For example, if you are in the cell (N-1, M-1) and you cross over one of its sides, you will reach one of the cells (N-2, M-1), (0, M-1), (N-1, M-2), and (N-1, 0).



Ciel starts in the cell (0, 0) and wants to reach the goal cell (goalX, goalY).



Unfortunately, Ciel's navigation is very poor. Whenever she moves to a new cell, there are two equally probable outcomes: either both of her coordinates increase by 1, or both of them decrease by 1 (wrapping around if necessary). Formally, if Ciel's current coordinates are (n, m), her new coordinates will be either ((n+1) modulo N, (m+1) modulo M), or ((n-1) modulo N, (m-1) modulo M), with equal probability. Each such move takes one day.



If Ciel can never reach her goal, return -1. Otherwise, return the expected number of days Ciel will need to reach her goal.



DEFINITION
Class:TorusSailingEasy
Method:expectedTime
Parameters:int, int, int, int
Returns:double
Method signature:double expectedTime(int N, int M, int goalX, int goalY)


NOTES
-The returned value must have an absolute or relative error less than 1e-9.
-In many programming languages the modulo operator returns negative values for negative inputs. If you are using such a language, it is safer to use the formulas ((n-1+N) modulo N) and ((m-1+M) modulo M) to compute Ciel's new coordinates when both of them are supposed to decrease.
-Informally, the expected value of a random variable can be seen as its average over very many trials.


CONSTRAINTS
-N will be between 2 and 10, inclusive.
-M will be between 2 and 10, inclusive.
-goalX will be between 0 and N - 1, inclusive.
-goalY will be between 0 and M - 1, inclusive.
-(goalX, goalY) will not be (0, 0).


EXAMPLES

0)
2
2
1
1

Returns: 1.0

She will always reach the goal in 1 day.

1)
2
2
0
1

Returns: -1.0

It is impossible to reach the goal. Ciel will only visit the cells (0, 0) and (1, 1) alternately.

2)
3
3
1
1

Returns: 2.0

She can reach the goal in 1 day with probability 1/2, in 2 days with probability 1/4, in 3 days with probability 1/8, in 4 days with probability 1/16 and so on. In general, she can reach the goal in n days with probability 1/(2^n) where n is a positive integer.

The answer is (1 * 1/2) + (2 * 1/4) + (3 * 1/8) + (4 * 1/16) + ... = 2.0.


3)
4
6
1
3

Returns: 27.0



*/
// END CUT HERE
