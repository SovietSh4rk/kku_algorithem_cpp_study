void SwapByvalue(int num1 , int num2)
{
  int temp=num1;
  num1 = num2;
  num2 = temp;
} // call -by - value


void swapbyref(int *ptr1 , int *ptr2)
{
  int temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
  //call -by -reference
}
