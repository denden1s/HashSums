#pragma once
#include<iostream>
#include<string>
#include"HashFunction.cpp"
#include "MD5Logic/md5.h"
#include<fstream>
#include<cstring>

using namespace std;

class Md5 : public HashFunction
{

public:
  string GetHashSum()
  {
   const char * buf = path.c_str();
   string data;
   ifstream file;
    file.open(path, ios_base::in);
    //проверить был ли найден файл
    if(!IsEmpty())
    {
      string buf;
      data = "";
      //считывание полного содержимого файла
      for(file >> buf; !file.eof(); file >> buf)
        data += buf;

      hash = md5(data);
    }
    else throw Exception("Cant open file");
   return hash;
  }
  bool IsEquals(string validHash)
  {
    return false;
  }
};