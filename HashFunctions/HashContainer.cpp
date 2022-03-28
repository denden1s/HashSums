#pragma once
#include<iostream>
#include<string>
#include"../BaseContainer.cpp"
#include"HashFunction.cpp"
#include"MD5.cpp"
#include"Sha256.cpp"

class HashContainer : public BaseContainer<HashFunction>
{
  public:
  HashContainer() : BaseContainer()
  {
    //инициализация списка функций
    list.push_back(new Md5());
    list.push_back(new Sha256());
  }
  void SetPath(string path)
  {
    currentObject->SetPath(path);
  }
};