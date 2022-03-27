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
    message = "Hello, this program can help you with hashsums, you can:\n1. view info about program, syntax: checksum [comand]\nList of commands:\n 1.1 help;\n 1.2 version.\n2. get hashsum of file, syntax: checksum [path] [hash method]\nSupported hash methods:\n 2.1 md5.\n3. ...";
    cout << message << endl;
  }
  ~Help()
  {
    //??delete[] message;
  }
};