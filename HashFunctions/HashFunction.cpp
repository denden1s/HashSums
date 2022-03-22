#include<iostream>
#include<string>
using namespace std;

//абстрактный класс
class HashFunction
{
protected: 
  string hash;//нужно ли???
  //сам файл (возможно указатель)
public:
  HashFunction(string path)
  {
    //инициализация файла
  }
  virtual string GetHashSum() = 0;
  virtual bool IsEquals(string validHash) = 0; 
};