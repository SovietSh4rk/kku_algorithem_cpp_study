#include <iostream>

namespace TestImp1{
  void SimpleFunc(void)
    {
      std::cout<<"TestImp1"<<std::endl;
    }
  }
  
  
namespace TestImp2{
  void SimpleFunc(void)
    {

      std::cout<<"TestImp1"<<std::endl;
    }
  }
  
 
 int main(void)
 {
  TestImp1::SimpleFunc();
  TestImp2::SimpleFunc();
  return 0;
 }
