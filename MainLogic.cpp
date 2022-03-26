#pragma
#include<iostream>
#include<string>
#include<typeinfo>
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
  HashFunction *currentMethod = hashes.GetObject(method);
  currentMethod->SetPath(path);
  string result = currentMethod->GetHashSum();
  cout << "Hash: "<<  result << endl;
}

void ViewInfo(string comandName)
{
  Info *currentComand = comands.GetObject(comandName);
  currentComand->Show();//заменить на конкретную (имя)
}

void CompareHashes(string validHash, string path, string method)
{
  //...
}

int main(int args, char** params)
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
      throw Exception("Uncought error");
      break;
    }    
  }
  catch(Exception ex)
  {
    ex.Show();
  }
  catch(...)
  {
    cout << "Uncought error" << endl;
  } 
  return 0;
}