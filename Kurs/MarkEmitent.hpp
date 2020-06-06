#pragma once
#include <string>

class MarkEmitent
{
protected:
 std::string value;
public:
 MarkEmitent();
 std::string&Value();
 virtual ~MarkEmitent();
};
