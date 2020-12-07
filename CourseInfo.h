#ifndef COURSEINFO_H
#define COURSEINFO_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CourseInfo {
private:
	vector <string> CourseName;
	vector <string> CourseID;
	vector <string> CourseDesc;
	vector <string>::iterator ptr;
	vector <string> CreditHours;
	vector <string> Degrees;
	vector <string> ClassDays;
	vector <string> ClassTimes;
	int i;
	string coursenuminput;
	char userswitchinput;
public:
	void DisplayFullList();
	void DisplayDegreePlan();
	void DisplayCourseInfo();
	void DisplaySubject();
	void MainMenu();
	void InitializeValues();
};
#endif // !COURSEINFO
