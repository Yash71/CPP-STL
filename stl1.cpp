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

//------------------------------------------------------------Arrays-------------------------------------------------------------------
  // defining an array

    //method 1
      array<int,3>arr; //{a,b,c}-> arbitrary values

      array<int,5> arr={1}; 
      //the above declaration states that the first index of the array has value=1 and since other indices are not defined, there value is B.D.=0

    //method 2
      array<int,5>arr;
      arr.fill{10}; //-->{10,10,10,10,10}

      arr.at(index); // -->access the value of the defined index

    //print the array using "at" function
      for(int i=0;i<5;i++){
        cout<<arr.at(i)<<", ";
      }

  //iterators
    // begin() end() rbegin() rend()

     //begin() --> points to the beginning address of an array
     //rbegin() --> (reverse begin) points to the end address of an array

     //end() --> points to the empty address right after the last element of the array.
     //rend() --> points to the empty address right before the first element of the array.

     //method of traversing through an array and printing all the elements
      array<int,5>arr={1,2,3,4,5,6};
      for(auto it:arr.begin();it!=arr.end();it++){
        cout<<*it<<", ";
      }
      //following two methods are used to print the array in reverse order
      for(auto it:arr.rbegin();it!=arr.rend();it++){
        cout<<*it<<", ";
      }
      for(auto it:arr.end()-1;it>=arr.begin(),it--){
        cout<<*it<<", ";
      }
      //one can replace "!=" with ">" (greater than)

      //in the following code, it itterates through the element itself, so no use of "*it" while printing the array
      //for each loop
      for(auto it:arr){
        cout<<it<<" ";
      }
      string s="dfklsdj";
      for(auto c:s){
        cout<<c<<" "; //prints d f k l s d j
      }
    //size (prints the size of the array)
      cout<<arr.size();
    //front (prints the first element)
      cout<<arr.front(); //arr.at(0);

    //back (prints the last element)
      cout<<arr.back(); //arr.at(arr.size()-1);


























  return 0;
}