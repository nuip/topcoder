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

class KeyDungeonDiv2 {
public:
  int countDoors(vector <int> doorR, vector <int> doorG, vector <int> keys) {
    int i,j,sum=0,rem=0;
    for(i=0;i<doorR.size();i++){
      rem=keys[2];
      if(keys[0]<doorR[i]){
        if(keys[0]+keys[2]>=doorR[i]){
          rem=keys[2]+keys[0]-doorR[i];
        }else{
          continue;
        }
      }
      if(keys[1]+rem>=doorG[i]){
        sum++;
      }
    }
    return sum;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {2, 0, 5, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 4, 0, 2}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {2, 3, 1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 3; verify_case(0, Arg3, countDoors(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arr0[] = {0, 1, 2, 0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {0, 2, 3, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0, 0, 0}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 1; verify_case(1, Arg3, countDoors(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arr0[] = {3, 5, 4, 2, 8}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {4, 2, 3, 8, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {0, 0, 10}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 5; verify_case(2, Arg3, countDoors(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arr0[] = {4, 5, 4, 6, 8}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 1, 2, 3, 5}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {1, 2, 1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 0; verify_case(3, Arg3, countDoors(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arr0[] = {41,44,41,57,58,74,84,100,58,2,43,32,82,97,44,13,35,98,96,81,43,77,18,51,27,
 27,39,39,45,82,59,20,28,93,6,39,64,78,28,85,17,56,3,68,4,0,36,80,41,77}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {67,15,53,36,88,29,26,57,68,99,97,27,51,70,3,49,65,75,35,92,66,0,23,96,38,86,
 98,31,26,75,30,2,92,78,100,99,38,26,85,74,77,15,16,48,100,88,55,93,99,54}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arr2[] = {39,31,34}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 17; verify_case(4, Arg3, countDoors(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  KeyDungeonDiv2 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// You are exploring a dungeon.
In the dungeon you found some locked doors.
Each locked door has some red and some green keyholes (zero or more of each kind).
In order to open a door, you must insert fitting keys into all its keyholes simultaneously.
Once you open a door, you may take all the keys back and possibly reuse some of them later to open other doors. 

There are three kinds of keys: red, green, and white ones.
Each red key fits into any red keyhole.
Each green key fits into any green keyhole.
Each white key fits into any keyhole (both red and green ones). 

You are given vector <int>s doorR and doorG.
These two vector <int>s have the same length.
For each valid i, the values doorR[i] and doorG[i] describe one of the doors you found:
a door with doorR[i] red and doorG[i] green keyholes. 

You are also given the vector <int> keys with three elements:
keys[0] is the number of red keys, keys[1] the number of green keys, and keys[2] the number of white keys you have at the beginning. 

Return the number of doors you can open with keys you have.

DEFINITION
Class:KeyDungeonDiv2
Method:countDoors
Parameters:vector <int>, vector <int>, vector <int>
Returns:int
Method signature:int countDoors(vector <int> doorR, vector <int> doorG, vector <int> keys)


CONSTRAINTS
-doorR and doorG will each contain between 1 and 50 elements, inclusive.
-doorR and doorG will contain the same number of elements.
-Each element of doorR and doorG will be between 0 and 100, inclusive.
-keys will contain exactly 3 elements.
-Each element of keys will be between 0 and 100, inclusive.


EXAMPLES

0)
{2, 0, 5, 3}
{1, 4, 0, 2}
{2, 3, 1}

Returns: 3

There are 4 doors. You have 2 red keys, 3 green keys, 1 white key.
You can open 3 of the doors:

You can open door 0, using 2 red keys and 1 green key.
You can open door 1, using 3 green keys and 1 white key. Here you insert the white key into one of the green keyholes.
You can't open door 2, for you have only 3 keys that can be inserted into red key holes.
You can open door 3, using 2 red keys, 2 green keys, and 1 white key. Here you insert the white key into one of the red keyholes.


1)
{0, 1, 2, 0}
{0, 2, 3, 1}
{0, 0, 0}

Returns: 1

You have no key at all, but door 0 also has no keyhole. Therefore, you can open door 0.


2)
{3, 5, 4, 2, 8}
{4, 2, 3, 8, 1}
{0, 0, 10}

Returns: 5



3)
{4, 5, 4, 6, 8}
{2, 1, 2, 3, 5}
{1, 2, 1}

Returns: 0



4)
{41,44,41,57,58,74,84,100,58,2,43,32,82,97,44,13,35,98,96,81,43,77,18,51,27,
 27,39,39,45,82,59,20,28,93,6,39,64,78,28,85,17,56,3,68,4,0,36,80,41,77}
{67,15,53,36,88,29,26,57,68,99,97,27,51,70,3,49,65,75,35,92,66,0,23,96,38,86,
 98,31,26,75,30,2,92,78,100,99,38,26,85,74,77,15,16,48,100,88,55,93,99,54}
{39,31,34}

Returns: 17



*/
// END CUT HERE
