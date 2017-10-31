#include "KeyCom.cpp"

KeyCom kc;

int main(int argc, char **argv){

  int fd = kc.Open(argv[1]);
  fd = kc.Configure(fd);
  std::cout << kc.Read( 10, fd);  
  close(fd);
}
