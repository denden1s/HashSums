#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<sstream> 
#include<iomanip> 
#include<cstring>
#include "openssl/sha.h"
#include"../Exception.cpp"
#include"HashFunction.cpp"

using namespace std;
#define BUFFSIZE 16384 

class Sha256 : public HashFunction
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
      char buffer[BUFFSIZE]; 
      unsigned char digest[SHA256_DIGEST_LENGTH];    
      stringstream ss; 
      SHA256_CTX sha256Context; 
      SHA256_Init(&sha256Context); 
      while (file.good())  
      { 
        file.read(buffer, BUFFSIZE); 
        SHA256_Update(&sha256Context, buffer, file.gcount());  
      } 
      file.close(); 
      int res = SHA256_Final(digest, &sha256Context); 
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
