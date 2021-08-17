#include<bits/stdc++.h>
using namespace std; //namespace works like a scope

namespace cd{
  int val =50;
  int getval(){
    return val*10;
  }
}
int main(){
  double val =10.0;
  cout<<val<<endl; //prints 10
  cout<<cd::val<<endl; //prints 50
  cout<<cd::getval()<<endl; //prints 500

//create a data type where you store {string, int, double,char}

struct node{
  string str;
  int num;
  double db;
  char a;

  //part of best way
node(str_,num_,db_,a_){
  str=str_;
  num=num_;
  db=doub_;
  a=a_;
}
  //part of best way
};

//naive way
node stl;
stl.str="gladingi";
st1.num=21;
st1.doub=91.0;
//naive way

//best way
node st1=new node("gladingi",21,91.0,"");
//best way

//one can use any name instead of "node"

  return 0;
}