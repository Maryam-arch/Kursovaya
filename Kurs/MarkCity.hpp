#pragma once
#include <string>

class MarkCity
{
protected:
 std::string value;
public:
 MarkCity();
 std::string&Value();
 virtual ~MarkCity();
};
