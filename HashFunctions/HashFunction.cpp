#pragma once
#include<iostream>
#include<string>
using namespace std;

//абстрактный класс
class HashFunction
{
private:
  string path;
protected: 
  string hash;//нужно ли???

  //сам файл (возможно указатель)
public:
  HashFunction(string path)
  {
    //инициализация файла
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