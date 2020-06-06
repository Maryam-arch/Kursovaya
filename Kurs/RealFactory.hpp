#pragma once
#include "MarkFactory.hpp"

class RealFactory :
 public MarkFactory
{
public:
 RealFactory();
 ~RealFactory();

 // Унаследовано через MarkFactory
 virtual std::string Type() override;;
 virtual MarkCity * markCity() override;
 virtual MarkEmitent * markEmitent() override;
 virtual MarkForm * markForm() override;
 virtual MarkMaterial * markMaterial() override;
 virtual MarkRole * markRole() override;
};
