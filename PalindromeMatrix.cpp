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

class PalindromeMatrix {
public:
  int minChange(vector <string> A, int rowCount, int columnCount) {
    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"0000"
,"1000"
,"1100"
,"1110"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 2; int Arg3 = 1; verify_case(0, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_1() { string Arr0[] = {"0000"
,"1000"
,"1100"
,"1110"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arg2 = 2; int Arg3 = 3; verify_case(1, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_2() { string Arr0[] = {"01"
,"10"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; int Arg2 = 1; int Arg3 = 1; verify_case(2, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_3() { string Arr0[] = {"1110"
,"0001"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; int Arg2 = 0; int Arg3 = 0; verify_case(3, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_4() { string Arr0[] = {"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 3; int Arg3 = 8; verify_case(4, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_5() { string Arr0[] = {"000000000000"
,"011101110111"
,"010001010101"
,"010001010101"
,"011101010101"
,"010101010101"
,"010101010101"
,"011101110111"
,"000000000000"
,"000000000000"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; int Arg2 = 9; int Arg3 = 14; verify_case(5, Arg3, minChange(Arg0, Arg1, Arg2)); }
	void test_case_6() { string Arr0[] = {"11111101001110"
,"11000111111111"
,"00010101111001"
,"10110000111111"
,"10000011010010"
,"10001101101101"
,"00101010000001"
,"10111010100100"
,"11010011110111"
,"11100010110110"
,"00100101010100"
,"01001011001000"
,"01010001111010"
,"10100000010011"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; int Arg2 = 8; int Arg3 = 31; verify_case(6, Arg3, minChange(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  PalindromeMatrix ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Note that the memory limit for all tasks in this SRM is 256 MB.


Fox Ciel has a matrix A that consists of N rows by M columns.
Both N and M are even.
Each element of the matrix is either 0 or 1.
The rows of the matrix are numbered 0 through N-1 from top to bottom, the columns are numbered 0 through M-1 from left to right.
The element in row i, column j is denoted A(i, j).
You are given a vector <string> A that describes the matrix A.
The character A[i][j] is '1' if A(i, j)=1 and it is '0' otherwise.



A palindrome is a string that reads the same forwards and backwards.
For example, "1001" and "0111001110" are palindromes while "1101" and "000001" are not.



Some rows and some columns in Ciel's matrix may be palindromes.
For example, in the matrix below both row 0 and column 3 are palindromes.
(Row 0 is the palindrome "0000", column 3 is the palindrome "0110".)


0000
0011
0111
1110



You are also given two ints: rowCount and columnCount.
Ciel wants her matrix A to have at least rowCount rows that are palindromes, and at the same time at least columnCount columns that are palindromes.
If this is currently not the case, she can change A by changing some of the elements (from '0' to '1' or vice versa).
Compute and return the smallest possible number of elements she needs to change in order to reach her goal.


DEFINITION
Class:PalindromeMatrix
Method:minChange
Parameters:vector <string>, int, int
Returns:int
Method signature:int minChange(vector <string> A, int rowCount, int columnCount)


CONSTRAINTS
-N and M will be between 2 and 14, inclusive.
-N and M will be even.
-A will contain N elements.
-Each element of A will contain M characters.
-Each character of A will be either '0' or '1'.
-rowCount will be between 0 and N.
-columnCount will be between 0 and M.


EXAMPLES

0)
{"0000"
,"1000"
,"1100"
,"1110"}
2
2

Returns: 1

An optimal solution is to change A(3, 0) to 0. Then we will have palindromes in two rows (0 and 3), and in two columns (0 and 3).

1)
{"0000"
,"1000"
,"1100"
,"1110"}
3
2

Returns: 3

This is similar to the previous example, but in this case we must have three row palindromes. 
An optimal solution is to change A(1, 0), A(2, 0) and A(3, 0) to 0.

2)
{"01"
,"10"}
1
1

Returns: 1



3)
{"1110"
,"0001"}
0
0

Returns: 0

Here, we do not have to change A at all.

4)
{"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"
,"01010101"}
2
3

Returns: 8



5)
{"000000000000"
,"011101110111"
,"010001010101"
,"010001010101"
,"011101010101"
,"010101010101"
,"010101010101"
,"011101110111"
,"000000000000"
,"000000000000"}
5
9

Returns: 14



6)
{"11111101001110"
,"11000111111111"
,"00010101111001"
,"10110000111111"
,"10000011010010"
,"10001101101101"
,"00101010000001"
,"10111010100100"
,"11010011110111"
,"11100010110110"
,"00100101010100"
,"01001011001000"
,"01010001111010"
,"10100000010011"}
6
8

Returns: 31



*/
// END CUT HERE
