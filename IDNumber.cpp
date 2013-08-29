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
//--
#include<list>
#include<deque>
#include<bitset>
#include<set>
#include<map>
#include<cstdio>
#include<cstring>
#include<sstream>

using namespace std;

class IDNumberVerification{
public:
  int pow2s[19];
  void fp(){
    int i;
    pow2s[0]=1;
    for(i=1;i<19;i++)
      pow2s[i]=pow2s[i-1]*2%11;
    return;
  }
  bool isLeap(int y){
    return (y%400==0 || (y%4==0 && y%100!=0));
  }
  string verify(string id,vector <string> regionCodes){
    string region,birth,sex,cs,re;
    bool flag;
    int i,j,year,month,day,sum=0;
    int monthd[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    fp();
    region=id.substr(0,6);
    birth=id.substr(6,8);
    sex=id.substr(14,3);
    cs=id.substr(17,1);
    year=atoi(birth.substr(0,4).c_str());
    month=atoi(birth.substr(3,2).c_str());
    day=atoi(birth.substr(6,2).c_str());

    flag=1;
    for(i=0;i<regionCodes.size();i++){
      if(regionCodes[i]==region)flag=0;
    }
    if(flag){
      return "Invalid";
    }
cout<<"r";
    flag=0;
    if(month>=13 || year<1900 || 2011<year || day<=0)
      return "Invalid";
    if(day>( monthd[month]+ (month==2 && (isLeap(year)))))
      return "Invalid";
cout<<"b";
    if(sex=="000")
      return "Invalid";
    re=((sex.at(2)-'0')%2)?"Male":"Female";
cout<<"s";
    for(i=0,j=17;i<id.size()-1;i++,j--){
      sum+=(id.at(i)-'0')*pow2s[j];
      sum%=11;
    }
    sum+=((cs=="X")?10:(cs.at(0)-'0'));
    if(sum%11!=1)
      return "Invalid";

    return re;
  }
};

int main(){

  return 0;
}