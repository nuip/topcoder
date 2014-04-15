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

class ColorfulCoins {
public:
  int minQueries(vector<long long> values) {
    map<ll,int> mp;
    map<ll,int>::iterator it;
    ll i,j,num[values.size()],re=0,n;
    for(i=0;i<values.size()-1;i++){
      num[i]=values[i+1]/values[i]-1;
      mp[num[i]]++;
      cout<<num[i]<<",";
    }
    n=values.size()-1;
    cout<<n<<endl;
    
    ll re2=0;
    for(int a=values.size();a;re2++)a=(a>>1);
    
    while(n&&re<re2){
      cout<<"["<<re<<"]";
      re++;
      ll fre=0,pre=0;
      for(it=mp.begin();it!=mp.end();it++){
        ll v=it->X;
        cout<<v<<"-"<<it->Y<<",";
        if(v-pre+fre>=it->Y){
          n-=(it->Y);
          (it->Y)=0;
          fre+=v-pre-(it->Y)+fre;
        }else{
          (it->Y)-=v-pre+fre;
          n-=v-pre+fre;
          fre=0;
        }
        pre=v;
      }cout<<n<<endl;
    }
    cout<<re<<endl;

    return max(min(re2,re),1ll);
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { long Arr0[] = {1}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, minQueries(Arg0)); }
	void test_case_1() { long Arr0[] = {1, 3}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(1, Arg1, minQueries(Arg0)); }
	void test_case_2() { long Arr0[] = {1, 2, 4}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, minQueries(Arg0)); }
	void test_case_3() { long Arr0[] = {1, 2, 4, 8, 16}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(3, Arg1, minQueries(Arg0)); }
	void test_case_4() { long Arr0[] = {1ll, 2ll, 6ll, 30ll, 90ll, 270ll, 810ll, 2430ll, 7290ll, 29160ll, 87480ll, 262440ll, 787320ll, 3149280ll,
  9447840ll, 28343520ll, 56687040ll, 170061120ll, 510183360ll, 1530550080ll, 3061100160ll,
  9183300480ll, 27549901440ll, 82649704320ll, 247949112960ll, 1239745564800ll, 3719236694400ll,
  14876946777600ll, 44630840332800ll, 223154201664000ll, 669462604992000ll, 2008387814976000ll,
  6025163444928000ll, 12050326889856000ll, 24100653779712000ll, 72301961339136000ll,
  289207845356544000ll, 867623536069632000ll}; vector<long long> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(4, Arg1, minQueries(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  ColorfulCoins ___test;
  ___test.run_test(-1);
}
/*
// PROBLEM STATEMENT
// The currency system in Colorland consists of various types of coins. The coin denominations follow these simple rules:


The denominations are distinct positive integers.
There is a coin type with denomination 1.
For each pair of different coin types, the denomination of one coin type divides the denomination of the other one.


You are given a long[] values containing all the available denominations in ascending order.

Coins of different denominations look exactly the same except that they have different colors. Each coin in Colorland has exactly one color. The coin colors follow these even simpler rules:


All coins of the same type are of the same color.
No two coins of different types are of the same color.


You know all coin denominations used in Colorland, but you don't know their colors. You don't even know the set of colors used on the coins.

For each denomination, you'd like to know the color of coins of this denomination. To accomplish this, you've got a credit card with an infinite amount of money. You can perform queries to an ATM which can also provide you with an infinite amount of money. Each query is described by a positive integer X, which means that you want to receive exactly X units of money from the ATM. The ATM will provide you with the requested amount. You also know that the requested amount will be paid using the smallest possible number of coins. (Note that this rule always uniquely determines the set of coins chosen to make the payment.)

Return the smallest number of queries you need to determine the corresponding color for each of the denominations. (Note that this can always be done in a finite number of queries.)


DEFINITION
Class:ColorfulCoins
Method:minQueries
Parameters:vector<long long>
Returns:int
Method signature:int minQueries(vector<long long> values)


CONSTRAINTS
-values will contain between 1 and 60 elements, inclusive.
-Each element of values will be between 1 and 10^18, inclusive.
-values will be sorted in strictly ascending order. Note that this also implies that all the elements of values will be distinct.
-For each pair of different elements in values, the smaller one will be a divisor of the larger one.
-values[0] will be 1.


EXAMPLES

0)
{1}

Returns: 1

There is just one coin type. We have to make a query to learn the color of coins.

1)
{1, 3}

Returns: 1

Just one query with X = 5 is one possible solution. As the ATM gives the smallest number of coins, it will give one coin of denomination 3 and two coins of denomination 1. That means, for example, that if you get one red coin and two blue coins, you'll understand that coins of denomination 3 are red, and coins of denomination 1 are blue.

2)
{1, 2, 4}

Returns: 2

One optimal solution is to make two queries, first X = 5 and then X = 6. After the first query you'll receive one coin from each of denominations 1 and 4, and after the second query you'll receive one coin from each of denominations 2 and 4. Now you can uniquely determine the color of each denomination. For example, coins of denomination 4 have the color which appears twice among the received coins.

3)
{1, 2, 4, 8, 16}

Returns: 3



4)
{1, 2, 6, 30, 90, 270, 810, 2430, 7290, 29160, 87480, 262440, 787320, 3149280,
  9447840, 28343520, 56687040, 170061120, 510183360, 1530550080, 3061100160,
  9183300480, 27549901440, 82649704320, 247949112960, 1239745564800, 3719236694400,
  14876946777600, 44630840332800, 223154201664000, 669462604992000, 2008387814976000,
  6025163444928000, 12050326889856000, 24100653779712000, 72301961339136000,
  289207845356544000, 867623536069632000}

Returns: 4



*/
// END CUT HERE
