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

class XorBoard {
public:
  ll comb[2400][2400],sum;

  int count(int H, int W, int Rcount, int Ccount, int S) {
    ll mod=555555555;
    int i,j;
    ll tmp;
    sum=0;
    for(i=0;i<2400;i++){
      comb[i][i]=comb[i][0]=1;
    }//cerr<<2<<endl;
    for(i=1;i<2400;i++){
      for(j=1;j<i;j++){
        comb[i][j]=(comb[i-1][j]+comb[i-1][j-1])%mod;
      }
    }//cout<<3;
    for(i=0;i<5;i++){
for(j=0;j<5;j++)
cout<<comb[i][j]<<" ";
      cout<<endl;
    }
    for(i=0;i<=H;i++){
      for(j=0;j<=W;j++){
        if( (H-i)*j+(W-j)*i == S ){
          if(Rcount<i || Ccount<j)continue;
          if((Rcount-i)%2 || (Ccount-j)%2)continue;
          tmp=comb[H][i]*comb[(Rcount-i)/2+H-1][H-1]%mod;
          tmp*=comb[W][j];
          tmp%=mod;
          tmp*=comb[(Ccount-j)/2+W-1][W-1];
          sum+=tmp%mod;
        }
      }
    }

    return sum%mod;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 2; int Arg2 = 2; int Arg3 = 2; int Arg4 = 4; int Arg5 = 4; verify_case(0, Arg5, count(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_1() { int Arg0 = 2; int Arg1 = 2; int Arg2 = 0; int Arg3 = 0; int Arg4 = 1; int Arg5 = 0; verify_case(1, Arg5, count(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_2() { int Arg0 = 10; int Arg1 = 20; int Arg2 = 50; int Arg3 = 40; int Arg4 = 200; int Arg5 = 333759825; verify_case(2, Arg5, count(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_3() { int Arg0 = 1200; int Arg1 = 1000; int Arg2 = 800; int Arg3 = 600; int Arg4 = 4000; int Arg5 = 96859710; verify_case(3, Arg5, count(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_4() { int Arg0 = 555; int Arg1 = 555; int Arg2 = 555; int Arg3 = 555; int Arg4 = 5550; int Arg5 = 549361755; verify_case(4, Arg5, count(Arg0, Arg1, Arg2, Arg3, Arg4)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  XorBoard ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Fox Jiro has a rectangular grid with H rows and W columns (i.e., the grid has H*W cells in total). Initially, each cell in the grid contained the character '0'.

A row flip is an operation in which Jiro picks a row of the grid, and in that row he changes all '0's to '1's and vice versa.
Similarly, a column flip is an operation in which Jiro does the same to a column of the grid.
Jiro took the grid that contained '0's everywhere.
He performed a row flip Rcount times, and then a column flip Ccount times.
(It is possible that Jiro flipped the same row or column multiple times.)
At the end, Jiro noticed that there are exactly S '1's in the grid.

You are given the ints H, W, Rcount, Ccount, and S.
We are interested in the number of different ways in which Jiro could have flipped the rows and columns of the grid.
Two ways of flipping are considered different if there is a row or a column that was flipped a different number of times.
(That is, the order in which the rows and columns are flipped does not matter.)
Return the number of different ways of flipping that match the given situation, modulo 555,555,555.


DEFINITION
Class:XorBoard
Method:count
Parameters:int, int, int, int, int
Returns:int
Method signature:int count(int H, int W, int Rcount, int Ccount, int S)


CONSTRAINTS
-H will be between 1 and 1,555, inclusive.
-W will be between 1 and 1,555, inclusive.
-Rcount will be between 0 and 1,555, inclusive.
-Ccount will be between 0 and 1,555, inclusive.
-S will be between 0 and H*W, inclusive.


EXAMPLES

0)
2
2
2
2
4

Returns: 4

In two of the four ways, Jiro flips each row once, and then the same column twice.
In the other two ways he first flips the same row twice, and then each column once.

1)
2
2
0
0
1

Returns: 0

Without any flips, all cells still contain '0's, so S=1 is impossible.

2)
10
20
50
40
200

Returns: 333759825

Rcount and Ccount may be greater than H and W.

3)
1200
1000
800
600
4000

Returns: 96859710



4)
555
555
555
555
5550

Returns: 549361755



*/
// END CUT HERE
