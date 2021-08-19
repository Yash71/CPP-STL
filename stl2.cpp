#include<bits/stdc++.h>
using namespace std;

int main(){
// ordered set
  //given n elements, tell the number of unique elements
    array<int,6> arr={2,3,5,6,4,5}; //5 unique elements ->{2,3,4,5, 6}

    set<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      st.insert(x); //time complexity of insert operation -> O  (logn);  n is size of set
    }
  //one cannot access the set elements by st[0] or st[1] but by using *st.begin() 
  //set stores the data in ascending order

  //st->{2,3,4,5,6}
    st.erase(st.begin()); // st->{3,4,5,6}
    st.erase(st.begin(),st.begin()+2); // st->{4,5,6}
    st.erase(5); // st.erase(key) st->{2,3,4,6}

  //declaration of set is very similar to vector
  set<int> st={1,2,3};

  auto it=st.find(2); // O(logn) returns the itterator of 7
  auto it=st.find(4); // it=st.end();

  st.emplace(4); //st.insert(4); //emplace is bit faster than insert

  st.erase(st.begin(),st.end()); //erase the entire set

  //to print the set
    for(auto it=st.begin();it!=st.end();it++){
      cout<<*it<<", ";
    }
      //---OR-----
    for(auto it: st){
      cout<<it<<", ";
    }

// ordered set

//unordered set
  unordered_set<int> st;
  st.insert(2);
  st.insert(3);
  st.insert(1);
  //all the functionalites are similar to ordered set
  //average time complexity is O(1)
//unordered set

//multiset
  multiset<int> ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  ms.insert(2);
  ms.insert(3);
  ms.insert(4);
  //ms->{1,1,2,2,3,4}
  
  ms.erase(2); // all the instances of 2 will be erased.
  ms.clear(); //deletes the entire set
  ms.erase(ms.begin(),ms.end()); //deletes the entire set
  ms.erase(ms.find(2)); //deletes the first instance of 2 

  ms.count(2); //finds the number of instances of 2
  //print the multiset
      for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<", ";
      }
        //---OR---
      for(auto it:ms){
        cout<<it<<endl;
      }
//multiset

//key value
//map
  //yash -->2
  //arshi --> 3
  //prem --> 5
  
  map<string,int>mpp;
  mpp["yash"]=2;
  mpp["arshi"]=3;
  mpp["prem"]=5;
  //a map is always sorted according to the keys
  //a map only stores unique keys

  mpp.emplace("yash",2); // mpp.["yash"]=2;
  mpp.erase("yash"); //mpp.erase(key)
  mpp.erase(mpp.begin()); //erases the first element in map
  mpp.clear(); //empties the whole map
  auto it=mpp.find("yash");// points to where yash is located
  
  // to check if the map is empty of not
  if(mpp.empty()){
    cout<<"yes, it is empty";
  }
  mpp.count("yash"); //always return 1 as it stores unique keys

  //printing map
    for(auto it:mpp){
      cout<<it.first<<" "<<it.second<<endl; //it.first prints the key and it.second prints the value 
    }
    for(auto it=mpp.begin();it!=mpp.end();it++){
      cout<<it->first<<" "<<it->second<<endl;
    }
//map

//unordered map
  unordered_map<int,int>mpp;
  //O(1) in almost all cases
  //O(n) in the worst case, where n is the container size

//unordered map

//Pair Class
  pair<int,int> pr={1,2};
  pair<pair<int,int>,int> pr1 ={{1,2},2};
  cout<<pr1.first.second<<endl; // prints 2

  pair<pair<int,int>,pair<int,int>>pr2={{1,2},{2,5}};
  cout<<pr2.first.first<<endl; //prints 1
  cout<<pr2.second.second<<endl; //prints 5

  vector<pair<int,int>> vec;
  set<pair<int,int>> st;
  map<pair<int,int>,int> mpp;
//Pair Class

//summary
//map-> sorted, unique keys
//unorderd map-> unsorted, unique keys
//multimap-> sorted, multiple keys





return 0;
}
