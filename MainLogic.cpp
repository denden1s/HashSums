#include<iostream>
#include<string>
#include"Exceptions/Exception.cpp"
using namespace std;

int Main(int args, char** params)
{
  try
  {
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