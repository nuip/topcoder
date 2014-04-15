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

class EllysLamps {
public:
  int getMin(string lamps) {
    int dp[2][2][55],i,j,k,n=lamps.size();
    bool lmp[55];
    for(i=0;i<n;i++)
      lmp[i]=(lamps[i]=='Y');
    for(i=0;i<55;i++)
      for(j=0;j<4;j++)
      dp[j/2][j%2][i]=-1;
    
    if(lmp[0]){
      dp[0][0][1]=dp[0][1][1]=0;
    }else{
      dp[0][lmp[1]][1]=0;
    }
    for(i=1;i<n-1;i++){
      for(j=0;j<4;j++){
        if(dp[j/2][j%2][i]<0)continue;
        if(j==0){
          dp[j%2][lmp[i+1]][i+1]=min(dp[j%2][lmp[i+1]][i+1],dp[j/2][j%2][i]);
        }else if(j==1){
          if(lmp[i+1])
            dp[0][1][i+1]=min(dp[0][1][i+1],dp[j/2][j%2][i]);
          dp[0][lmp[i+1]][i+1]=min(dp[0][lmp[i+1]][i+1],dp[j/2][j%2][i]);
        }else if(j==2){
          dp[0][lmp[i+1]][i+1]=min(dp[0][lmp[i+1]][i+1],dp[j/2][j%2][i]);
        }else{
          dp[0][1][i+1]=min(dp[0][1][i+1],dp[j/2][j%2][i]);
        }
      }
    }
    int re=500;
    for(i=0;i<4;i++){
      if(dp[i/2][i%2][n-2]>=0)
      re=min(re,dp[i/2][i%2][n-2]-(i==3));
    }
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "YNNYN"; int Arg1 = 2; verify_case(0, Arg1, getMin(Arg0)); }
	void test_case_1() { string Arg0 = "NNN"; int Arg1 = 0; verify_case(1, Arg1, getMin(Arg0)); }
	void test_case_2() { string Arg0 = "YY"; int Arg1 = 0; verify_case(2, Arg1, getMin(Arg0)); }
	void test_case_3() { string Arg0 = "YNYYYNNNY"; int Arg1 = 3; verify_case(3, Arg1, getMin(Arg0)); }
	void test_case_4() { string Arg0 = "YNYYYYNYNNYYNNNNNNYNYNYNYNNYNYYYNY"; int Arg1 = 13; verify_case(4, Arg1, getMin(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  EllysLamps ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Elly has a row of N lamps, conveniently numbered from 0 to N-1. Some of them are initially lit and the rest are not. She can control the lamps using a controller. On the controller there is a row of N buttons. Clicking the button with index i changes the state of lamp i: it goes off, if it was on, and it goes on if it was off.

Unfortunately the controller has some defects. Each of the buttons correctly changes the state of the corresponding lamp. However, it is possible that some of the buttons also change the state of one or both adjacent lamps as well. This means that pressing the button with index i has the following effects:

The state of lamp i changes.
If there is a lamp with index i-1, its state might change.
If there is a lamp with index i+1, its state might change.

The girl does not initially know which lamps change their state when each of the buttons is pressed. She knows, however, that every time she clicks a particular button, the same set of lamps will change their states.

Elly wants to reach a configuration in which the number of lamps that are turned on is minimized. Help her determine how many of them will remain lit in the worst possible case. (That is, for the worst possible way how the buttons change the state of the lamps.) She can use each of the buttons as many times as she likes, in any order she likes.

You will be given a string lamps, which gives information about the initial state of the lamps. The i-th character of lamps will be 'Y' if the i-th lamp is lit, and 'N', if it is not. Return the minimal number of lit lamps the girl can get in the worst possible case.

DEFINITION
Class:EllysLamps
Method:getMin
Parameters:string
Returns:int
Method signature:int getMin(string lamps)


NOTES
-The defects in the switches might not be symmetric. This means that if a lamp with index i happens to change the state of lamp i+1, this does not necessarily mean that the using the switch of lamp i+1 changes the state of lamp i.


CONSTRAINTS
-lamps will contain between 1 and 50 elements, inclusive.
-Each element of lamps will be either 'Y' or 'N'.


EXAMPLES

0)
"YNNYN"

Returns: 2

In this case Elly will only make things worse (or the same) by pressing buttons. For example, suppose that:

buttons 0 and 1 each change the state of both lamps 0 and 1
buttons 2 and 3 each change the state of both lamps 2 and 3
button 4 only changes the state of lamp 4

In this situation, Elly cannot reach any configuration with fewer than two lit lamps.

1)
"NNN"

Returns: 0

Obviously, with no initially lit lamps, Elly can just sit and relax.

2)
"YY"

Returns: 0

If one of the lamps influences the other one, then Elly can use it and turn both off with one button press. Otherwise, each button changes the state of its lamp only, thus Elly can turn them both off by pressing both buttons.

3)
"YNYYYNNNY"

Returns: 3



4)
"YNYYYYNYNNYYNNNNNNYNYNYNYNNYNYYYNY"

Returns: 13



*/
// END CUT HERE
