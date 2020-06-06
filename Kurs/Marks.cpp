#include "Marks.hpp"

Marks::Marks()
{
}

Marks::~Marks()
{
 delete vc;
 delete ve;
 delete vf;
 delete mr;
 delete vm;
}

std::string Marks::Type() { return type; }
