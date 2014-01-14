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

class LittleElephantAndBooks {
public:
  int getNumber(vector <int> pages, int number) {
    sort(pages.begin(),pages.end());

    int i,j,sum=0;
    for(i=0;i<number-1;i++){
      sum+=pages[i];
    }
    return sum+pages[number];
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; int Arg2 = 2; verify_case(0, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {74, 7, 4, 47, 44}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; int Arg2 = 58; verify_case(1, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {3, 1, 9, 7, 2, 8, 6, 4, 5}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; int Arg2 = 29; verify_case(2, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {74, 86, 32, 13, 100, 67, 77}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 80; verify_case(3, Arg2, getNumber(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  LittleElephantAndBooks ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// 
Little Elephant from the Zoo of Lviv has a bunch of books.
You are given a vector <int> pages.
Each element of pages is the number of pages in one of those books.
There are no two books with the same number of pages.




You are also given a int number.
As a homework from the teacher, Little Elephant must read exactly number of his books during the summer.
(Little Elephant has strictly more than number books.)




All other elephants in the school also got the exact same homework.
Little Elephant knows that the other elephants are lazy: 
they will simply pick the shortest number books, so that they have to read the smallest possible total number of pages.
Little Elephant wants to be a good student and read a bit more than the other elephants.
He wants to pick the subset of books with the second smallest number of pages.
In other words, he wants to pick a subset of books with the following properties:

There are exactly number books in the chosen subset.
The total number of pages of those books is greater than the smallest possible total number of pages.
The total number of pages of those books is as small as possible (given the above conditions).





Return the total number of pages Little Elephant will have to read.


DEFINITION
Class:LittleElephantAndBooks
Method:getNumber
Parameters:vector <int>, int
Returns:int
Method signature:int getNumber(vector <int> pages, int number)


CONSTRAINTS
-pages will contain between 2 and 50 elements, inclusive.
-Each element of pages will be between 1 and 100, inclusive.
-There will be no two equal elements in pages.
-number will be between 1 and N-1, inclusive, where N is the number of elements in pages.


EXAMPLES

0)
{1, 2}
1

Returns: 2

There are two books: one with 1 page, the other with 2 pages.
As number=1, each of the elephants has to read one book.
The lazy elephants will read the 1-page book, so our Little Elephant should read the 2-page one.
Thus, the number of pages read by Little Elephant is 2.

1)
{74, 7, 4, 47, 44}
3

Returns: 58

The lazy elephants will read books 1, 2, and 4 (0-based indices).
Their total number of pages is 7+4+44 = 55.
Little Elephant should pick books 1, 2, and 3, for a total of 7+4+47 = 58 pages.
(Note that Little Elephant is allowed to pick any subset, except for the minimal one. 
In particular, he may read some of the books read by the other elephants.)

2)
{3, 1, 9, 7, 2, 8, 6, 4, 5}
7

Returns: 29



3)
{74, 86, 32, 13, 100, 67, 77}
2

Returns: 80



*/
// END CUT HERE
