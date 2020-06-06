// MarkAbstractFactory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "Album.h"
#include <string>

using namespace std;

int main()
{
 Album *ab = new Album();
 VirtualFactory vf;
 RealFactory rf;
 while (true) {
  cout << "\n1. New album\n2. Read console\n3. Read file\n4. Write console\n5. Write file\n6. Exit\n--";
  int a;
  cin >> a;
  if (a == 1) {
   delete ab;
   ab = new Album();
  }
  else if (a == 2) {
   cout << "1. Real\n2. Virtual\n--";
   cin >> a;
   if (a == 1) {
    ab->AddMark(rf, cin);
   }
   else {
    ab->AddMark(vf, cin);
   }
  }
  else if (a == 3) {
   string file;
   cout << "File: ";
   cin >> file;
   ifstream in(file);
   string type;
   while (in >> type) {
        if (type == "v") {
          ab->AddMark(vf, in);
        }
        else {
              ab->AddMark(rf, in);
        }
   }
  }
  else if (a == 4) {
          cout << *ab;
  }
  else if (a == 5) {
    string file;
       cout << "File: ";
       cin >> file;
       ofstream out(file);
       out << *ab;
  }
  else {
   return 0;
  }
 }
}
