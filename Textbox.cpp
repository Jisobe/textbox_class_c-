#include <iostream>
#include <string>
#include "Textbox.h"
using namespace std;

TextBox::TextBox(const string& val) { setValue(val); }

string TextBox::getValue() const { return value; }

void TextBox::setValue(const string& val) { value = val; }

TextBox::~TextBox() { 
  cout << "Destructor called on " << value << " of class Textbox." << endl; 
}
