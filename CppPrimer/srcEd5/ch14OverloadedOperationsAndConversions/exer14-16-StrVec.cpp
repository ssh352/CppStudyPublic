/*
 * =========================================================================
 * Copyright (c) 2017, Raymon White - All Rights Reserved
 * Author:  Raymon White (ray), rayaxiom42 AT gmail DOT com
 * =========================================================================
 */
#include"StrVec16.h"

#include<iostream>
using std::cout; using std::endl;

int main()
{
  StrVec sv;
  sv.printall() << endl;
  sv.push_back("Text1");
  sv.printall() << endl;

  sv.push_back("Text2");
  sv.printall()<<endl;
  sv.push_back("Text3");
  sv.printall()<<endl;
  sv.push_back("Text4");
  sv.printall()<<endl;
  sv.push_back("Text5");
  sv.printall()<<endl;

  sv.reserve(2);
  sv.printall()<<endl;

  sv.reserve(12);
  sv.printall()<<endl;
  
  cout<<endl;
  sv.resize(4);
  sv.printall()<<endl;

  sv.resize(6,"newText");
  sv.printall()<<endl;
  sv.reserve(6);
  sv.resize(8,"newnewText");
  sv.printall()<<endl;
  
  cout<<endl;
  StrVec sv2(sv);
  StrVec sv3;
  sv3 = sv;
  sv2.printall()<<endl;
  sv3.printall()<<endl;

  cout<<endl;
  StrVec sv4{"One", "Two", "Three"};
  sv4.printall()<<endl<<endl;

  cout << "Test equality and equal:"<<endl;
  cout << "sv==sv: " << (sv == sv) << endl;
  cout << "sv!=sv: " << (sv != sv) << endl;
  cout << "sv==sv4: " << (sv == sv4) << endl;
  cout << "sv!=sv4: " << (sv != sv4) << endl;

  return 0;
}
