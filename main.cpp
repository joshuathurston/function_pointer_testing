#include <iostream>
#include "obj.h"

void stuff()
{
  std::cout << "omg stuff" << std::endl;
}

void anotherstuff()
{
  std::cout << "more stuff" << std::endl;
}

int main(int argc, char* argv[])
{
  //object test
  //obj newobj();
  
//  void (*fptr)() = &stuff;
  obj newobj;
  newobj.push_back_function(&stuff);
  newobj.push_back_function(&anotherstuff);
  newobj.run_function();
  //(*stuff)();
  return 0;
}
