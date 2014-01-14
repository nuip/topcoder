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

class WinterAndSnowmen {
public:
  int getNumber(int N, int M) {
    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 2; int Arg2 = 4; verify_case(0, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 1; int Arg1 = 1; int Arg2 = 1; verify_case(1, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 3; int Arg1 = 5; int Arg2 = 74; verify_case(2, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 7; int Arg1 = 4; int Arg2 = 216; verify_case(3, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 47; int Arg1 = 74; int Arg2 = 962557390; verify_case(4, Arg2, getNumber(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  WinterAndSnowmen ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// 
It's winter time!
Time for snowmen to play some games.




Two snowmen are playing a game.
In this game, the first snowman must choose a subset of the set {1, 2, ..., N}, and the second one must choose a subset of the set {1, 2, ..., M}.
The following two conditions must be fulfilled:


The two sets have an empty intersection.


The XOR of all elements in the first set is less than the XOR of all elements in the second set.






You are given two ints N and M.
Let X be the total number of different ways to choose the pair of sets.
Return the value (X modulo 1,000,000,007).


DEFINITION
Class:WinterAndSnowmen
Method:getNumber
Parameters:int, int
Returns:int
Method signature:int getNumber(int N, int M)


NOTES
-XOR (exclusive or) is a binary operation, performed on two numbers in binary notation. First, the shorter number is prepended with leading zeroes until both numbers have the same number of digits (in binary). Then, the result is calculated as follows: for each bit where the numbers differ the result has 1 in its binary representation. It has 0 in all other positions.
-For example 42 XOR 7 is performed as follows. First, the numbers are converted to binary: 42 is 101010 and 7 is 111. Then the shorter number is prepended with leading zeros until both numbers have the same number of digits. This means 7 becomes 000111. Then 101010 XOR 000111 = 101101 (the result has ones only in the positions where the two numbers differ). Then the result can be converted back to decimal notation. In this case 101101 = 45, so 42 XOR 7 = 45.
-The XOR of an empty set is 0.


CONSTRAINTS
-N will be between 1 and 2000, inclusive.
-M will be between 1 and 2000, inclusive.


EXAMPLES

0)
2
2

Returns: 4

The following 4 pairs of subsets are possible in this case:


{} and {1}


{} and {2}


{} and {1, 2}


{1} and {2}



1)
1
1

Returns: 1

The only pair possible in this case is {} and {1}.

2)
3
5

Returns: 74



3)
7
4

Returns: 216



4)
47
74

Returns: 962557390



*/
// END CUT HERE
