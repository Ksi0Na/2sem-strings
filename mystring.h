#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
public:
    MyString();
    MyString( const char *s);
    
    class MyString add(const MyString &s) const;
    class MyString add(const char*        s) const;
    
    int index(         char         c) const;
    int index(const MyString &s) const;
    int index(const char*        s) const;
    
    char get_symbol(int index) const;
    
    MyString substring(int start, int end) const;
    
    void print() const;
    
    ~ MyString();
private:
    char* c_str;
};

#endif // MYSTRING_H
