#include<iostream>
#include<string>
using namespace std;

class Exception
{
private:
  string message;
  //объект help
public:
  Exception(string msg)
  {
    message = msg;
  }
  void Show()
  {
    //можно вызвать справочную информацию + сообщение об ошибке
  }
};