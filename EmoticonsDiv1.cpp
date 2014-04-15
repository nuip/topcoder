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

class EmoticonsDiv1 {
public:
  int printSmiles(int smiles) {
    int dp[112][2123];
    int i,j,k;
    cout<<"!";
    memset(dp,0,sizeof(dp));
    dp[0][smiles]=1;
    for(i=0;i<=100;i++){
      for(j=1;j<=2000;j++){
//      cout<<dp[i][j];
        if(dp[i][j]==0)
          continue;
        dp[i+1][j+1]=1;
        for(k=1;k<=sqrt(j);k++){
          if(j%k)continue;
          if(i+k<=100)dp[i+k][j/k]=1;
          if(i+j/k<=100)dp[i+j/k][k]=1;
        }
      }//cout<<endl;
      if(dp[i][1])return i;
    }

 /*   for(i=0;i<10;i++){
      for(j=0;j<10;j++)
        cout<<dp[i][j];
      cout<<endl;
    }*/
    return 1000;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 2; verify_case(0, Arg1, printSmiles(Arg0)); }
	void test_case_1() { int Arg0 = 4; int Arg1 = 4; verify_case(1, Arg1, printSmiles(Arg0)); }
	void test_case_2() { int Arg0 = 6; int Arg1 = 5; verify_case(2, Arg1, printSmiles(Arg0)); }
	void test_case_3() { int Arg0 = 18; int Arg1 = 8; verify_case(3, Arg1, printSmiles(Arg0)); }
	void test_case_4() { int Arg0 = 11; int Arg1 = 8; verify_case(4, Arg1, printSmiles(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  EmoticonsDiv1 ___test;
  ___test.run_test(-1);

  int i,maxi=0,maxv=0;
  for(i=2;i<=1000;i*=2){
    int tmp=___test.printSmiles(i);
    if(tmp>=maxv){
      maxv=tmp;
      maxi=i;
    }
    cout<<i<<","<<tmp<<endl;
  }cout<<maxv<<","<<maxi<<endl;
}
/*
// PROBLEM STATEMENT
// You are very happy because you advanced to the next round of a very important programming contest.
You want your best friend to know how happy you are.
Therefore, you are going to send him a lot of smile emoticons.
You are given an int smiles: the exact number of emoticons you want to send.

You have already typed one emoticon into the chat.
Then, you realized that typing is slow.
Instead, you will produce the remaining emoticons using copy, paste, and possibly some deleting.

You can only do three different operations:

Copy all the emoticons you currently have into the clipboard.
Paste all emoticons from the clipboard.
Delete one emoticon from the message.

Each operation takes precisely one second.
Copying replaces the old content of the clipboard.
Pasting does not empty the clipboard.
You are not allowed to copy just a part of the emoticons you already have.
You are not allowed to delete an emoticon from the clipboard.

Return the smallest number of seconds in which you can turn the one initial emoticon into smiles emoticons.

DEFINITION
Class:EmoticonsDiv1
Method:printSmiles
Parameters:int
Returns:int
Method signature:int printSmiles(int smiles)


CONSTRAINTS
-smiles will be between 2 and 1000, inclusive.


EXAMPLES

0)
2

Returns: 2

First use copy, then use paste. The first operation copies one emoticon into the clipboard, the second operation pastes it into the message, so now you have two emoticons and you are done.

1)
4

Returns: 4

One optimal solution is to copy the initial emoticon and then to paste it three times. Another optimal solution is to copy the one emoticon, paste it, copy the two emoticons you currently have, and paste two more.

2)
6

Returns: 5


Copy. This puts one emoticon into the clipboard.
Paste. You now have 2 emoticons in the message.
Copy. The clipboard now contains 2 emoticons.
Paste. You now have 4 emoticons in the message.
Paste. You now have 6 emoticons in the message and you are done.


3)
18

Returns: 8



4)
11

Returns: 8

Sometimes we actually do delete an emoticon in the optimal solution.

*/
// END CUT HERE
