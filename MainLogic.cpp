#include<iostream>
#include<string>
#include"Exception.cpp"
#include"InformationComands/InfoContainer.cpp"
#include"HashFunctions/HashContainer.cpp"
using namespace std;

InfoContainer comands;
HashContainer hashes;//!имя нужно более информативнее 
string path;
string hashMethod;
string currentHashSum;


void ArgsCountValidation(int args)
{
  if(args > 4 || args < 2)
    throw Exception("Передано недостаточное количество аргументов");
}

void GetHash(string path, string method)
{
  HashFunction *currentMethod = hashes.GetObject();
  currentMethod->SetPath(path);
  cout << "Hash: "<< currentMethod->GetHashSum() << endl;;
}
void ViewInfo(string comandName)
{
  Info *currentComand = comands.GetObject();
  currentComand->Show();//заменить на конкретную (имя)
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
    //? есть ли смысл валидации если я обрабатываю exception-ы
    //пусть сначала будет путь, потом метод, а потом уже хеш сумма
    // 1 - path
    // 2 - method
    // 3 - hash
    ArgsCountValidation(args);
    switch (args)
    {
    case 4:
      path = params[1];
      hashMethod = params[2];
      currentHashSum = params[3];
      CompareHashes(currentHashSum, path, hashMethod);
      break;
    case 3:
      path = params[1];
      hashMethod = params[2];
      GetHash(path, hashMethod);
      break;
    case 2: 
      ViewInfo(params[1]);
      break;
    default:
      throw Exception("Неизвестная ошибка");
      break;
    }

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