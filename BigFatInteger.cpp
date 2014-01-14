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

class BigFatInteger {
public:
  bool isPrime[1123456];
  int primesCnt[1123456];
  vector<int> primes;
  int minOperations(int A, int B) {
    ll i,j,pcnt;
    int re=0,maxr=0,tmp=0;
    cout<<"?"<<endl;
    memset(isPrime,1,sizeof(isPrime));
    memset(primesCnt,0,sizeof(primesCnt));
    isPrime[0]=isPrime[1]=0;
    for(i=2;i<1123456;i++){
      pcnt=0;
      if(isPrime[i]){
        for(j=i*i;j<1123456;j+=i){
          isPrime[j]=0;
          //  cout<<j<<",";
        }
//        cout<<i<<endl;
        while(A%i==0){
          A/=i;
          pcnt++;
        }
        pcnt*=B;
        if(pcnt==0)continue;
        pcnt--;
        re++;
        tmp=0;
        while(pcnt){
          pcnt>>=1;
          tmp++;
        }maxr=max(maxr,tmp);
        cout<<i<<",";
      }
    }
cout<<"!"<<endl;
    for(i=0;i<primes.size();i++){
      
    }
    return re+maxr;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 6; int Arg1 = 1; int Arg2 = 2; verify_case(0, Arg2, minOperations(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 162; int Arg1 = 1; int Arg2 = 4; verify_case(1, Arg2, minOperations(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 999983; int Arg1 = 9; int Arg2 = 5; verify_case(2, Arg2, minOperations(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 360; int Arg1 = 8; int Arg2 = 8; verify_case(3, Arg2, minOperations(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  BigFatInteger ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// This problem statement contains superscipts that may not display properly outside the applet.

Lun the dog loves very large integers. Her favorite is AB (A to the power of B).


She has an integer variable X. Initially, the value of X is set to 1. She can perform the following two kinds of operations in any order, any number of times.

Operation 1: choose a prime number p, then multiply X by p.
Operation 2: choose a positive divisor d of the value of X at that point, then multiply X by d.



You are given two ints A and B. Return the minimum number of operations Lun needs to perform
in order to obtain X = AB from the initial state X = 1.

DEFINITION
Class:BigFatInteger
Method:minOperations
Parameters:int, int
Returns:int
Method signature:int minOperations(int A, int B)


CONSTRAINTS
-A will be between 2 and 1,000,000 (106), inclusive.
-B will be between 1 and 1,000,000 (106), inclusive.


EXAMPLES

0)
6
1

Returns: 2

Here, AB = 61 = 6. Here is one of the optimal sequences of operations:

Perform operation 1 by choosing p=2. X is now 1*2 = 2.
Perform operation 1 by choosing p=3. X is now 2*3 = 6.


1)
162
1

Returns: 4

One of the optimal sequences of operations:

Perform operation 1 by choosing p=3. X is now 1*3 = 3.
Perform operation 1 by choosing p=3. X is now 3*3 = 9.
Perform operation 2 by choosing d=9. X is now 9*9 = 81.
Perform operation 1 by choosing p=2. X is now 81*2 = 162.


2)
999983
9

Returns: 5

Here, A is prime. One of the optimal sequences of operations:

Perform operation 1 by choosing p=A. X is now A.
Perform operation 1 by choosing p=A. X is now A2.
Perform operation 1 by choosing p=A. X is now A3.
Perform operation 2 by choosing d=A3. X is now A6.
Perform operation 2 by choosing d=A3. X is now A9.


3)
360
8

Returns: 8



*/
// END CUT HERE
