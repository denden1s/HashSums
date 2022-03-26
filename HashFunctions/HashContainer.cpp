#include<iostream>
#include<string>
#include"../BaseContainer.cpp"
#include"HashFunction.cpp"

class HashContainer : public BaseContainer<HashFunction>
{
  public:
  HashContainer() : BaseContainer()
  {
    //инициализация списка функций
  }
  void SetPath(string path)
  {
    currentObject->SetPath(path);
  }
};