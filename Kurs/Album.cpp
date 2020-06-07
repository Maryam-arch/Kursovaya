#include "Album.h"
#include <algorithm>

Album::Album()
{
}

void Album::AddMark(MarkFactory & f, std::istream& in)
{
 Marks *m = new Marks();
 m->mr = f.markRole();
 m->type = f.Type();
 m->vc = f.markCity();
 m->ve = f.markEmitent();
 m->vf = f.markForm();
 m->vm = f.markMaterial();
 in >> *m;
 marks.push_back(m);
}

Album::~Album()
{
 for (int i = 0; i < marks.size(); ++i) {
  delete marks[i];
 }
}
