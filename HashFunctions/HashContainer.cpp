#include<iostream>
#include<string>
#include"../BaseContainer.cpp"
#include"HashFunction.cpp"

class HashContainer : public BaseContainer<HashFunction>
{
  public:
  HashContainer(string typeName, string exMessage) : BaseContainer(typeName, exMessage)
  {
    //инициализация списка функций
  }
};