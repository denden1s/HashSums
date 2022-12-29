## Screenshots
<p align="center">
      <img src="https://i.ibb.co/zh658JW/hashsums.png" width="auto">
</p>
<p align="center">
      <img src="https://i.ibb.co/LSbS60p/hashsums1.png" width="auto">
</p>
<p align="center">
     <img src="https://i.ibb.co/rFgzNHw/hashsums2.png" width="auto">
</p>

## Specification

1. Type of program - console;
2. Need two types (view hash and compare hashes);
3. Flexible scaling:
  3.1. Adding new hash algorythms;
  3.2. Adding new program commands.

## About

This app is console utility for compare hashsums. It contain two types for work:
1. compare sum of file and text data, after this return logical true or false;
2. view hash sum of file.

## Documentation

For view file hash you need write next command: "[program_name] [path] [hash_method]".
For comparing hashes you need write next command: "[program_name] [path] [hash_method] [hash_string]".
Program commands call by using next syntax "[program_name] [command]".
If you dont know which hash-methods program contain you need call "help".
When you will make exception in commands program will call help command.

For build project i use g++ compiler with next command "g++ MainLogic.cpp -lcrypto"
