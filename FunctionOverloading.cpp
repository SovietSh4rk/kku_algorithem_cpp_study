#include <iostream>

void StudyFunc(void)
{
  std::cout<<"StudyFunc(void) called"<<std::endl;
}

void StudyFunc(char c)
{
  std:cout<<"StudyFunc(char c) called"<<std::endl;
}

void StudyFunc(int a,int b)
{
  std::cout<<"StudyFunc(int a, int b) called"<<std::endl;
}

int main(void)

{
  StudyFunc();
  StudyFunc('A')
  StudyFunc(12,13);
  return 0;
}
