#pragma once
#include <string>

class MarkRole
{
protected:
 std::string value;
public:
 MarkRole();
 std::string&Value();
 virtual ~MarkRole();
};
