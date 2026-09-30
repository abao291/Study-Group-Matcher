#include "Tags.h"


Tags::Tags(std::string name) : name(name) {}
Tags::Tags() : name("DNE") {}
Tags::~Tags() { }

//Get the name of the tag
std::string Tags::getName() {
    return Tags::name;

}


//Set the name of the tag
void Tags::setName(std::string Name) {
    name = Name;
}





















