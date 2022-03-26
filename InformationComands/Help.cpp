#include<iostream>
#include<string>
#include"Info.cpp"
using namespace std;

class Help : public Info
{
public:
  void Show()
  { 
    message = "help";
    cout << message << endl;
  }
  ~Help()
  {
    //??delete[] message;
  }
};