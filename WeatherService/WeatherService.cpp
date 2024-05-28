#include "pugixml.hpp"
#include "XmlService.h"
#include <iostream>

int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    std::cout << "Hello World!\n";
}

