#include<iostream>
#include<string>
#include"../BaseContainer.cpp"
#include"Info.cpp"

class InfoContainer : public BaseContainer<Info>
{
  public:
  InfoContainer() : BaseContainer()
  {
    //инициализация списка функций
  }
};