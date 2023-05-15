/*ADD TWO NUMBERS USING DEFAULT CONSTRUCTOR IN C++  */
#include<iostream>
  using namespace std;
  class Add 
  {
  int a,b,c;
  public:
  Add()
  {
  cout<<"ENTER ANY TWO NUMBERS"<<endl;
  cin>>a>>b;
  }
  void sum()
  {
  c=a+b;
  }
  void display()
  {
  cout<<"SUM="<<c;
  }
  };
  int main()
  {
  Add obj;
  obj.sum();
  obj.display();
  return 0;
  }
  
