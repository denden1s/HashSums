#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<sstream> 
#include<iomanip> 
#include<openssl/md5.h> 
#include"../Exception.cpp"
#include"HashFunction.cpp"
using namespace std;
#define BUFFSIZE 16384 

class Md5 : public HashFunction
{
public:
  string GetHashSum()
  {
    const char* _path = path.c_str();
   string data;
   ifstream file;
    file.open(path, ios_base::binary);
    if(!IsEmpty())
    {
      //логика алгоритма md5
      char buffer[BUFFSIZE]; 
      unsigned char digest[MD5_DIGEST_LENGTH];    
      stringstream ss; 
      MD5_CTX md5Context; 
      MD5_Init(&md5Context); 
      while (file.good())  
      { 
        file.read(buffer, BUFFSIZE); 
        MD5_Update(&md5Context, buffer, file.gcount());  
      } 
      file.close(); 
      int res = MD5_Final(digest, &md5Context); 
      // приведение к формату string stream
      ss << std::hex << std::uppercase << std::setfill('0'); 
      for(unsigned char uc: digest) 
        ss << std::setw(2) << (int)uc; 
      hash = ss.str(); 
      hash = ToLower(hash);
    }
    else throw Exception("Cant open file");
   return hash;
  }
};
