#include <iostream>
#include <vector>

class obj
{
  public:
    obj();
    ~obj();
    void push_back_function(void (*new_fptr)());
    void run_function();
  private:
    void (*fptr)();
    std::vector<void (*)()> fs;
};
