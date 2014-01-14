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

class LittleElephantAndPermutationDiv2 {
public:
  int n,k;
 /* long long calc(int zero,int sumN,int cnt,int sumV){
    long long re=0;
    if(cnt==n){
      cout<<sumN<<","<<sumV<<endl;
      return (sumN==n && sumV>=k);
    }
    for(int i=0;i<3;i++){
      if(i==2)
        if(zero){
          zero--;
        }else{
          continue;
        }
      re+=calc(zero+(i==0),sumN+i,cnt+1,sumV+i*(cnt+1));
    }
    return re;
  }*/
  long long getNumber(int N, int K) {
    n=N;
    k=K;
   /* long long sum=calc(0,0,0,0);
    for(int i=1;i<=N;i++){
      sum*=i;
    }
    return sum;*/
    int i,j,sum;
    long long re=0;
    vector<int> a;
    for(i=1;i<=N;i++)
      a.pb(i);
    do{
      for(i=sum=0;i<N;i++){
        sum+=((i+1)<a[i])?a[i]:i+1;
      }
      re+=(sum>=K);
    }while(next_permutation(a.begin(),a.end()));
    for(i=1;i<=N;i++)
      re*=i;
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; int Arg1 = 1; long long Arg2 = 1LL; verify_case(0, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 2; int Arg1 = 1; long long Arg2 = 4LL; verify_case(1, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 3; int Arg1 = 8; long long Arg2 = 18LL; verify_case(2, Arg2, getNumber(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 10; int Arg1 = 47; long long Arg2 = 13168189440000LL; verify_case(3, Arg2, getNumber(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  LittleElephantAndPermutationDiv2 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// 
This problem statement contains superscripts and/or subscripts. These may not display properly outside the applet.




Little Elephant from the Zoo of Lviv likes permutations.
A permutation of size N is a sequence (a1, ..., aN) that contains each of the numbers from 1 to N exactly once.
For example, (3,1,4,5,2) is a permutation of size 5.




Given two permutations A = (a1, ..., aN) and B = (b1, ..., bN), the value magic(A,B) is defined as follows:
magic(A,B) = max(a1,b1) + max(a2,b2) + ... + max(aN,bN).




You are given the int N.
You are also given another int K.
Return the number of pairs (A,B) such that both A and B are permutations of size N, and magic(A,B) is greater than or equal to K.
(Note that A and B are not required to be distinct.)


DEFINITION
Class:LittleElephantAndPermutationDiv2
Method:getNumber
Parameters:int, int
Returns:long long
Method signature:long long getNumber(int N, int K)


CONSTRAINTS
-N will be between 1 and 10, inclusive.
-K will be between 1 and 100, inclusive.


EXAMPLES

0)
1
1

Returns: 1

For N=1 the only pair of permutations is ( (1), (1) ).
The magic of this pair of permutations is 1, so we count it.

1)
2
1

Returns: 4

Now there are four possible pairs of permutations. They are shown below, along with their magic value.

magic( (1,2), (1,2) ) = 1+2 = 3
magic( (1,2), (2,1) ) = 2+2 = 4
magic( (2,1), (1,2) ) = 2+2 = 4
magic( (2,1), (2,1) ) = 2+1 = 3

In all four cases the magic value is greater than or equal to K.

2)
3
8

Returns: 18

When A = (1,2,3), there are 3 possibilities for B: (2,3,1), (3,1,2) and (3,2,1). For each of the other 5 values of A, it can be shown that there are 3 possibilities for B as well. Therefore the answer is 3*6 = 18.

3)
10
47

Returns: 13168189440000



*/
// END CUT HERE
