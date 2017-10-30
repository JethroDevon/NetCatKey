#include "KeyCom.h"

void KeyCom::WriteKey(char* device){

}

std::string KeyCom::ReadKey(char* device){

  char* ch;
  int buffer_len = 0;
  std::string out;
  std::ifstream usb;
  usb.open(device);

  while(usb.get(ch) && buffer_len < 1024){

    std::cout << ch;
    buffer_len++;
  }
  
  return out;
}
