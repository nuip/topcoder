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

class SpecialCells {
public:
  int guess(vector <int> x, vector <int> y) {
    vector<int> xx,xxx,yyy,yy;
    vector<int> xs[100],ys[100];
    sort(xx.begin(),xx.end());
    sort(yy.begin(),yy.end());
    int i,j;
    xs[j=0]++;xxx.pb(0);
    for(i=1;i<xx.sizse();i++){
      if(xx[i-1]!=xx[i])        j++;
      xs[j]++;xxx.pb(j);
    }
    ys[j=0]++;yyy.pb(0);
    for(i=1;i<yy.sizse();i++){
      if(yy[i-1]!=yy[i])j++;
      ys[j]++;yyy.pb(j);
    }

    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1,2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; verify_case(0, Arg2, guess(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {1,1,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1,2,1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 3; verify_case(1, Arg2, guess(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {1,2,1,2,1,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1,2,3,1,2,3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 6; verify_case(2, Arg2, guess(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 9; verify_case(3, Arg2, guess(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {1,100000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1,100000}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; verify_case(4, Arg2, guess(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  SpecialCells ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Guillermo and Gustavo are playing a game.
The game is played on a rectangular board with 100,000 rows and 100,000 columns of cells.
Both the rows and the columns are numbered 1 through 100,000.

Guillermo has chosen some cells in the grid.
We will call those cells special.
Guillermo then created two lists of integers.
One of the lists contains the x coordinates of all special cells, the other list contains the y coordinates of all special cells.
If some coordinate occurs multiple times among the special cells, it gets included multiple times into the corresponding list.
Guillermo shuffled each of the lists separately, and then he has shown the two lists to Gustavo.
Thus, Gustavo now knows the two lists, but he does not know which x coordinate corresponds to which y coordinate.

Gustavo now has to guess which cells are special.
His guess must be consistent with the two lists he saw.
That is, he must select the correct number of cells, their list of x coordinates must correspond to the first list he saw, and their list of y coordinates must correspond to the second list he saw.

Gustavo wins the game if and only if at least T of the cells he guessed are actually special.

You are given two vector <int>s x and y that describe the special cells chosen by Guillermo.
For each valid i, (x[i], y[i]) is one of the special cells.
Find and return the largest T such that Gustavo will certainly win the game.
In other words, find the largest T such that each valid guess will contain at least T special cells.

DEFINITION
Class:SpecialCells
Method:guess
Parameters:vector <int>, vector <int>
Returns:int
Method signature:int guess(vector <int> x, vector <int> y)


CONSTRAINTS
-x will contain between 1 and 50 elements, inclusive.
-x and y will contain the same number of elements.
-Each element of x will be between 1 and 100,000, inclusive.
-Each element of y will be between 1 and 100,000, inclusive.
-All cells (x[i], y[i]) will be distinct.


EXAMPLES

0)
{1,2}
{1,2}

Returns: 0

The two special cells are (1,1) and (2,2). If Gustavo guesses (1,2) and (2,1) then he loses unless T is 0, so you must return 0.

1)
{1,1,2}
{1,2,1}

Returns: 3

There is only one valid guess: the three special cells. Note that Gustavo's guess must contain three different cells, it cannot contain the cell (1,1) twice.

2)
{1,2,1,2,1,2}
{1,2,3,1,2,3}

Returns: 6



3)
{1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9}
{1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3}

Returns: 9



4)
{1,100000}
{1,100000}

Returns: 0



*/
// END CUT HERE
