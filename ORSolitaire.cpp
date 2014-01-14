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

class ORSolitaire {
public:
  int getMinimum(vector <int> numbers, int goal) {
    int i,j,cnt[20];
    memset(cnt,0,sizeof(cnt));
    for(i=0;i<numbers.size();i++){
      if(numbers[i]&(~goal))continue;
      for(j=0;j<13;j++){
        if(numbers[i]&(1<<j))cnt[j]++;
      }
    }
    int minc=100;
    for(j=0;j<13;j++){
      if(goal&(1<<j))
        if(minc>cnt[j])
          minc=cnt[j];
    }
    return minc;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1, 2, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; int Arg2 = 1; verify_case(0, Arg2, getMinimum(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {1, 2, 4, 7, 8}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; int Arg2 = 2; verify_case(1, Arg2, getMinimum(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {12571295, 2174218, 2015120}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; int Arg2 = 0; verify_case(2, Arg2, getMinimum(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {5,2,4,52,62,9,8,3,1,11,6}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 11; int Arg2 = 3; verify_case(3, Arg2, getMinimum(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {503, 505, 152, 435, 491, 512, 1023, 355, 510, 500, 502, 255, 63, 508, 509, 511, 60, 250, 254, 346}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 510; int Arg2 = 5; verify_case(4, Arg2, getMinimum(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  ORSolitaire ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Note that the memory limit for all tasks in this SRM is 256 MB.
This problem statement contains subscripts that may not display properly if viewed outside of the applet.

Manao is playing a solitaire game called OR-solitaire. In this game, the player starts with a number X = 0 and should obtain the number goal in one or more moves. The set of valid moves is determined by a vector <int> numbers. In each move, the player chooses some element of numbers and replaces X with the bitwise OR of X and the chosen element.

Fox Ciel wants Manao to stop playing OR-solitaire and move on with his life. She decided to erase some of the elements from numbers in such a way that it becomes impossible to complete the game. Return the minimum number of elements that need to be removed to achieve this.

DEFINITION
Class:ORSolitaire
Method:getMinimum
Parameters:vector <int>, int
Returns:int
Method signature:int getMinimum(vector <int> numbers, int goal)


NOTES
-If a and b are single bits then a | b is defined as max(a, b). For two integers, A and B, in order to calculate A | B, they need to be represented in binary: A = (an...a1)2, B = (bn...b1)2 (if the lengths of their representations are different, the shorter one is prepended with the necessary number of leading zeroes). Then A | B = C = (cn...c1)2, where ci = ai | bi. For example, 10 | 3 = (1010)2 | (0011)2 = (1011)2 = 11.


CONSTRAINTS
-numbers will contain between 1 and 50 elements, inclusive.
-Each element of numbers will be between 1 and 1,000,000,000.
-The elements in numbers will be distinct.
-goal will be between 1 and 1,000,000,000.


EXAMPLES

0)
{1, 2, 4}
7

Returns: 1

The goal of the game is to obtain X = 7 from X = 0. The possible moves are to replace X with bitwise OR of X and 1, bitwise OR of X and 2 and bitwise OR of X and 4. X = 7 can be obtained only by using each of the three moves at least once, so removing any single element from numbers will make the game impossible to finish.

1)
{1, 2, 4, 7, 8}
7

Returns: 2

In this example, Fox Ciel should remove the number 7 and one of the numbers 1, 2, 4.

2)
{12571295, 2174218, 2015120}
1

Returns: 0

There is no need to remove elements from numbers, since the game cannot be completed in its initial version.

3)
{5,2,4,52,62,9,8,3,1,11,6}
11

Returns: 3



4)
{503, 505, 152, 435, 491, 512, 1023, 355, 510, 500, 502, 255, 63, 508, 509, 511, 60, 250, 254, 346}
510

Returns: 5



*/
// END CUT HERE
