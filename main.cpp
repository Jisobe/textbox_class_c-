#include <iostream>
#include "Textbox.h"
using namespace std;

int main(){

  TextBox textbox1;
  TextBox textbox2("Some text");

  cout << "Textbox1: " << textbox1.getValue() << endl;
  cout << "Textbox2: " << textbox2.getValue() << endl;

  textbox1.setValue("A known string");
  textbox2.setValue("Another string");

  cout << "Textbox1: " << textbox1.getValue() << endl;
  cout << "Textbox2: " << textbox2.getValue() << endl;

  return 0;
}