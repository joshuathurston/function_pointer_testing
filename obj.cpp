#include "obj.h"

obj::obj()
{
//  fptr = new_fptr;
//  fs.push_back(new_fptr);
  std::cout << "constructor" << std::endl;
}

obj::~obj()
{
}

void obj::push_back_function(void (*new_fptr)())
{
  fs.push_back(new_fptr);
}

void obj::run_function()
{
  //(*fptr)();
  for(int i = 0; i < fs.size(); i++)
  {
    fs[i]();
  }
}
