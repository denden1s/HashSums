#pragma once
#include<iostream>
#include<string>
#include"Info.cpp"
using namespace std;

class Version : public Info
{
public:
  void Show()
  { 
    message = "Version: 0.0.1";
    cout << message << endl;
  }
};