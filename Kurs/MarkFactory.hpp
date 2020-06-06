#pragma once
#include "MarkCity.hpp"
#include "MarkEmitent.hpp"
#include "MarkForm.hpp"
#include "MarkMaterial.hpp"
#include "MarkRole.hpp"

class MarkFactory
{
public:
 MarkFactory();
 virtual std::string Type() = 0;
 virtual MarkCity* markCity() = 0;
 virtual MarkEmitent* markEmitent() = 0;
 virtual MarkForm* markForm() = 0;
 virtual MarkMaterial* markMaterial() = 0;
 virtual MarkRole* markRole() = 0;
 virtual ~MarkFactory();
};
