#include<iostream>
#include<string>
#include"Exceptions/Exception.cpp"
using namespace std;

void ArgsCountValidation(int args)
{
  if(args > 4 || args < 2)
    throw Exception("Передано недостаточное количество аргументов");
}

void GetHash(string path, string method)
{
  //...
}
void ViewInfo(string comandName)
{
  //...
}

void CompareHashes(string validHash, string path, string method)
{

}

int Main(int args, char** params)
{
  try
  {
    //нужна валидация, т.к. параметры могут быть переданы вразброс
    //для каждого способа валидация своя (или можно метод с параметром по умолчанию)
    ArgsCountValidation(args);
    switch (args)
    {
    case 4:
      //CompareHashes()
      break;
    case 3:
      //GetHash();
      break;
    case 2: 
      ViewInfo(params[1]);
      break;
    default:
      throw Exception("Неизвестная ошибка");
      break;
    }
    //строка алгоритм хеширования
    //строка расположение файла
    //строка хеш суммы 

    //контейнер информирующих команд
    //контейнер хеш функций
    //указатель на hash function 
    //указатель на info 
    
    // проверить args if args > 4 or < 2 throw ex
    // if args == 4  сравнивать хеши
    // if args == 3 вычислить хеш
    // if args == 2 - доп. команда
    
  }
  catch(Exception ex)
  {
    //
  }
  catch(...)
  {
    cout << "Неожиданная ошибка" << endl;
  }
  
  return 0;
}