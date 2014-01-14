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

class FoxAndGo2 {
public:
  bool used[20][20],black[20][20];
  vector<string> bd;
  map<int,pair<int,int> > pro;
  map<int,pair<int,int> >::reverse_iterator rit;
  int count(int y,int x){
    if(y<0 || bd.size()<=y || x<0 || bd.size()<=x)
      return 0;
    if(used[y][x]||bd[y][x]!='o')
      return 0;
    int dx[]={1,0,-1,0,},dy[]={0,1,0,-1};
    int sum=1;
    used[y][x]=1;
    for(int i=0;i<4;i++){
      sum+=count(y+dy[i],x+dx[i]);
    }
    return sum;
  }
  int kakou(int y,int x){
    if(y<0 || bd.size()<=y || x<0 || bd.size()<=x)
      return 0;
    if(used[y][x])
      return 0;
    if(bd[y][x]!='o'){
      black[y][x]=1;
      return 0;
    }
    int dx[]={1,0,-1,0,},dy[]={0,1,0,-1};
    int sum=1;
    used[y][x]=1;
    for(int i=0;i<4;i++){
      sum+=kakou(y+dy[i],x+dx[i]);
    }
    return sum;
  }
  bool isVailed(int y,int x){
    if(y<0 || bd.size()<=y || x<0 || bd.size()<=x)
      return 0;
    return 1;
  }
  bool canErase(int x,int y){
   // cout<<y<<","<<x<<endl;
    int i,j,k;
    memset(used,0,sizeof(used));
    memset(black,0,sizeof(black));
    kakou(x,y);
    bool f;
    int dx[]={1,0,-1,0,},dy[]={0,1,0,-1};
    f=1;
    for(i=0;i<bd.size();i++){
      for(j=0;j<bd.size();j++){
        //cout<<black[i][j];
        if(black[i][j])for(k=0;k<4;k++){
          if(isVailed(i+dy[k],j+dx[k]))
            f&=(black[i+dy[k]][j+dx[k]] || bd[i+dy[k]][j+dx[k]]=='o');
        }
      }
    }
        if(f)return 0;
    return 1;

  }
  int maxKill(vector <string> board) {
    bd=board;
    memset(used,0,sizeof(used));
    int i,j,sum;
    for(i=0;i<board.size();i++){
      for(j=0;j<board.size();j++){
        if(board[i][j]=='.' || used[i][j])
          continue;
        sum=count(i,j);
        pro.insert(pair<int,pair<int,int> >(sum,pair<int,int>(i,j)));
      }
    }
    for(rit=pro.rbegin();rit!=pro.rend();rit++)
      if(canErase(rit->Y.X,rit->Y.Y))
        return rit->X;
    return 0;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"...",
 ".o.",
 "..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, maxKill(Arg0)); }
	void test_case_1() { string Arr0[] = {"o.",
 "oo"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(1, Arg1, maxKill(Arg0)); }
	void test_case_2() { string Arr0[] = {".o.o.",
 "o.o.o",
 ".o.o.",
 "o.o.o",
 ".o.o."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(2, Arg1, maxKill(Arg0)); }
	void test_case_3() { string Arr0[] = {".o.o.",
 "o.o.o",
 ".o.o.",
 "o.o.o",
 "....."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10; verify_case(3, Arg1, maxKill(Arg0)); }
	void test_case_4() { string Arr0[] = {".o.o.o.o.o.",
 "o.ooo.ooo.o",
 ".o.......o.",
 "oo.......oo",
 ".o...o...o.",
 "o...o.o...o",
 ".o...o...o.",
 "oo.......oo",
 ".o.......o.",
 "o.ooo.ooo.o",
 ".o.o.o.o.o."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(4, Arg1, maxKill(Arg0)); }
	void test_case_5() { string Arr0[] = {"...ooo.....",
 "...o.o.....",
 ".ooo.ooo...",
 ".o.....o...",
 ".ooo.ooo...",
 "...o.o.....",
 "...ooo.....",
 "....o......",
 "....o...ooo",
 "....ooooo.o",
 "........ooo"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 38; verify_case(5, Arg1, maxKill(Arg0)); }
	void test_case_6() { string Arr0[] = {"ooooooooooo",
 "o.........o",
 "o...ooo...o",
 "o...o.o...o",
 "o...ooo...o",
 "o....o....o",
 "o....oooooo",
 "o..........",
 "o.......ooo",
 "o.......o.o",
 "ooooooooooo"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(6, Arg1, maxKill(Arg0)); }
	void test_case_7() { string Arr0[] = {"oo.o.ooo.o..o..",
 "...ooo.o..oo.oo",
 "o..o.o.ooo.o..o",
 "oo.......oo.ooo",
 "..oo.o.o.o.ooo.",
 "..oo..oo..o.ooo",
 "oo.o.oo..o.oooo",
 ".oo.o..ooo.o.oo",
 "o..o.o.o.o.oo..",
 ".oo.oo...o....o",
 "o.o.oo....oo..o",
 ".o.o..o.oo..ooo",
 "o.o.o..o..o....",
 "ooo.oooooooo..o",
 "o..oo.o..o.ooo."}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 60; verify_case(7, Arg1, maxKill(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  FoxAndGo2 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Fox Ciel is teaching her friend Jiro to play Go.
Ciel has just placed some white tokens onto a board.
She now wants Jiro to find the best possible sequence of moves.
(This is defined more precisely below.)


You are given a vector <string> board.
Character j of element i of board represents the cell (i,j) of the board:
'o' is a cell with a white token and '.' is an empty cell.
At least one cell on the board will be empty. Note that there are currently no black tokens on the board.


Each Jiro's move consists of adding a single black token to the board.
The token must be placed onto an empty cell.
Once Jiro places the token, some white tokens will be removed from the board according to the rules described in the next paragraphs.


The tokens on the board can be divided into connected components using the following rules:
If two tokens of the same color lie in cells that share an edge, they belong to the same component.
Being in the same component is transitive: if X lies in the same component as Y and Y lies in the same component as Z, then X lies in the same component as Z.


Note that each component of tokens is either completely white or completely black. Each component of tokens is processed separately.
For each component we check whether it is adjacent to an empty cell.
(That is, whether there are two cells that share an edge such that one of them is empty and the other contains a token from the component we are processing.)
If there is such an empty cell, the component is safe and its tokens remain on the board.
If there is no such empty cell, the component is killed and all its tokens are removed from the board.
There are also the following additional rules:

All white components must be processed before black ones (in any order).
If at least one white token was removed, then black components must not be processed at all.
Otherwise, all black components must be processed (in any order).
If at least one black token was removed, this is called a "suicide move". Such moves are invalid and Jiro is not allowed to make them.



Jiro's score is the total number of white tokens removed from the board after each of his moves is evaluated.
Return the maximal score he can get for the given board.


DEFINITION
Class:FoxAndGo2
Method:maxKill
Parameters:vector <string>
Returns:int
Method signature:int maxKill(vector <string> board)


CONSTRAINTS
-n will be between 2 and 19, inclusive.
-board will contain exactly n elements.
-Each element in board will contain exactly n characters.
-Each character in board will be 'o' or '.'.
-There will be at least 1 '.' in board.


EXAMPLES

0)
{"...",
 ".o.",
 "..."}

Returns: 1


.A.
BoC
.D.

Jiro can put black pieces at A,B,C,D (in any order).


1)
{"o.",
 "oo"}

Returns: 3

Jiro needs to place the black token into the empty cell. After that, the white component becomes unsafe and will be killed. The black component won't be processed, so the black token will remain on board.

2)
{".o.o.",
 "o.o.o",
 ".o.o.",
 "o.o.o",
 ".o.o."}

Returns: 0

Regardless of which empty cell he chooses, he will never kill any white component with this single black token.
On the other hand, his black token would always be killed.
Therefore, Jiro has no valid move on this board.

3)
{".o.o.",
 "o.o.o",
 ".o.o.",
 "o.o.o",
 "....."}

Returns: 10



4)
{".o.o.o.o.o.",
 "o.ooo.ooo.o",
 ".o.......o.",
 "oo.......oo",
 ".o...o...o.",
 "o...o.o...o",
 ".o...o...o.",
 "oo.......oo",
 ".o.......o.",
 "o.ooo.ooo.o",
 ".o.o.o.o.o."}

Returns: 4



5)
{"...ooo.....",
 "...o.o.....",
 ".ooo.ooo...",
 ".o.....o...",
 ".ooo.ooo...",
 "...o.o.....",
 "...ooo.....",
 "....o......",
 "....o...ooo",
 "....ooooo.o",
 "........ooo"}


Returns: 38



6)
{"ooooooooooo",
 "o.........o",
 "o...ooo...o",
 "o...o.o...o",
 "o...ooo...o",
 "o....o....o",
 "o....oooooo",
 "o..........",
 "o.......ooo",
 "o.......o.o",
 "ooooooooooo"}


Returns: 0

Sometimes, making no moves at all is an optimal strategy.


7)
{"oo.o.ooo.o..o..",
 "...ooo.o..oo.oo",
 "o..o.o.ooo.o..o",
 "oo.......oo.ooo",
 "..oo.o.o.o.ooo.",
 "..oo..oo..o.ooo",
 "oo.o.oo..o.oooo",
 ".oo.o..ooo.o.oo",
 "o..o.o.o.o.oo..",
 ".oo.oo...o....o",
 "o.o.oo....oo..o",
 ".o.o..o.oo..ooo",
 "o.o.o..o..o....",
 "ooo.oooooooo..o",
 "o..oo.o..o.ooo."}


Returns: 60



*/
// END CUT HERE
