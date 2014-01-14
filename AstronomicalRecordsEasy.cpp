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

class AstronomicalRecordsEasy {
public:
  bool As[1123];
  int minimalPlanets(vector <int> A, vector <int> B) {
    memset(As,0,sizeof(As));
    int i,j,k,minS=0;
    for(i=0;i<A.size();i++){
      As[A[i]]=1;
    }
    int sum;
    for(i=1;i<=1000;i++){
      for(j=1;j<=1000;j++){
        sum=0;
        for(k=0;k<B.size();k++){
          if((j*B[k])%i || (j*B[k])/i>1100)continue;
          //cout<<j*B[k]/i<<"("<<As[j*B[k]/i]<<")";
          if(As[j*B[k]/i])sum++;
        }//cout<<"->"<<sum<<endl;
        minS=max(minS,sum);
      }
    }

    return A.size()+B.size()-minS;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1,2,3,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2,3,4,5}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 5; verify_case(0, Arg2, minimalPlanets(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {1,2,3,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2,4,6,8}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 4; verify_case(1, Arg2, minimalPlanets(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {1,2,3,5,6,8,9}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2,4,5,6,7,8,9}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 9; verify_case(2, Arg2, minimalPlanets(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {1,2,3,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {6,7,8,9}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 6; verify_case(3, Arg2, minimalPlanets(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {200,500}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {100,200,300,400,600,700,800,900}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 9; verify_case(4, Arg2, minimalPlanets(Arg0, Arg1)); }
	void test_case_5() { int Arr0[] = {1,2,3,4,5,6,7,8,9,10,11,12}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {6,7,8,9,10,11,12,13,14,15}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 15; verify_case(5, Arg2, minimalPlanets(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  AstronomicalRecordsEasy ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Fox Ciel found two astronomical records.
They both describe the same solar system.
In this solar system each planet orbits the sun at some fixed distance, and those distances are distinct.
Each of the two records contains a comparison of some of those distances.



The first record is a vector <int> A with x elements.
These elements correspond to some x planets in the solar system.
The distances at which these planets orbit the sun have the ratio A[0] : A[1] : ... : A[x-1].
The planets described by A are ordered by their distance from the sun.

(That is, earlier elements of A correspond to planets that are closer to the sun.
Thus, the elements of A will always form a strictly increasing sequence.)



The second record is a vector <int> B with y elements.
These elements correspond to some y planets in the solar system.
The distances at which these planets orbit the sun have the ratio B[0] : B[1] : ... : B[y-1].
The planets described by B are also ordered by their distance from the sun.



Note that the planets mentioned in a record do not have to be consecutive.
For example, if a solar system contains the planets P, Q, R, S, T, and U, it is possible that the first record compares P, R, and S, and the second record compares Q, R, T, and U.



We assume that both records are correct.
Return the smallest possible total number of planets in the solar system.

DEFINITION
Class:AstronomicalRecordsEasy
Method:minimalPlanets
Parameters:vector <int>, vector <int>
Returns:int
Method signature:int minimalPlanets(vector <int> A, vector <int> B)


CONSTRAINTS
-A will contain between 2 and 50 elements, inclusive.
-B will contain between 2 and 50 elements, inclusive.
-Each element in A will be between 1 and 1,000, inclusive.
-Each element in B will be between 1 and 1,000, inclusive.
-Elements in A will be strictly increasing.
-Elements in B will be strictly increasing.


EXAMPLES

0)
{1,2,3,4}
{2,3,4,5}

Returns: 5

There have to be at least 4 planets, because each record compares 4 of them.
There cannot be exactly 4 planets, because 1:2:3:4 is not the same ratio as 2:3:4:5.
For example, the orbital radii of the two planets closest to the sun would have to have ratio 1:2 and at the same time ratio 2:3, which is impossible.
There can be exactly 5 planets with relative orbital radii 1,2,3,4,5.


1)
{1,2,3,4}
{2,4,6,8}

Returns: 4

In this case we can only have 4 stars, because 1:2:3:4 = 2:4:6:8.

2)
{1,2,3,5,6,8,9}
{2,4,5,6,7,8,9}

Returns: 9

One optimal solution: 1, 2, 3 ,4 ,5 ,6 ,7, 8, 9.

3)
{1,2,3,4}
{6,7,8,9}

Returns: 6

One optimal solution: 3, 6, 7, 8, 9, 12.


4)
{200,500}
{100,200,300,400,600,700,800,900}

Returns: 9



5)
{1,2,3,4,5,6,7,8,9,10,11,12}
{6,7,8,9,10,11,12,13,14,15}

Returns: 15



*/
// END CUT HERE
