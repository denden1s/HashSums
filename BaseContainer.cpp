#include<iostream>
#include<string>
#include <typeinfo>
#include<vector>
#include"Exception.cpp"
using namespace std;

template <typename T> 
class BaseContainer
{

private:
  void Find()
  {
    //если не нашел thow ex

    //поиск
    if(currentObject == NULL)
      throw Exception(exceptionMessage);
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
  virtual T* GetObject()
  { 
    Find();
    return currentObject;
  }
};