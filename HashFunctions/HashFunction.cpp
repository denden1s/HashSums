#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//абстрактный класс
class HashFunction
{
protected: 
  string hash;//нужно ли???
  string path;
  void ToLower()
  {
    for (size_t i = 0; i < hash.size(); i++)
    {
      bool isNum = false;
      for (size_t j = 0; j < 9; j++)
        isNum = hash[i] == j;
      if(!isNum)
        hash[i] = tolower(hash[i]);
    }
  }
bool IsEmpty()
{
  ifstream fileToRead(path);
  return !fileToRead;
}
  //сам файл (возможно указатель)
public:
  HashFunction(){}
  HashFunction(string path)
  {
    //инициализация файла
    this->path = path;
  }
  virtual ~HashFunction()
  {

  }
  virtual string GetHashSum() = 0;
  virtual bool IsEquals(string validHash) = 0; 
  void SetPath(string path)
  {
    this->path = path;
  }
};