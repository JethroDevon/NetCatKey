#include "KeyCom.h"


int KeyCom::Open(char *device){

  if(int _fd = open( device, O_RDWR | O_NOCTTY | O_NONBLOCK) > 0){

    fcntl(_fd, F_SETFL);
    printf("Open successfully\n");
    return _fd;
  }else{
    
    printf("failed to open device\n");
  }
  
  return -1;
}

int KeyCom::Configure(int _fd){

  struct termios options;
  tcgetattr(_fd, &options);

  //set baud for read and write
  cfsetispeed(&options, B115200);    
  cfsetospeed(&options, B115200);

  options.c_cflag &= ~PARENB;  
  options.c_cflag &= ~CSTOPB;
  options.c_cflag &= ~CSIZE;
  options.c_cflag |= CS8;
  
  // Set the new attributes
  tcsetattr(_fd, TCSANOW, &options);

  //return the file descriptor
  return _fd;
}


std::string KeyCom::Read( int size, int _fd){

  unsigned char buffer[size];
  size_t _bytes;
  size_t offset;
  std::string temp = "this";

  _bytes = read( _fd, buffer, sizeof(buffer));

  for(int x = 0; x < size; x++)
    printf("%u", (unsigned int)buffer[x]);
  
  return temp;
}


void KeyCom::Write(char*, int){

}
