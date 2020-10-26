class Test{
  int a;
  int *p;
public:
  Test(int x){
  a=x;
  p=new int[a];
  }
  Test(Test &x){
  a=x.a;
  //p=x.p       //shallow copy
  p=new int[a]; //deep copy.
  }
};
