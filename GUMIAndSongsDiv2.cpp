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


class GUMIAndSongsDiv2 {
public:
  int maxSongs(vector <int> duration, vector <int> tone, int T) {
    int i,j;
    multimap<int,int> songs;
    multimap<int,int>::iterator it,iti;

    for(i=0;i<tone.size();i++)
      songs.insert(make_pair(tone[i],duration[i]));
    for(it=songs.begin();it!=songs.end();it++){
      printf("(%d,%d)",it->X,it->Y);
    }cout<<T<<endl;
    
    int re=0,sangsong=0,sum=0,pre=-1;
    for(i=0;i<(1<<tone.size());i++){//cout<<endl;
      pre=-1;
      sum=0;
      sangsong=0;
      for(j=0,it=songs.begin();j<tone.size();j++,it++){
        if(i&(1<<j))continue;
        //cout<<j<<":";
        sangsong++;
        sum+=it->Y;
        if(pre!=-1){
          sum+=abs(pre-it->X);
        }
        pre=it->X;
        if(sum>T)break;
      }
      if(sum<=T){
        if(re<sangsong){
          re=sangsong;
          printf("%o:%d(%d)\n",i,re,sum);
        }
      }
    }
    return re;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {3, 5, 4, 11}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 1, 3, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 17; int Arg3 = 3; verify_case(0, Arg3, maxSongs(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arr0[] = {100, 200, 300}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 2, 3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 10; int Arg3 = 0; verify_case(1, Arg3, maxSongs(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arr0[] = {1, 2, 3, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {1, 1, 1, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 100; int Arg3 = 4; verify_case(2, Arg3, maxSongs(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arr0[] = {10, 10, 10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {58, 58, 58}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 30; int Arg3 = 3; verify_case(3, Arg3, maxSongs(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arr0[] = {8, 11, 7, 15, 9, 16, 7, 9}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {3, 8, 5, 4, 2, 7, 4, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 14; int Arg3 = 1; verify_case(4, Arg3, maxSongs(Arg0, Arg1, Arg2)); }
	void test_case_5() { int Arr0[] = {5611,39996,20200,56574,81643,90131,33486,99568,48112,97168,5600,49145,73590,3979,94614}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2916,53353,64924,86481,44803,61254,99393,5993,40781,2174,67458,74263,69710,40044,80853}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 302606; int Arg3 = 8; verify_case(5, Arg3, maxSongs(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  GUMIAndSongsDiv2 ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// Gumi loves singing.
She knows N songs.
The songs are numbered 0 through N-1.
She now has some time and she would love to sing as many different songs as possible. 

You are given a vector <int> duration.
For each i, duration[i] is the duration of song i in Gumi's time units. 

Gumi finds it difficult to sing songs with quite different tones consecutively.
You are given a vector <int> tone with the following meaning:
If Gumi wants to sing song y immediately after song x, she will need to spend |tone[x]-tone[y]| units of time resting between the two songs.
(Here, || denotes absolute value.) 

You are also given an int T.
Gumi has T units of time for singing.
She can start singing any song she knows immediately at the beginning of this time interval.
Compute the maximal number of different songs she can sing completely within the given time.

DEFINITION
Class:GUMIAndSongsDiv2
Method:maxSongs
Parameters:vector <int>, vector <int>, int
Returns:int
Method signature:int maxSongs(vector <int> duration, vector <int> tone, int T)


CONSTRAINTS
-duration and tone will each contain between 1 and 15 elements, inclusive.
-duration and tone will contain the same number of elements.
-Each element of duration will be between 1 and 100,000, inclusive.
-Each element of tone will be between 1 and 100,000, inclusive.
-T will be between 1 and 10,000,000, inclusive.


EXAMPLES

0)
{3, 5, 4, 11}
{2, 1, 3, 1}
17

Returns: 3

There are four songs. 
Two songs have tone 1 and their durations are 5 and 11, respectively.
One song has tone 2 and its duration is 3.
One song has tone 3 and its duration is 4.
Gumi has 17 units of time to sing. 

It is impossible for Gumi to sing all four songs she knows within the given time: even without the breaks the total length of all songs exceeds 17. 

Here is one way how she can sing three songs:
First, she sings song 0 in 3 units of time.
Second, she waits for |2-3|=1 unit of time and then sings song 2 in 4 units of time.
Finally, she waits for |3-1|=2 units of time and then sings song 1 in 5 units of time.
The total time spent is 3+1+4+2+5 = 15 units of time.


1)
{100, 200, 300}
{1, 2, 3}
10

Returns: 0

In this case, T is so small that she can't sing at all.

2)
{1, 2, 3, 4}
{1, 1, 1, 1}
100

Returns: 4

There is plenty of time, so she can sing all 4 songs.


3)
{10, 10, 10}
{58, 58, 58}
30

Returns: 3



4)
{8, 11, 7, 15, 9, 16, 7, 9}
{3, 8, 5, 4, 2, 7, 4, 1}
14

Returns: 1



5)
{5611,39996,20200,56574,81643,90131,33486,99568,48112,97168,5600,49145,73590,3979,94614}
{2916,53353,64924,86481,44803,61254,99393,5993,40781,2174,67458,74263,69710,40044,80853}
302606

Returns: 8



*/
// END CUT HERE
  /*  pair<int,int> temp;
    int i,j;
    cout<<"!"<<endl;
    for(i=0;i<tone.size();i++){
      set<int> tmp;
      temp.X=duration[i];
      temp.Y=tone[i];
      tmp.insert(i);
      minT[0].insert(make_pair(tmp,temp));
    }
    set<int> tmp;
    for(i=1;i<tone.size();i++){
      for(it=minT[i-1].begin();it!=minT[i-1].end();it++){
        for(j=0;j<tone.size();j++){
          tmp=it->X;
          if(tmp.count(i))continue;
          tmp.insert(i);
          temp.Y=tone[j];
          temp.X=it->Y.X+abs(it->Y.Y-tone[j])+duration[j];
          if(temp.X>T)continue;
          if(minT[i].count(tmp)){
            if(minT[i][tmp].X>temp.X){
              minT[i].insert(make_pair(tmp,temp));
            }
          }else{
            minT[i].insert(make_pair(tmp,temp));
          }
        }
      }for(it=minT[i-1].begin();it!=minT[i-1].end();it++){
        for(iti=it->X.begin();iti!=it->X.end();iti++){
          cout<<*iti<<" ";
        }cout<<":"<<it->Y.X<<","<<it->Y.Y<<endl;
      }
    }
    int re=0;
    for(i=0;i<tone.size();i++){
      for(it=minT[i].begin();it!=minT[i].end();it++){
        if(it->Y.X<=T){
          re=i+1;
          break;
        }
      }
    }
    return re;
*/