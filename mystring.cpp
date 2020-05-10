#include "mystring.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

MyString::MyString():c_str(nullptr) {}

MyString::MyString(const char* s)
{
    if (s) 
    {
      size_t len = strlen(s);
      char *new_str = (char *) malloc(len + 1);
      strcpy(new_str, s);
      c_str = new_str;
    } 
    else { c_str = nullptr;}
}

class MyString MyString::add(const MyString &s) const
{
    return add(s.c_str);
}

class MyString MyString::add(const char* s) const
{
    if (c_str == nullptr && s == nullptr) {
      return MyString();
    }
    if (c_str == nullptr) {
      return MyString(s);
    }
    if (c_str == nullptr) {
      return MyString(c_str);
    }

    size_t len1 = strlen(c_str);
    size_t len2 = strlen(s);
    char *result_str = (char *) malloc(len1 + len2 + 1);

    strcpy(result_str, c_str);
    strcat(result_str, s);

    MyString result;
    result.c_str = result_str;
    return result;
}

int MyString::index(char c) const
{
    
}

int MyString::index(const MyString &s) const
{
    
}

int MyString::index(const char* s) const
{
    
}

char MyString::get_symbol(int index) const
{
    
}

MyString MyString::substring(int start, int end) const
{
    
}

void MyString::print() const
{
    
}

MyString::~MyString()
{
  if (c_str) free(c_str);
}
