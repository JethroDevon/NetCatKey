#include "KeyCom.h"

int KeyCom::Open(char *device){

  char reply[10];

  int iOut, _fd;

  _fd = open( device, O_RDWR | O_NOCTTY | O_NONBLOCK);

  if(_fd > 0){
    
      printf("Open successfully\n");
      iOut = write(_fd, "<ping>", 6);
      read( _fd, reply, 10);
      printf("%s\n", reply);

      return _fd;
    }else{
    
      printf("failed to open device\n");
    }
  
  return -1;
}

void KeyCom::Write(char* device){

}

std::string KeyCom::Read(char* device){
}
