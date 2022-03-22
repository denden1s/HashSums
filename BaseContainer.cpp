#include<iostream>
#include<string>
#include"Exception.cpp"
using namespace std;

template <typename T> 
class BaseContainer
{

private:
  string name;
  string exceptionMessage;
  T currentObject = NULL; 
  void Find()
  {
    //если не нашел thow ex

    //поиск
    if(currentObject == NULL)
      throw Exception(exceptionMessage);
  }
protected:
  //список или вектор элементов (задаётся заранее)
public:
  BaseContainer(string typeName, string exMessage)
  {
    name = typeName;
    exceptionMessage = exMessage;
  }
  T GetObject()
  { 
    Find();
    return currentObject;
  }
};