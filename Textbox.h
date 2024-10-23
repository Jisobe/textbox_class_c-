#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>
using namespace std;

class TextBox{

  private:
    string value;
  public:
    TextBox() = default;
    explicit TextBox(const string& val);
    ~TextBox();
    string getValue() const;
    void setValue(const string& val);
    
};

#endif