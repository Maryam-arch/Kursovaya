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

  }
  else if (a == 4) {

  }
  else if (a == 5) {

  }
  else {
   return 0;
  }
 }
}
