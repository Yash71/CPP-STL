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
return 0;
}
