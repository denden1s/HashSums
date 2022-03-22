#include<iostream>
#include<string>
using namespace std;

class Info 
{
protected:
  string message;
public:
  virtual void Show() = 0;
};