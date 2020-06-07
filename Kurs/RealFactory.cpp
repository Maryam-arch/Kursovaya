#include "RealFactory.hpp"
#include "RealCity.hpp"
#include "RealEmitent.hpp"
#include "RealForm.hpp"
#include "RealMaterial.hpp"
#include "RealRole.hpp"

RealFactory::RealFactory()
{
}

RealFactory::~RealFactory()
{
}

// Унаследовано через MarkFactory

std::string RealFactory::Type() { return "r"; }

MarkCity * RealFactory::markCity()
{
 return new RealCity();
}

MarkEmitent * RealFactory::markEmitent()
{
 return new RealEmitent();
}

MarkForm * RealFactory::markForm()
{
 return new RealForm();
}

MarkMaterial * RealFactory::markMaterial()
{
 return new RealMaterial();
}

MarkRole * RealFactory::markRole()
{
 return new RealRole();
}
