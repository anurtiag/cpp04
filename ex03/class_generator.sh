#!/bin/bash

echo "Please select a class name"

read class

echo "please select between private and protected"

read permissions

echo "Do you wish an abstarct class? type virtual whith an space or push enter"

read abstract

CLASS=$(echo "$class" | tr '[:lower:]' '[:upper:]')
HEADER="_HPP"
INCLUSION=${CLASS}${HEADER}
#create file
touch $class.cpp $class.hpp

#Header configuration

#definition and header
echo "#ifndef $INCLUSION
# define $INCLUSION

# include <iostream>
# include <iostream>

" > $class.hpp

#class declaration
echo "class $class
{
    $permissions:
        " >> $class.hpp
echo "    public:
        $class();
        $class($class &source);
        $class& operator=($class &source);
        $abstract~$class();
};

#endif" >> $class.hpp

#class declaration

echo "#include \"$class.hpp\"

" > $class.cpp

#default constructor

echo "$class::$class()
{
    std::cout << \"$class default constructor called\" << std::endl;
}

" >> $class.cpp

#copy constructor

echo "$class::$class($class &source)
{
    std::cout << \"$class copy constructor called\" << std::endl;
    *this = source;
}

" >> $class.cpp

#copy assignment

echo "$class& $class::operator=($class &source)
{
    std::cout << \"$class copy assignment called\" << std::endl;
    *this = source;
    return(*this);
}

" >> $class.cpp

#destructor

echo "$class::~$class()
{
    std::cout << \"$class destructor called\" << std::endl;
}
" >> $class.cpp