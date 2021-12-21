#include<bits/stdc++.h>
using namespace std; //namespace works like a scope

namespace cd{
  int val =50;
  int getval(){
    return val*10;
  }
}
//max size of an array globally --> 10^7 (int,char,double)
  int arr[10000000];
//max size of array -->10^8 (bool)
  bool arr[100000000];
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
node *st1=new node("gladingi",21,91.0,"");
node st1=node("gladingi",21,91.0,"");
//best way

//one can use any name instead of "node"

  //------------------------------------------------------------Arrays-------------------------------------------------------------------
//   array containers have their own size. There is no need to pass the size of the arrays container separately as a function arguments
  
  
    //max size of an array inside int main() --> 10^6 (int,double, char)
      int arr[1000000];
    //max size of an array --> 10^7 (bool)
      bool arr[10000000];
    // defining an array

      //method 1
        array<int,3>arr; //{a,b,c}-> arbitrary values

        array<int,5> arr={1}; 
        //the above declaration states that the first index of the array has value=1 and since other indices are not defined, there value is B.D.=0

      //method 2
        array<int,5>arr;
        arr.fill{10}; //-->{10,10,10,10,10}

        arr.at(index); // -->access the value of the defined index
        get<0>(arr); // prints the value at index 0
        arr.size(); arr.max_size(); // prints the maximum no. of elements that can be stored in an array
      
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
        for(auto it=arr.begin();it!=arr.end();it++){
          cout<<*it<<", ";
        }
        //following two methods are used to print the array in reverse order
        for(auto it=arr.rbegin();it!=arr.rend();it++){
          cout<<*it<<", ";
        }
        for(auto it=arr.end()-1;it>=arr.begin(),it--){
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
  //------------------------------------------------------------Arrays-------------------------------------------------------------------

  //------------------------------------------------------------Vectors------------------------------------------------------------------
    vector<int> arr; //creates an empty vector{}
    cout<<arr.size()<<endl; // prints 0
    
    arr.push_back(0); //{0} [array expands dynamically]
    arr.push_back(2); //{0,2}
    cout<<arr.size()<<endl; // prints 2
    // error --> segmentation fault if you push_back >10^6 times

    // pop_back() pops out the last element entered by the coder
      arr.pop_back(); //{0}
      cout<<arr.size()<,endl; // prints 1

    //to erase all the elements --> {}
      arr.clear();
    
    //the number of push_backs are not restricted by the size declared
      vector<int> vec1(3,0); //{0,0,0,0}
      vector<int> vec2(4,1); //{1,1,1,1}
    
    //copy the entire vec2 to vec3
      vector<int> vec3(vec2.begin(),vec2.end()); 
      vector<int> vec3(vec2);

      vector<int> vec4;
      vec4.push_back(1); 
      vec4.push_back(2); 
      vec4.push_back(3);    
      vec4.push_back(4); 
      vec4.push_back(5); 
      vector<int> vec5(vec4.begin(),vec4.begin()+2); // ->{1,2}

    // one can use emplace_back() instead of push_back() as its slightly faster

    //lower bound, upper bound
    //swap swap(vec1,vec2)
    //begin(), rbegin(), end(), rend()

    //define 2-D vectors
      vector<vector<int>> vec;

      vector<int> v1;
      v1.push_back(1);
      v1.push_back(2);

      vector<int> v2;
      v2.push_back(3);
      v2.push_back(4);

      vec.push_back(v1);
      vec.push_back(v2);

    // print a 2D vector
      // vc and it are itself a vector
      for(auto vc:vec){
        for(auto it:vc){
          cout<<it<<", ";
        }
        cout<<endl;
      }
      //traditional way
        for(int i=0;i<vec.size();i++){
          for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<< " ";
          }
          cout<<endl;
        }  

    //define 2D vector of 10 x 20
      vector<vector<int>>vec(10, vector<int> (20,0);)
      vec.push_back(vector<int>(20,0));
      cout<<vec.size()<<endl; //print 11
      vec[2].push_back(1); //dynamic accross both rows and columns

    //define array of vectors
      vector<int>arr[5];
      arr[1].push_back(0); //dynamic accross rows

    //define 3D vector of 10 x 20 x 30
      vector<vector<vector<int>>>vec(10,vector<vector<int>>(20,vector<int>(30,0));)
  //------------------------------------------------------------Vectors------------------------------------------------------------------
return 0;
}
