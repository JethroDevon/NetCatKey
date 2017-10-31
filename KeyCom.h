#ifndef KEYCOM_H
#define KEYCOM_H


#include "stdio.h"
#include <string>
#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>


class KeyCom{

 public:

  //opens device in serial port passed into arguments
  int Open(char*);

  //takes a file descriptor and applies relevant settings to it - then returns
  int Configure(int);

  //writes command to string in file descriptor
  void Write(char*, int);

  //returns data of size arg1 from file descriptors buffer in arg 2
  std::string Read( int, int);
};

#endif
