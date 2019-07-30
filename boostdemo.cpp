#include <string>
#include <iostream>
#include <boost/foreach.hpp>

#include "boostdemo.h"

using namespace std;

int boost_demo()
{
    std::string hello( "Hello, world! Mike" );

    cout << "Basic Boost example (for testing libraries on Travis)" << endl;
    BOOST_FOREACH( char ch, hello )
    {
        std::cout << ch;
    }

    std::cout << endl;
    return 0;
}
