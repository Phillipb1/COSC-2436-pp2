#include "CourseInfo.h"

//Declares and defines values to be used
void CourseInfo::InitializeValues() {
	CourseName = { "Programming Fundamentals I","Programming Fundamentals II","Programming Fundamentals III","World History","US History",
	"Government I", "College Algebra","Calculus I","Calculus II","Writing I","Writing II","Creative Writing","General Chemistry I","General Chemistry II",
	"Organic Chemistry","Anatomy & Physiology","University Physics I","University Physics II","Statistical Mechanics","Astrophysics and Cosmology","Dance","Art Appreciation","Spanish I","German I","Physical Education","Kinesiology" };
	CourseID = { "1001","1002","1003","1101","1102","1103","1201","1202","1203","1301","1302","1303","1401","1402","1403","1404","1501","1502","1503","1504","1600","1701","1801","1901","2001","2005" };
	CreditHours = { "4","4","4","3","4","3","3","4","4","3","4","3","4","4","4","4","4","4","4","4","3","3","4","4","3","4" };
	Degrees = { "Computer Science", "History","Mathematics","English","Chemistry","Physics" };
}


//Displays all available classes
void CourseInfo::DisplayFullList() {
		for (i = 0; i < CourseID.size(); ++i) {
			cout << CourseID.at(i) << "||" << CourseName.at(i) << endl;
		}
}
//Displays classes for a specific subject
void CourseInfo::DisplaySubject() {
	//Subject reference
	// 0-2=CompSci, 3-5=History, 6-8=Math, 9-11=English, 12-14=Chemistry, 15-19=Physics 20-25 Electives
	while (userswitchinput != '7') {
		cout << "Enter the number corresponding to the subject to see included classes.\n";
		cout << "1. Computer Science   2. History   3. Mathematics   4. English   5. Chemistry   6. Physics   7. Electives   8.Leave Menu\n";
		cin >> userswitchinput;
		switch (userswitchinput) {
		
		default:
			cout << "Invalid input, please enter a number corresponding to one of the options shown above.";
			break;

		case '1':
			for (i = 0; i < 2; ++i) {
				cout << CourseID.at(i) << "||" << CourseName.at(i) << endl;
			}
			break;
		case '2':
			for (i = 3; i < 5; ++i) {
				cout << CourseID.at(i) << "||" << CourseName.at(i) << endl;
			}
			break;
		case '3':
			for (i = 6; i < 8; ++i) {
				cout << CourseID.at(i) << "||" << CourseName.at(i) << endl;
			}
			break;
		case '4':
			for (i = 9; i < 11; ++i) {
				cout << CourseID.at(i) << "||" << CourseName.at(i) << endl;
			}
		case '5':
			for (i = 12; i < 14; ++i) {
				cout << CourseID.at(i) << "||" << CourseName.at(i) << endl;
			}
		case '6':
			for (i = 15; i < 19; ++i) {
				cout << CourseID.at(i) << "||" << CourseName.at(i) << endl;
			}
		case '7':
			for (i = 20; i < 25; ++i) {
				cout << CourseID.at(i) << "||" << CourseName.at(i) << endl;
			}
		case '8':
			break;
		}
	}
}
//Displays a specific class's name, times, and credit hours.
void CourseInfo::DisplayCourseInfo() {
	while (coursenuminput != "quit" || coursenuminput != "Quit") {
		cout << "Enter a course number to view it's name, class days, and credit hours.\n";
		cin >> coursenuminput;
		ptr = find(CourseID.begin(), CourseID.end(), coursenuminput);
		if (coursenuminput == "quit" || coursenuminput == "Quit") {
			break;
		}
		if (ptr != CourseID.end()) {
			cout << CourseID.at(ptr - CourseID.begin()) << "||" << CourseName.at(ptr - CourseID.begin()) << endl << "Credit hours: " << CreditHours.at(ptr - CourseID.begin()) << endl;
		}
		if (ptr == CourseID.end()) {
			cout << "Error, course not found, please try again.\n";
		}
	}
}
//Displays Degree PLans for a specific major
void CourseInfo::DisplayDegreePlan() {
	cout << "Enter the number corresponding to the major to see degree plan.\n";
	cout << "1. Computer Science   2. History   3. Mathematics   4. English   5. Chemistry   6. Physics   7.Leave Menu\n";
	cin >> userswitchinput;
	switch (userswitchinput) {

	}
}