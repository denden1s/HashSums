#pragma once
#include<iostream>
#include<string>
#include"../BaseContainer.cpp"
#include"HashFunction.cpp"
#include"MD5.cpp"

class HashContainer : public BaseContainer<HashFunction>
{
  public:
  HashContainer() : BaseContainer()
  {
    //инициализация списка функций
    list.push_back(new Md5());
  }
  void SetPath(string path)
  {
    currentObject->SetPath(path);
  }
};