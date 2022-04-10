#pragma once
#include<iostream>
#include<string>
#include"InformationComands/Help.cpp"
using namespace std;

class Exception
{
private:
  string message;
  Help help;
public:
  Exception(string msg)
  {
    message = msg;
  }
  void Show()
  {
    cout << "Error info: " << message << endl;
    help.Show();
  }
};