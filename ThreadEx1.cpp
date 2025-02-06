#include<iostream>
#include<thread>

using namespace std;

class A
{
   public:
          void print()
          {
             std::cout<<"print()"<<endl;
          }

          void display(int age, std::string name)
          {
             std::cout<<"Name: "<<name<<" Age: "<<age<<std::endl;
          }

          void concat(std::string &first, std::string& second)
          {
             std::cout<<first+second<<std::endl;
          }
};

void print_numbers(int x)
{
   for(int i=0; i<x; i++)
   {
      std::cout<<i<<std::endl;
   }
}

void func(int age, const string& name)
{
   std::cout<<"Age: "<<age<<" Name: "<<name<<std::endl;
}

void func1(string name)
{
   name = "kumar";
}

void func2(std::string& name)
{
   name = "kumar";
}

/*void func3(const std::string& name)
{
   const std::string k = "kumar";
   //name = "kumar";
   name= k;
}*/

int main()
{
  A a1;
  std::thread t1(print_numbers, 10);
  t1.join();
  //std::string s1= "sandeep";
  //std::string s2= "khamari";
  //std::thread t2(&A::concat, a1, s1, s2);

  //std::thread t3(func, 32, "sandeep");
  //t3.join();

  //std::string name = "khamari";
  //std::thread t4(func, 34, &name);
  //t4.join();

  std::string name = "khamari";
  func1(name);
  std::cout<<name<<std::endl;
  name = "khamari";
  
  func2(name);
  std::cout<<name<<std::endl;

  //func3(name);
  //std::cout<<name<<std::endl;

  //const std::string sub = "english";
  //func2(sub);
  return 0;
}