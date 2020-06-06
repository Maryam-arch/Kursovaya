#pragma once
#include "MarkFactory.hpp"
#include <istream>
#include <ostream>

class Marks
{
public:
 Marks();
 ~Marks();
 std::string Type();
 void write(std::ostream& out) {
  out << type << '\n'
   << vc->Value() << '\n'//город
   << ve->Value() << '\n'//эмитент
   << vm->Value() << '\n'//материал
   << mr->Value() << '\n'//назначение
   << vf->Value() << '\n';//форма
 }
 friend std::istream& operator>>(std::istream& in, Marks& m) {
  in >> m.vc->Value()//город
   >> m.ve->Value()//эмитент
   >> m.vm->Value()//материал
   >> m.mr->Value()//назначение
   >> m.vf->Value();//форма
  return in;
 }

public:
 std::string type;
 MarkCity* vc;
 MarkEmitent* ve;
 MarkForm* vf;
 MarkMaterial* vm;
 MarkRole* mr;
};
