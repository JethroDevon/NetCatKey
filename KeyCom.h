#ifndef KEYCOM_H
#define KEYCOM_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


class KeyCom{

 public:

  void WriteKey(char*);
  std::string ReadKey(char*);
};
#endif
