#include "VirtualFactory.hpp"
#include "VirtualEmitent.h"
#include "VurtualCity.hpp"
#include "VirtualForm.h"
#include "VirtualRole.h"
#include "VitrualMaterial.h"


VirtualFactory::VirtualFactory()
{
}


VirtualFactory::~VirtualFactory()
{
}


// Унаследовано через MarkFactory

std::string VirtualFactory::Type() { return "v"; }

MarkCity * VirtualFactory::markCity()
{
 return new VurtualCity();
}

MarkEmitent * VirtualFactory::markEmitent()
{
 return new VirtualEmitent();
}

MarkForm * VirtualFactory::markForm()
{
 return new VirtualForm();
}

MarkMaterial * VirtualFactory::markMaterial()
{
 return new VitrualMaterial();
}

MarkRole * VirtualFactory::markRole()
{
 return new VirtualRole();
}
