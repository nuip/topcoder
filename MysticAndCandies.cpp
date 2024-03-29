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

class MysticAndCandies {
public:
  int minBoxes(int C, int X, vector <int> low, vector <int> high) {
    sort(low.begin(),low.end(),greater<int>());
    sort(high.begin(),high.end());
    int re1,re2,sum;
    for(sum=re1=0;re1<low.size();sum+=low[re1++]){
      //cout<<low[re1]<<"("<<sum<<")";
      if(sum+low[re1]>=X)break;
    }//cout<<"["<<sum<<":"<<X<<"]"<<endl;
    for(sum=re2=0;re2<high.size();sum+=high[re2++]){
      //cout<<low[re1]<<"("<<sum<<")";
      if(sum+high[re2]>C-X)break;
    }//cout<<"["<<sum<<":"<<X<<"]"<<endl;
    return min(re1+1,int(low.size())-re2);
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 15; int Arg1 = 12; int Arr2[] = {1, 2, 3, 4, 5}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1, 2, 3, 4, 5}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 3; verify_case(0, Arg4, minBoxes(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 60; int Arg1 = 8; int Arr2[] = {5, 2, 3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {49, 48, 47}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 2; verify_case(1, Arg4, minBoxes(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 58; int Arg1 = 30; int Arr2[] = {3, 9, 12, 6, 15}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {8, 12, 20, 8, 15}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 2; verify_case(2, Arg4, minBoxes(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 207581165; int Arg1 = 172146543; int Arr2[] = {4725448, 2753824, 6019698, 4199708, 4070001, 3589497, 5358499, 3637585, 5393667, 2837466,
2747807, 2918199, 3638042, 5199002, 3072044, 3858909, 3762101, 3657754, 3218704, 3888861,
3195689, 4768935, 3137633, 4124272, 4125056, 6087486, 3632970, 3620489, 2748765, 5917493,
3958996, 3335021, 3517186, 5543440, 2951006, 3403270, 3299481, 3093204, 4092331}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {5702812, 6805664, 6823687, 5337687, 4286533, 4999849, 6567411, 4563235, 6618139, 6260135,
6249469, 3821449, 5963157, 6385012, 4255959, 5786920, 6112817, 4103918, 6371537, 4231698,
3409172, 6806782, 5623563, 4511221, 6407338, 6491490, 5209517, 6076093, 6530132, 6111464,
5833839, 6253088, 5595160, 6236805, 5772388, 5285713, 5617002, 4650978, 5234740}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 31; verify_case(3, Arg4, minBoxes(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 43873566; int Arg1 = 32789748; int Arr2[] = {2053198, 2175819, 4260803, 1542497, 1418952, 5000015, 1381849, 2462882, 6466891, 1827580, 6943641, 5775477}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {2827461, 3726335, 5410505, 4781355, 4925909, 5621160, 7325774, 5025476, 7876037, 8072075, 6979462, 6647628}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 7; verify_case(4, Arg4, minBoxes(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  MysticAndCandies ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// TopCoder admin mystic_tc is sitting in front of a table. He found N sealed boxes of candies on the table.


He is not sure how many candies each box contains. However, he knows the following information:

The total number of candies in the boxes is C.
For each i, box i (0-based index) contains between low[i] and high[i] candies, inclusive.


You know that mystic_tc eats candies as follows: first he chooses a subset of the boxes, then he opens them and eats all the candies he found inside.
He wants to eat at least X candies.
And as he is smart, he will always choose a subset of boxes for which he is sure that they must contain at least X candies.


You are given the ints C and X, and the vector <int>s low and high.
Return the smallest number of boxes mystic_tc may choose.

DEFINITION
Class:MysticAndCandies
Method:minBoxes
Parameters:int, int, vector <int>, vector <int>
Returns:int
Method signature:int minBoxes(int C, int X, vector <int> low, vector <int> high)


CONSTRAINTS
-low and high will contain between 1 and 50 elements, inclusive.
-low and high will contain the same number of elements.
-Each element of low and high will be between 1 and 10,000,000, inclusive.
-For each i, high[i] will be greater than or equal to low[i].
-C will be between the sum of all elements of low and the sum of all elements of high, inclusive.
-X will be between 1 and C, inclusive.


EXAMPLES

0)
15
12
{1, 2, 3, 4, 5}
{1, 2, 3, 4, 5}

Returns: 3

Here he knows the exact number of candies in each box.
The best strategy is to open boxes 2, 3, and 4 (0-based indices).
This way he will get 3+4+5 = exactly 12 candies.

1)
60
8
{5, 2, 3}
{49, 48, 47}

Returns: 2

Open box 0 and box 2.

2)
58
30
{3, 9, 12, 6, 15}
{8, 12, 20, 8, 15}

Returns: 2

Open box 2 and box 4.

3)
207581165
172146543
{4725448, 2753824, 6019698, 4199708, 4070001, 3589497, 5358499, 3637585, 5393667, 2837466,
2747807, 2918199, 3638042, 5199002, 3072044, 3858909, 3762101, 3657754, 3218704, 3888861,
3195689, 4768935, 3137633, 4124272, 4125056, 6087486, 3632970, 3620489, 2748765, 5917493,
3958996, 3335021, 3517186, 5543440, 2951006, 3403270, 3299481, 3093204, 4092331}
{5702812, 6805664, 6823687, 5337687, 4286533, 4999849, 6567411, 4563235, 6618139, 6260135,
6249469, 3821449, 5963157, 6385012, 4255959, 5786920, 6112817, 4103918, 6371537, 4231698,
3409172, 6806782, 5623563, 4511221, 6407338, 6491490, 5209517, 6076093, 6530132, 6111464,
5833839, 6253088, 5595160, 6236805, 5772388, 5285713, 5617002, 4650978, 5234740}

Returns: 31



4)
43873566
32789748
{2053198, 2175819, 4260803, 1542497, 1418952, 5000015, 1381849, 2462882, 6466891, 1827580, 6943641, 5775477}
{2827461, 3726335, 5410505, 4781355, 4925909, 5621160, 7325774, 5025476, 7876037, 8072075, 6979462, 6647628}

Returns: 7



*/
// END CUT HERE
