#include "KeyCom.cpp"

KeyCom ok;

int main(int argc, char **argv){

  std::cout << ok.ReadKey(argv[1]);
}
