int TestFunc(int num)
{
  num++;
  return num;
}


int TestFunc(int a, int b)
{
  return a+b;
}


int main(void)
{
  TestFunc(20);
  TestFunc(30,40);
  return 0;  
}
