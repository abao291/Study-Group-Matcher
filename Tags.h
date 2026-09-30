#ifndef TAGS_H
#define TAGS_H

#include <iostream>
#include <string>


// parent class for all tags
class Tags {
private:
    // name of the tag
    std::string name;

public:
    Tags(std::string name);
    Tags();
    ~Tags();
    std::string getName();
    void setName(std::string Name);


};


#endif // TAGS_H


