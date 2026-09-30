#include "Course.h"


//Default constructor for Course class
Course::Course(std::string name, std::string courseCode, int course_support_value, int course_confidence_value, std::string course_status) : Tags(name), courseCode(courseCode), course_support_value(course_support_value), course_confidence_value(course_confidence_value), course_status(course_status) {}



//Course destructor
Course::~Course() {}


//Get the course code
std::string Course::getCourseCode() {
    return Course::courseCode;
}

//Set the course code
void Course::setCourseCode(std::string courseCode) {
    Course::courseCode = courseCode;
}


//Set the course support value
void Course::setCourseSupportValue(int support_value){
    course_support_value = support_value;
};


//Set the course confidence value
    void Course::setCourseConfidenceValue(int confidence_value){
        course_confidence_value = confidence_value;
    };



    std::string Course::getCourseName() {
        return Tags::getName();
    }
    int Course::getCourseSupportValue() {
        return Course::course_support_value;
    }
    int Course::getCourseConfidenceValue() {
        return Course::course_confidence_value;
    }


    std::string Course::getCourseStatus() {
        return Course::course_status;
    }

    void Course::setCourseStatus(std::string status) {
        Course::course_status = status;
    }



