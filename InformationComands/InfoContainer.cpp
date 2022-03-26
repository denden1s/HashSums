#pragma once
#include<iostream>
#include<string>
#include"../BaseContainer.cpp"
#include"Help.cpp"
#include"Info.cpp"
#include"Version.cpp"

class InfoContainer : public BaseContainer<Info>
{
  public:
  InfoContainer() : BaseContainer()
  {
    //инициализация списка функций
    list.push_back(new Help());
    list.push_back(new Version());
  }
};