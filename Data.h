//
//  Data.h
//  Final_project
//
//  Created by YIEN LIN, TRUC HUYNH on 6/19/14.
//  Copyright (c) 2014 YIEN LIN, TRUC HUYNH. All rights reserved.
//

#ifndef __Final_project__Data__
#define __Final_project__Data__

#include "Student.h"

class Data
{
private:
  Student *sdt;
  int      search_count;
  bool     delete_flag;
  
public:
  Data  ();
  Data  (Student *);
  ~Data (){}
  
  // MUTATOR
  void _switch_flag();
  
  // ACCESSOR
  bool     _get_flag        () const;
  int      _get_searchCount () const;
  Student *_get_studentObj  () const;
  
  // OVERLOAD PRE-FIX OPERATOR
  Data &   operator ++      ();
};

#endif /* defined(__Final_project__Data__) */
