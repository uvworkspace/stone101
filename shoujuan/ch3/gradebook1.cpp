#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;

class GradeBook
{
  public:
    void setCourseName(string name)
    {
      courseName=name;
    }
    string getCourseName()
    {
      return courseName;
    }
    void displayMessage()
    {
      cout<<"welcome to the Grade Book for \n" << getCourseName() <<"!"<<endl;
    }
private:
  string courseName;
};
int main()
{
string nameOfCourse;
GradeBook myGradeBook;

cout<<"Initial course name is: "<<myGradeBook.getCourseName()<<endl;
getline(cin,nameOfCourse);
myGradeBook.setCourseName(nameOfCourse);
cout << endl;
myGradeBook.displayMessage();
  return 0;
}