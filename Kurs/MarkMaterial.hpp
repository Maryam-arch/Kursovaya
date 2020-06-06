#pragma once
#include <string>

class MarkMaterial
{
protected:
 std::string value;
public:
 MarkMaterial();
 std::string&Value();
 virtual ~MarkMaterial();
};
