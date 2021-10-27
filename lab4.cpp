#include <iostream>
#include <string.h>

using namespace std;

class komaha
{
private:
  string Name;
  int Speed;
  int Masa;
protected:
  int one;
  int two;
public:
  int one1;
  int two2;
  komaha (string Name, int Speed, int Masa)
  {
    this->Name = Name;
    this->Speed = Speed;
    this->Masa = Masa;
  }
  

  void vuvid()
  {
    cout << "Name: " << Name << "\nSpeed: " << Speed << "m per second " << "\nMasa: "<< Masa <<" g\n";
  }
};

int main()
{
 komaha kom1("Pasha", 1, 200);
 kom1.vuvid();
 komaha kom2("Masha", 2, 400);
 kom2.vuvid();
 komaha kom3("Sasha", 3, 600);
 kom3.vuvid();
}