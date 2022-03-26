#pragma once
#include<iostream>
#include<string>
#include <typeinfo>
#include <algorithm>
#include<vector>
#include"Exception.cpp"
using namespace std;

template <class T> 
class BaseContainer
{
private:
  void ToUpper(string &data)
  {
    std::for_each(data.begin(), data.end(), [](char & c){
      c = ::toupper(c);
    });
  }
//можно сделать protected и переопределить в контейнере с доп функциями, т.к. нужно иметь возможность обращаться через -h или help
//? но это не критично
  void Find(string name)
  {
    string typeName;
    for (size_t i = 0; i < list.size(); i++)
    {
      typeName = typeid(*list[i]).name();
      //приведение к строк к верхнему регистру для сравнения
      ToUpper(typeName);
      ToUpper(name);
      if(typeName.find(name) != std::string::npos)//typeid работает некорректно!!!
      {
        currentObject = list[i];
        break;
      } 
    }
  }
protected:
  //список или вектор элементов (задаётся заранее)
  
  vector<T*> list; //!можно более информативно
  T* currentObject = NULL; 
public:
  BaseContainer()
  {
  }
  virtual ~BaseContainer()
  {

  }
  virtual T* GetObject(string name)
  { 
    Find(name);
    if(currentObject == NULL)
      throw Exception("Cant find object");
    return currentObject;
  }
};