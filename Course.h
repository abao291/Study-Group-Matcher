#ifndef COURSE_H
#define COURSE_H




#include "Tags.h"



class Course : public Tags {



    private:
    

std::string courseCode;
int course_support_value;
int course_confidence_value;
std::string course_status;
    
    
    public:

    Course(std::string name, std::string courseCode, int course_support_value, int course_confidence_value, std::string course_status);

  
    ~Course();

    std::string getCourseCode();
    void setCourseCode(std::string courseCode);
    void setCourseSupportValue(int course_support_value);
    void setCourseConfidenceValue(int course_confidence_value);
    void setCourseStatus(std::string course_status);




    std::string getCourseName() {
        return Tags::getName();
    }
    int getCourseSupportValue() {
        return course_support_value;
    }
    int getCourseConfidenceValue() {
        return course_confidence_value;
    }
    std::string getCourseStatus() {
        return course_status;
    }





};















#endif // COURSE_H