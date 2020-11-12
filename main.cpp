//
//  main.cpp
//  Final_project
//
//  Created by YIEN LIN on 6/19/14.
//  Copyright (c) 2014 YIEN LIN. All rights reserved.
//

#include <iomanip>
#include <cstdlib>
#include <iomanip>
#include "Controller_Mngr.h"

int main(int argc, const char * argv[])
{
  
  Controller_Mngr control;
  
  control._task_Mngr();
  
  cin.sync();
  cin.get();
  
  return 0;
}
