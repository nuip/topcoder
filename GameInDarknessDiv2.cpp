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

class GameInDarknessDiv2 {
public:
  string check(vector <string> field, vector <string> moves) {
    
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"A.B..",
 "##.##",
 "##.##"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"RRDUR"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Alice wins"; verify_case(0, Arg2, check(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"A.B..",
 "##.##",
 "##..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"RRRLD"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Bob wins"; verify_case(1, Arg2, check(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"###.#",
 "###..",
 "A..B#",
 "###..",
 "###.#"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"RR", "R", "UDD"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Alice wins"; verify_case(2, Arg2, check(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"A.###",
 ".B..."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"RDRRRLLLLUDUDRLURDLUD"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Bob wins"; verify_case(3, Arg2, check(Arg0, Arg1)); }
	void test_case_4() { string Arr0[] = {".....",
 ".#.#.",
 "##.#.",
 "A###.",
 "B...."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"D"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Alice wins"; verify_case(4, Arg2, check(Arg0, Arg1)); }
	void test_case_5() { string Arr0[] = {".#...#....#.......#....#......",
 "...###.#.#..#.#.#..###...#.#.#",
 ".#.#...#...#..#..#.....##.#...",
 "#..#.##..##..#.#..###.#....#.#",
 "..#..#..#...#...#....#..##.#..",
 "#..##..#..##.#.#.####..#.#...#",
 ".#....##.#.....#......##.#.#..",
 ".###.#...#.#.#..#.#.##...##.#.",
 ".....#.#.##..#.#..##...##...#.",
 "#.#.#...#...#.#.#...#.#.#.##.#",
 ".#..##.#..##..#.###...........",
 "..##.....####.......##.#.#.##.",
 "#....##.#.#...####.#...#.#.#..",
 "#.#.#......##.#...#..#.#..#..#",
 "..#..#.#.##...#.#..#..#..#..#.",
 ".#..#...#...#..#..#.#..#..#A#.",
 "..#..#.#.B##.##..#...#.#.##...",
 "#.#.##..#......#.#.#.#.#...#.#",
 "#.#...#.######...#.#.#.#.#.#..",
 "..#.##.#.....#.##..#...#.#.#.#",
 ".#..#..#.#.#.#.#..#.#####..#.#",
 "..#.#.##.#.#.##.#......#..#...",
 "#..#.....#.#.....#.#.##..##.#.",
 "##..###.#..#.#.#.#..##..#...##",
 "##.#...#..##.#.#..#.#..#.#.#..",
 "#..#.#.####..#..#..#..#......#",
 "..#..#.....####..#.##.#.###.#.",
 ".#..#.####.#.#..#.....#...#...",
 "..##.......#...#..####.##.#.#.",
 "#....#.#.#..#.###....#....#..#"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"UURURUULLLLLLLLLLDLLLLUDLLUDDLRDDDULLDLLDDRRRRRDDU","RRUUURUULLD"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "Alice wins"; verify_case(5, Arg2, check(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  GameInDarknessDiv2 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Alice and Bob are playing a game on a rectangular board.
Rows and columns are both numbered starting from 0.
We will use (i, j) to denote the cell in row i, column j.
The cell (0, 0) is in the top left corner of the board.
Some cells contain walls, others are empty.
The game is played on empty cells only. 

The game is played as follows:
Each player has one piece on the board.
Initially, each piece occupies a different cell.
The players take alternating turns, Alice starts.
In each turn, the player moves his/her piece onto one of the adjacent empty cells.
(Note that moving the piece is mandatory, it is not allowed to keep it in its current cell.) 

If at any moment the two tokens occupy the same cell, Alice wins.
If Alice gives up (described below), Bob wins. 

You are given a vector <string> field that describes the game board.
Character j of element i of field describes the initial content of the cell (i, j).
The character '.' represents an empty cell, '#' represents a wall, 'A' is an empty cell where Alice's piece starts, and 'B' is an empty cell where Bob's piece starts. 

Here is the twist:
The game board is completely in the dark.
Alice and Bob each know the initial location of both pieces.
During the game, Alice has no idea how Bob moves his piece.
However, Bob knows exactly how Alice will play the game.
(Note that this is actually possible: as Alice does not gain any information during the game, she may as well determine her entire strategy in advance.) 

You are given a vector <string> moves that represents Alice's strategy.
Concatenate all elements of moves to obtain a string M.
For each i, in her i-th turn, Alice will move her piece according to the character M[i-1].
Assume that before Alice's i-th turn her piece was at (y, x).
In the i-th turn she moves as follows:

If M[i-1] is 'U' (quotes for clarity): she moves to (y-1, x). 
If M[i-1] is 'R' (quotes for clarity): she moves to (y, x+1). 
If M[i-1] is 'L' (quotes for clarity): she moves to (y, x-1). 
If M[i-1] is 'D' (quotes for clarity): she moves to (y+1, x). 

It is guaranteed that M will represent a valid sequence of moves that only uses empty cells and never leaves the board.
If Alice gets to the situation where she has to make a move but has no more letters in M, she gives up and Bob wins the game. 

Bob can use his knowledge of M and his knowledge of the game board when planning his own moves.
If it is possible for Bob to win the game, return "Bob wins" (quotes for clarity).
Otherwise, return "Alice wins".


DEFINITION
Class:GameInDarknessDiv2
Method:check
Parameters:vector <string>, vector <string>
Returns:string
Method signature:string check(vector <string> field, vector <string> moves)


NOTES
-Note that the return value is case sensitive.


CONSTRAINTS
-field and moves will contain between 1 and 50 elements, inclusive.
-Each element of field and moves will contain between 1 and 50 characters, inclusive.
-Each element of field will contain the same number of characters.
-Each character of each element of field will be either '.', '#', 'A' or 'B' (quotes for clarity).
-field will contain exactly one 'A' and 'B' each.
-Each character of moves will be either 'U', 'D', 'L' or 'R' (quotes for clarity).
-The sequence of moves represented by moves will be a valid sequence of moves for Alice's piece.
-In the starting position each player will have at least one possible move.


EXAMPLES

0)
{"A.B..",
 "##.##",
 "##.##"}
{"RRDUR"}

Returns: "Alice wins"

In this game, M="RRDUR".
In this case Alice can always win regardless of how Bob moves.
One possible game is as follows:

Alice moves her piece to (0, 1).
Bob moves his piece to (0, 3).
Alice moves to (0, 2).
Bob moves to (0, 4).
Alice moves to (1, 2).
Bob moves to (0, 3).
Alice moves to (0, 2).
Bob moves to (0, 4).
Alice moves to (0, 3).
Bob moves to (0, 3). Alice and Bob are on the same cell, so Alice wins.

Note that Alice has used up all characters of M. Even so, Alice doesn't give up unless she needs to make her 6-th move.


1)
{"A.B..",
 "##.##",
 "##..."}
{"RRRLD"}

Returns: "Bob wins"



2)
{"###.#",
 "###..",
 "A..B#",
 "###..",
 "###.#"}
{"RR", "R", "UDD"}

Returns: "Alice wins"

Make sure to concatenate the elements of moves.

3)
{"A.###",
 ".B..."}
{"RDRRRLLLLUDUDRLURDLUD"}

Returns: "Bob wins"



4)
{".....",
 ".#.#.",
 "##.#.",
 "A###.",
 "B...."}
{"D"}

Returns: "Alice wins"



5)
{".#...#....#.......#....#......",
 "...###.#.#..#.#.#..###...#.#.#",
 ".#.#...#...#..#..#.....##.#...",
 "#..#.##..##..#.#..###.#....#.#",
 "..#..#..#...#...#....#..##.#..",
 "#..##..#..##.#.#.####..#.#...#",
 ".#....##.#.....#......##.#.#..",
 ".###.#...#.#.#..#.#.##...##.#.",
 ".....#.#.##..#.#..##...##...#.",
 "#.#.#...#...#.#.#...#.#.#.##.#",
 ".#..##.#..##..#.###...........",
 "..##.....####.......##.#.#.##.",
 "#....##.#.#...####.#...#.#.#..",
 "#.#.#......##.#...#..#.#..#..#",
 "..#..#.#.##...#.#..#..#..#..#.",
 ".#..#...#...#..#..#.#..#..#A#.",
 "..#..#.#.B##.##..#...#.#.##...",
 "#.#.##..#......#.#.#.#.#...#.#",
 "#.#...#.######...#.#.#.#.#.#..",
 "..#.##.#.....#.##..#...#.#.#.#",
 ".#..#..#.#.#.#.#..#.#####..#.#",
 "..#.#.##.#.#.##.#......#..#...",
 "#..#.....#.#.....#.#.##..##.#.",
 "##..###.#..#.#.#.#..##..#...##",
 "##.#...#..##.#.#..#.#..#.#.#..",
 "#..#.#.####..#..#..#..#......#",
 "..#..#.....####..#.##.#.###.#.",
 ".#..#.####.#.#..#.....#...#...",
 "..##.......#...#..####.##.#.#.",
 "#....#.#.#..#.###....#....#..#"}
{"UURURUULLLLLLLLLLDLLLLUDLLUDDLRDDDULLDLLDDRRRRRDDU","RRUUURUULLD"}

Returns: "Alice wins"



*/
// END CUT HERE
