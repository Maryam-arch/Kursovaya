#pragma once
#include <string>

class MarkForm
{
protected:
 std::string value;
public:
 MarkForm();
 std::string&Value();
 ~MarkForm();
};
