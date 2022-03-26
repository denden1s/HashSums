#pragma once
#include<iostream>
#include<string>
#include"Info.cpp"
using namespace std;

class Help : public Info
{
public:
  void Show()
  { 
    message = "Команда help в данный момент находится в разработке";
    cout << message << endl;
  }
  ~Help()
  {
    //??delete[] message;
  }
};