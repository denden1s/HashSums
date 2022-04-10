#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<stdio.h>
using namespace std;

class HashFunction
{
protected: 
  string hash;
  string path;
  string ToLower(string data)
  {
    for (size_t i = 0; i < data.size(); i++)
    {
      bool isNum = false;
      for (size_t j = 0; j < 9; j++)
        isNum = data[i] == j;
      if(!isNum)
        data[i] = tolower(data[i]);
    }
    return data;
  }
bool IsEmpty()
{
  ifstream fileToRead(path);
  return !fileToRead;
}
public:
  HashFunction(){}
  HashFunction(string path)
  {
    //инициализация пути файла
    this->path = path;
  }
  virtual string GetHashSum() = 0;
  virtual bool IsEquals(string validHash)
  {
    hash = ToLower(GetHashSum());
    validHash = ToLower(validHash);
    return hash == validHash;    
  }
  void SetPath(string path)
  {
    this->path = path;
  }
};