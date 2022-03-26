#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//абстрактный класс
class HashFunction
{
private:
  
protected: 
  string hash;//нужно ли???
  string path;
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