#include <iostream>
#include <stdlib.h>

#include "boostdemo.h"

using namespace std;

int main(int argc, char* argv[]) {
   cout << "Hello, World" << endl;
   if (argc > 1) {
      cout << "Hello " << argv[1] << " too" << endl;
   }
   /* This calls a function that tests Boost at a basic level */
   boost_demo();

   cout << "This is a Mike Addtions" << endl;
   cout << "This is a Mike Addtions" << endl;

   exit(0);
}

