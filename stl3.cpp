#include<bits/stdc++.h>
using namespace std;

int main(){
//--------bitset---------
  //int --> 16 bits
  //char --> 8 bits
  //bitset --> 1 bit
  bitset<5> bt;
  cin>>bt;

  // functions --> all any count flip none set reset size test
  cout<<bt.all(); // if all the bits are set(1)--> prints true
  cout<<bt.any(); //if any of the bit is set(1)--> prints true
  cout<<bt.count(); //prints the number of set bits
  bt.flip(2); //bt.flip(index)--> inverts the bit at the specified index
  cout<<bt.none(); //if none of the bits are set(1)--> prints true

  bt.set(); //sets every bit as 1 irrespective of the bit allocated
  bt.set(2); //sets bit as 1 at specified index
  bt.set(2,0); //sets 0 at specified index

  bt.reset(); //sets every bit as 0 irrespective of the bit allocated
  bt.reset(2); //sets bit as 0 at specified index

  cout<<bt.size(); //prints the size of the bitset

  cout<<bt.test(1); //checks if the bit is set or not at specified index --> returns boolean value
//--------bitset---------

//-----algorithms------
  //-----sorting------

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i!=n;i++){
    cin>>arr[i];
  }
  //takes nlogn time
  sort(arr,arr+n); //sorts the array in increasing order

  vector<int>vec(5,0);
  for(int i=0;i!=n;i++){
    cin>>vec[i];
  }
  sort(vec.begin(),vec.end()); //sorts the vector increasing order

  //---------------------------
  //vec-->{1,6,2,7,4}
  //sort it within the index range of 1 to 3
  //final vec -->{1,2,6,7,4}
  sort(vec.begin()+1,vec.begin()+4);
  //----------------------------

  //Reverse
  reverse(arr,arr+n);
  reverse(vec.begin(),vec.end());

  // maximum/minumum elements in any index range

    //basic working
    int i,j;
    int max=INT_MIN;
    for(int k=i;k<=j;k++){
      if(arr[k]>max){
        max=arr[k];
      }
    }
    //basic working

    int el_max=*max_element(arr,arr+n); //gives the max element
    int el_min=*min_element(arr,arr+n); //gives the minimum element

    int eli_max=*max_element(vec.begin(),vec.end());
    int eli_min=*min_element(vec.begin(),vec.end());
  
  //print the sum within the given range
    //basic implementation
      int sum=0;
      for(int k=i;k<=j;k++){
        sum+=arr[k];
      }
    //basic implementation

    //accumulate(start,end,<inital value of sum)
    int summ=accumulate(arr,arr+n,0);
    int su=accumulate(vec.begin(),vec.end(),0);

  //occurence of an element in the array
    //basic implementation
      int cont=0;
      int x; //element 
      for(int i=0;i!=n;i++){  //time complexity--> O(n)
        if(arr[i]==x){
          cont++;
        }
      }
      cout<<cont;
    //basic implementation

    //count(start,end,x) x--> element
    int cnt=count(arr,arr+n,1);
    int cn=count(vec.begin(),vec.end(),1);

  //first occurence of an element
    //basic implementation
      int in=-1;
      for(int i=0;i<n;i++){
        if(arr[i]==x){
          in=i;
          break;
        }
      }
      cout<<in;
    //basic implementation

    auto it=find(arr,arr+n,2); //returns an itterator pointing to the first instance of the element
    int ind= it-arr;

    //"it" always returns the memory address of the element, to get the index of the element subtract begin() from it


    auto itt=find(vec.begin(),vec.end(),2);
    int indx=itt-vec.begin();

  //binary search
    //this stl only works on sorted arrays
    // returns true or false
    // works in logn complexity
    bool res= binary_search(arr, arr+n, 2);
    bool ress=binary_search(vec.begin(),vec.end(),4);
  
  //lower_bound function
    //returns an iterator pointing to the first element which is not less than x
    //works on sorted array
    //works in logn time complexity
    auto it=lower_bound(arr, arr+n, x);
    ind=it-arr;

    auto it=lower_bound(vec.begin(), vec.end(), x);
    ind=it-vec.begin();

  //upper_bound function
    // returns an iterator pointing to the first element which is just greater than x

    auto it=upper_bound(arr, arr+n, x);
    ind=it-arr;

    auto it=upper_bound(vec.begin(),vec.end(), x);
    ind=it-vec.begin();

  //Q- Find the first index where the element x lies
      //find() can be used but it takes O(n) time 
      //the array is sorted
  //----solution-----
    int n;
    cin>>n;
    for(int i=0;i!=n;i++){
      cin>>arr[i];
    }
    int x;
    cin>>x;
    //1st way
    if(binary_search(arr, arr+n, x)==true){
      cout<<lower_bound(arr, arr+n, x)-arr;
    }
    else cout<<"doesn't exist";

    //2nd way
    int ind=lower_bound(arr, arr+n, x)-arr;
    if(ind!=n && arr[ind]==x){
      cout<<"index: "<<ind<<endl;
    }
    else{
      cout<<"not found";
    }
  //----solution-----

  //Q- Find the last occurence of x in an array
    //array is sorted
  //----solution-----
    int n;
    cin>>n;
    for(int i=0;i!=n;i++){
      cin>>arr[i];
    }
    int x;
    cin>>x;

    int ind=upper_bound(arr,arr+n,x)-arr;
    ind-=1;
    if(ind>=0 && arr[ind]==x){
      cout<<ind;
    }
    else cout<<"doesn't exists";

  //----solution-----
  //Q- Find the number of times x appears in array
    //array is sorted
  //----solution-----
    int n;
    cin>>n;
    for(int i=0;i!=n;i++){
      cin>>arr[i];
    }
    int x;
    cin>>x;

    int count= upper_bound(arr,arr+n,x)-lower_bound(arr,arr+n,x);

  //----solution-----

  // Next permutation 
    string s="abc";
    //all permutations are as follows:
      //abc
      //acb
      //bac
      //cab
      //cba
      //time complexity is O(n)
    bool res=next_permutation(s.begin(),s.end()); //returns true if it gets to the next permutation

    //prints all the permutations
      string sr="bca";
      sort(s.begin(),s.end()); //sorts the string and makes it "abc"
      do{
        cout<<s<<endl;
      }while(next_permutation(s.begin(),s.end()));

  // Previous permutation
    bool res=prev_permutation(s.begin(),s.end());

  //comparators
    bool comp(int el1,int el2){
      if(el1<=el2){
        return true;
      }
      return false;
    }
  // sort this array in such a way that the smaller element in pair is smaller, and if the first elements are equal, sort them according to second element in descending order
  bool comp(pair<int,int>el1,pair<int,int>el2) {
    if(el.first<e2.first){
      return true;
    }
    if(el1.first==el2.first){
      if(el1.second>el2.second){
        return true;
      }
    }
    return false;
  }
  //descending order
  //greater<int> is an inbuilt comparator which works only if you wanna do this in descending order
  sort(arr,arr+n,greater<int>);
  sort(arr,arr+n,comp); 

  return 0;
}