#ifndef KEYCOM_H
#define KEYCOM_H

#include "stdio.h"
#include <string>
#include <fcntl.h>
#include <unistd.h>

class KeyCom{

 public:

  int Open(char*);
  int Configure(int);
  void Write(char*);
  std::string Read(char*);
};
#endif
