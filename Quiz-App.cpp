// Declaring Header Files
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string>
using namespace std;
// Prototyping
bool rollno();
bool check(char, char, char);
void data(string, string, int, int);
void instructions();
int quiz();
int checker(char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char);
bool printresult(int);
bool teachercheck();
void end(int);
void pgreetings();
void fgreetings();
void header1();
void header2();
void header3();
void header4();
void header5();
// Variables P is portion and q is question, t is total and g is gained score
char p1q1, p1q2, p1q3, p1q4, p1q5, p1q6,
	p2q1, p2q2, p2q3, p2q4, p2q5, p2q6,
	p3q1, p3q2, p3q3, p3q4, p3q5, p3q6,
	p4q1, p4q2, p4q3, p4q4, p4q5, p4q6;
int tscore = 24, gscore;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
// Main Function
int main()
{
	system("cls");
	bool flag1, flag2;
	for (int i = 1; i <= 511; i)
	{
		bool check = rollno();
		if (check == 1)
		{
			instructions();
			system("cls");
			gscore = quiz();
		result:
			system("cls");
			flag1 = printresult(gscore);
			system("cls");
			if (flag1 == 0)
			{
				i = 525;
				break;
			}
			else
			{
			teacher:
				flag2 = teachercheck();
				if (flag2 == 1)
				{
					system("cls");
					continue;
				}
				else
				{
					system("cls");
					SetConsoleTextAttribute(hConsole, 4);
					cout << "Invalid Key" << endl;
					SetConsoleTextAttribute(hConsole, 3);
					cout << "Press R key to try again and Q for quit => ";
					char dummy = getche();
					system("cls");
					if (dummy == 'R' || dummy == 'r')
					{
						goto teacher;
					}
					else if (dummy == 'Q' || dummy == 'q')
					{
						i = 525;
						break;
					}
					else
					{
						system("cls");
						SetConsoleTextAttribute(hConsole, 4);
						cout << "Error! Restart Program" << endl;
						SetConsoleTextAttribute(hConsole, 3);
						system("pause");
						goto teacher;
					}
				}
			}
		}
		else if (check == 0)
		{
			SetConsoleTextAttribute(hConsole, 12);
			cout << "Enter correct roll number." << endl;
			SetConsoleTextAttribute(hConsole, 3);
			cout << "Press enter key for another chance.";
			SetConsoleTextAttribute(hConsole, 15);
			char dummy = getche();
			system("cls");
			continue;
		}
	}
	system("cls");
	end(gscore);
	header5();
	cout << endl;
	system("pause");
	SetConsoleTextAttribute(hConsole, 15);
	system("cls");
	return 0;
}
// Function to get Roll number (Connected with check function with)
bool rollno()
{
	char a, b, c;
	header1();
	cout << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Enter Your Three Digit Roll Number: ";
	SetConsoleTextAttribute(hConsole, 11);
	a = getche();
	b = getche();
	c = getche();
	cout << endl;
	system("cls");
	return check(a, b, c);
}
// Function to check Roll number (Connected with data and rollno function)
bool check(char a, char b, char c)
{
	if (a == '5' && b == '1' && c == '1')
	{
		data("Mahreen Farooq", "Muhammad Farooq", 18, 511);
		return true;
	}
	else if (a == '5' && b == '1' && c == '3')
	{
		data("Mirza Sufiyan Ahmad", "Mirza Maqbool Ahmad", 20, 513);
		return true;
	}
	else if (a == '5' && b == '2' && c == '5')
	{
		data("Muhammad Abdullah", "Zahid Mehmood", 18, 525);
		return true;
	}
	else if (a == '5' && b == '2' && c == '7')
	{
		data("Maha Butt", "Muhammad Amjad", 18, 527);
		return true;
	}
	else if (a == '5' && b == '1' && c == '4')
	{
		data("Abdul Rehman", "Zahid Nadeem", 19, 514);
		return true;
	}
	else if (a == '5' && b == '2' && c == '0')
	{
		data("Syed Huzaifa Ali", "Imran Ali", 20, 520);
		return true;
	}
	else if (a == '5' && b == '4' && c == '5')
	{
		data("Hussnain Ali", "Mehmood-ul-Hassan", 20, 545);
		return true;
	}
	else if (a == '5' && b == '4' && c == '7')
	{
		data("Asim Shehzad", "Zafar Iqbal", 19, 547);
		return true;
	}
	else if (a == '5' && b == '4' && c == '9')
	{
		data("Abdul Ahad", "Ghulam Hussain", 19, 549);
		return true;
	}
	else if (a == '5' && b == '5' && c == '8')
	{
		data("Chudhary Muhammad Ahmad", "Chuhdary Muhmmad Jamil", 19, 558);
		return true;
	}
	else if (a == '5' && b == '6' && c == '4')
	{
		data("Noman Mehmood", "Mehmood Ahmad", 22, 564);
		return true;
	}
	else
	{
		return false;
	}
}
// Function to print candidate data (Connected with rollno function)
void data(string name, string fname, int age, int ID)
{
	header2();
	cout << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Candidate Name: ";
	SetConsoleTextAttribute(hConsole, 10);
	cout << name << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Candidate Father Name: ";
	SetConsoleTextAttribute(hConsole, 10);
	cout << fname << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Candidate Roll Number: ";
	SetConsoleTextAttribute(hConsole, 10);
	cout << ID << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Candidate Age: ";
	SetConsoleTextAttribute(hConsole, 10);
	cout << age << endl;
	SetConsoleTextAttribute(hConsole, 11);
	cout << endl;
	cout << "Press enter to confirm data and proceed next ";
	char dummy = getche();
}
// Function for instructions
void instructions()
{
	system("cls");
	header3();
	cout << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "1) The quiz consists of 4 portions and each portion contains 6 questions." << endl;
	cout << "2) The correct option cause the increment of 1 in gained scored and there will be no negative marking." << endl;
	cout << "3) For moving to previous question click P and for moving to next question click N and for skip click S." << endl;
	cout << "4) You have only 12 minutes to solve the quiz." << endl;
	cout << "5) You have to achieve at least 50% marks to crack this quiz." << endl;
	cout << "6) In order to give another attempt you have to contact your teacher for his/her verification and permission." << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 1);
	cout << "Press enter key to proceed next: ";
	char dummy = getche();
}
// Function for Quiz (Connected with checker function)
int quiz()
{
p1q1:
	SetConsoleTextAttribute(hConsole, 10);
	cout << " --: C++ Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q1: Object-oriented programming employs _____ programming?" << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "a)  Top-down" << endl
		 << "b)  Bottom-up" << endl
		 << "c)  Procedural" << endl
		 << "d)  All of above" << endl;
	cout << endl;
	;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Enter the selected option here => ";
	p1q1 = getche();
	system("cls");
	switch (p1q1)
	{
	case 'n':
	case 'N':
		goto p1q2;
		break;
	case 'P':
	case 'p':
		goto p1q1;
		break;
	}
p1q2:
	SetConsoleTextAttribute(hConsole, 10);
	cout << " --: C++ Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q2: Which of the following is address of operator?" << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "a)  *" << endl
		 << "b)  &&" << endl
		 << "c)  []" << endl
		 << "d)  &" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Enter the selected option here => ";
	p1q2 = getche();
	system("cls");
	switch (p1q2)
	{
	case 'n':
	case 'N':
		goto p1q3;
		break;
	case 'P':
	case 'p':
		goto p1q1;
		break;
	}
p1q3:
	SetConsoleTextAttribute(hConsole, 10);
	cout << " --: C++ Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q3: What following operator is called (?:)?" << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "a)  Scope resolution" << endl
		 << "b)  Conditional" << endl
		 << "c)  Ternary" << endl
		 << "d)  If-else o/p" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Enter the selected option here => ";
	p1q3 = getche();
	system("cls");
	switch (p1q3)
	{
	case 'n':
	case 'N':
		goto p1q4;
		break;
	case 'P':
	case 'p':
		goto p1q2;
		break;
	}
p1q4:
	SetConsoleTextAttribute(hConsole, 10);
	cout << " --: C++ Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q4: Int a[] = {5,6,7,8,9}, what is the value of a[3]?" << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "a)  7" << endl
		 << "b)  6" << endl
		 << "c)  8" << endl
		 << "d)  9" << endl;
	cout << endl;
	;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Enter the selected option here => ";
	p1q4 = getche();
	system("cls");
	switch (p1q4)
	{
	case 'n':
	case 'N':
		goto p1q5;
		break;
	case 'P':
	case 'p':
		goto p1q3;
		break;
	}
p1q5:
	SetConsoleTextAttribute(hConsole, 10);
	cout << " --: C++ Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q5: goto is a ___?" << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "a)  Variable" << endl
		 << "b)  Label" << endl
		 << "c)  Operator" << endl
		 << "d)  Function" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Enter the selected option here => ";
	p1q5 = getche();
	system("cls");
	switch (p1q5)
	{
	case 'n':
	case 'N':
		goto p1q6;
		break;
	case 'P':
	case 'p':
		goto p1q4;
		break;
	}
p1q6:
	SetConsoleTextAttribute(hConsole, 10);
	cout << " --: C++ Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q6: Which of the following is scope resolution operator?" << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "a)  :" << endl
		 << "b)  ?:" << endl
		 << "c)  ::" << endl
		 << "d)  none" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Enter the selected option here => ";
	p1q6 = getche();
	system("cls");
	switch (p1q6)
	{
	case 'n':
	case 'N':
		goto p2q1;
		break;
	case 'P':
	case 'p':
		goto p1q5;
		break;
	}
p2q1:
	SetConsoleTextAttribute(hConsole, 5);
	cout << " --: HTML Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q1: What is the difference between the post and get methods in a form?" << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "a)  Post is used for sending information to the server. get is used for retrieving form information from the server" << endl
		 << "b)  Get is used for sending information to the server. post is used for retrieving form information from the server" << endl
		 << "c)  With get, data is included in the form body when send to the server. With post, the data goes through the URL" << endl
		 << "d)  With post, data is included in the form body when send to the server. With get, the data goes through the URL" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "Enter the selected option here => ";
	p2q1 = getche();
	system("cls");
	switch (p2q1)
	{
	case 'n':
	case 'N':
		goto p2q2;
		break;
	case 'P':
	case 'p':
		goto p1q6;
		break;
	}
p2q2:
	SetConsoleTextAttribute(hConsole, 5);
	cout << " --: HTML Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q2: What is the best way to apply bold styling to text?" << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "a)  <strong>" << endl
		 << "b)  Use CSS" << endl
		 << "c)  <bold>" << endl
		 << "d)  <b>" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "Enter the selected option here => ";
	p2q2 = getche();
	system("cls");
	switch (p2q2)
	{
	case 'n':
	case 'N':
		goto p2q3;
		break;
	case 'P':
	case 'p':
		goto p2q1;
		break;
	}
p2q3:
	SetConsoleTextAttribute(hConsole, 5);
	cout << " --: HTML Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q3: How do you confirm that a document is written in HTML5?" << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "a)  The server wraps the webpage in an HTML5 wrapper" << endl
		 << "b)  Use the <!DOCTYPE html> declaration that starts the document" << endl
		 << "c)  The browser receives encoding from the server to display the document with HTML5" << endl
		 << "d)  It is enclosed in a <html> tag" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "Enter the selected option here => ";
	p2q3 = getche();
	system("cls");
	switch (p2q3)
	{
	case 'n':
	case 'N':
		goto p2q4;
		break;
	case 'P':
	case 'p':
		goto p2q2;
		break;
	}
p2q4:
	SetConsoleTextAttribute(hConsole, 5);
	cout << " --: HTML Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q4: What is the difference between the <div> and <span> tags?" << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "a)  <div> is used where a generic block-level tag is needed, while <span> is used where a generic inline tag is needed" << endl
		 << "b)  <div> is used for major divisions on a page, while <span> is used to span across columns" << endl
		 << "c)  <div> is the industry-standard default tag, but you could use <span> if you prefer" << endl
		 << "d)  <div> is used where a generic inline tag is needed, while <span> is used where a generic block-level tag is needed" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "Enter the selected option here => ";
	p2q4 = getche();
	system("cls");
	switch (p2q4)
	{
	case 'n':
	case 'N':
		goto p2q5;
		break;
	case 'P':
	case 'p':
		goto p2q3;
		break;
	}
p2q5:
	SetConsoleTextAttribute(hConsole, 5);
	cout << " --: HTML Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q5: What is the difference bet7en <input type=\"submit\" value=\"click me\"> and <button type=\"submit\">Click me</button>?" << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "a)  There is no difference. Both will render a button that submits a form" << endl
		 << "b)  Both will submit a form. However, the <button> can have content other than text, like an image or nested HTML elements, while the <input> cannot" << endl
		 << "c)  <input type=\"button\"> has been deprecated in HTML5. You should use the <button> tag instead" << endl
		 << "d)  Both will submit a form. However, the <input> can have content other than text, like an image or nested HTML elements, while the <button> cannot" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "Enter the selected option here => ";
	p2q5 = getche();
	system("cls");
	switch (p2q5)
	{
	case 'n':
	case 'N':
		goto p2q6;
		break;
	case 'P':
	case 'p':
		goto p2q4;
		break;
	}
p2q6:
	SetConsoleTextAttribute(hConsole, 5);
	cout << " --: HTML Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Q6: Where do <header> and <footer> tags typically occur?" << endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "a)  As children of <body>, <article>, <aside>, and <section> tags" << endl
		 << "b)  As children of <body>, <article>, and <section> tags" << endl
		 << "c)  As children of <body>, <article>, <aside>, <nav>, and <section> tags" << endl
		 << "d)  As children of <body>, <article>, <table>, and <section> tags" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 5);
	cout << "Enter the selected option here => ";
	p2q6 = getche();
	system("cls");
	switch (p2q6)
	{
	case 'n':
	case 'N':
		goto p3q1;
		break;
	case 'P':
	case 'p':
		goto p2q5;
		break;
	}
p3q1:
	SetConsoleTextAttribute(hConsole, 9);
	cout << " --: CSS Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "Q1: What is the line-height property primarily used for?" << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "a)  To control the height of the space between two lines of content" << endl
		 << "b)  To control the height of the space between heading elements" << endl
		 << "c)  To control the height of the character size" << endl
		 << "d)  To control the width of the space between characters" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Enter the selected option here => ";
	p3q1 = getche();
	system("cls");
	switch (p3q1)
	{
	case 'n':
	case 'N':
		goto p3q2;
		break;
	case 'P':
	case 'p':
		goto p2q6;
		break;
	}
p3q2:
	SetConsoleTextAttribute(hConsole, 9);
	cout << " --: CSS Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "Q2: By default, a background image will repeat?" << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "a)  Only if the background-repeat property is set to repeat" << endl
		 << "b)  Indefinitely, vertically, and horizontally " << endl
		 << "c)  Indefinitely on the horizontal axis only" << endl
		 << "d)  Once, on the x and y axis" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Enter the selected option here => ";
	p3q2 = getche();
	system("cls");
	switch (p3q2)
	{
	case 'n':
	case 'N':
		goto p3q3;
		break;
	case 'P':
	case 'p':
		goto p3q1;
		break;
	}
p3q3:
	SetConsoleTextAttribute(hConsole, 9);
	cout << " --: CSS Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "Q3: Which style places an element at a fixed location within its container?" << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "a)  position: absolute;" << endl
		 << "b)  display: flex;" << endl
		 << "c)  display: block;" << endl
		 << "d)  float: left;" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Enter the selected option here => ";
	p3q3 = getche();
	system("cls");
	switch (p3q3)
	{
	case 'n':
	case 'N':
		goto p3q4;
		break;
	case 'P':
	case 'p':
		goto p3q2;
		break;
	}
p3q4:
	SetConsoleTextAttribute(hConsole, 9);
	cout << " --: CSS Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "Q4: What is the ::placeholder pseudo-element used for?" << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "a)  It is used to format the appearance of placeholder text within a form control" << endl
		 << "b)  It specifies the default input text for a form control" << endl
		 << "c)  It writes text content into a hyperlink tooltip" << endl
		 << "d)  It writes text content into any page element" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Enter the selected option here => ";
	p3q4 = getche();
	system("cls");
	switch (p3q4)
	{
	case 'n':
	case 'N':
		goto p3q5;
		break;
	case 'P':
	case 'p':
		goto p3q3;
		break;
	}
p3q5:
	SetConsoleTextAttribute(hConsole, 9);
	cout << " --: CSS Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "Q5: You can use the ___ pseudo-class to set a different color on a link if it was clicked on." << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "a)  a:visited " << endl
		 << "b)  a:hover" << endl
		 << "c)  a:link" << endl
		 << "d)  a:focus" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Enter the selected option here => ";
	p3q5 = getche();
	system("cls");
	switch (p3q5)
	{
	case 'n':
	case 'N':
		goto p3q6;
		break;
	case 'P':
	case 'p':
		goto p3q4;
		break;
	}
p3q6:
	SetConsoleTextAttribute(hConsole, 9);
	cout << " --: CSS Portion :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "Q6: What property is used to adjust the space between text characters?" << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "a)  font-style" << endl
		 << "b)  text-transform" << endl
		 << "c)  font-variant" << endl
		 << "d)  letter-spacing" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Enter the selected option here => ";
	p3q6 = getche();
	system("cls");
	switch (p3q6)
	{
	case 'n':
	case 'N':
		goto p4q1;
		break;
	case 'P':
	case 'p':
		goto p3q5;
		break;
	}
p4q1:
SetConsoleTextAttribute(hConsole, 2);
	cout << " --: Javascript Portion :--" << endl
		 << endl;
		 SetConsoleTextAttribute(hConsole, 15);
	cout << "Q1: Which of the following is not an array method?" << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout<< "a)  array.slice()" << endl
		 << "b)  array.shift()" << endl
		 << "c)  array.push()" << endl
		 << "d)  array.replace()" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout<< "Enter the selected option here => ";
	p4q1 = getche();
	system("cls");
	switch (p4q1)
	{
	case 'n':
	case 'N':
		goto p4q2;
		break;
	case 'P':
	case 'p':
		goto p3q6;
		break;
	}
p4q2:
SetConsoleTextAttribute(hConsole, 2);
	cout << " --: Javascript Portion :--" << endl
		 << endl;
		 SetConsoleTextAttribute(hConsole, 15);
	cout << "Q2: Which tag pair is used in HTML to embed Javascript" << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout<< "a)  <script></script>" << endl
		 << "b)  <js></js>" << endl
		 << "c)  <javascript></javascript>" << endl
		 << "d)  <code></code>" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout<< "Enter the selected option here => ";
	p4q2 = getche();
	system("cls");
	switch (p4q2)
	{
	case 'n':
	case 'N':
		goto p4q3;
		break;
	case 'P':
	case 'p':
		goto p4q1;
		break;
	}
p4q3:
SetConsoleTextAttribute(hConsole, 2);
	cout << " --: Javascript Portion :--" << endl
		 << endl;
		 SetConsoleTextAttribute(hConsole, 15);
	cout << "Q3:Which choice is a valid example for an arrow function? " << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout<< "a)  (a,b) => c" << endl
		 << "b)  a,b => {return c;}" << endl
		 << "c)  a,b =>" << endl
		 << "d)  {a, b} => c" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout<< "Enter the selected option here => ";
	p4q3 = getche();
	system("cls");
	switch (p4q3)
	{
	case 'n':
	case 'N':
		goto p4q4;
		break;
	case 'P':
	case 'p':
		goto p4q2;
		break;
	}
p4q4:
SetConsoleTextAttribute(hConsole, 2);
	cout << " --: Javascript Portion :--" << endl
		 << endl;
		 SetConsoleTextAttribute(hConsole, 15);
	cout << "Q4: Which method do you use to attach one DOM node to another?" << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout<< "a)  attachNode()" << endl
		 << "b)  appendChild()" << endl
		 << "c)  querySelector()" << endl
		 << "d)  getNode()" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout<< "Enter the selected option here => ";
	p4q4 = getche();
	system("cls");
	switch (p4q4)
	{
	case 'n':
	case 'N':
		goto p4q5;
		break;
	case 'P':
	case 'p':
		goto p4q3;
		break;
	}
p4q5:
SetConsoleTextAttribute(hConsole, 2);
	cout << " --: Javascript Portion :--" << endl
		 << endl;
		 SetConsoleTextAttribute(hConsole, 15);
	cout << "Q5: Which of the following values is not a Boolean false?" << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout<< "a)  Boolean(0) " << endl
		 << "b)  Boolean(\"\")" << endl
		 << "c)  Boolean(NaN)" << endl
		 << "d)  Boolean(\"False\")" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout<< "Enter the selected option here => ";
	p4q5 = getche();
	system("cls");
	switch (p4q5)
	{
	case 'n':
	case 'N':
		goto p4q6;
		break;
	case 'P':
	case 'p':
		goto p4q4;
		break;
	}
p4q6:
SetConsoleTextAttribute(hConsole, 2);
	cout << " --: Javascript Portion :--" << endl
		 << endl;
		 SetConsoleTextAttribute(hConsole, 15);
	cout << "Q6: Which of the following is not a keyword in JavaScript?" << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout<< "a)  this" << endl
		 << "b)  catch" << endl
		 << "c)  array" << endl
		 << "d)  function" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout<< "Enter the selected option here => ";
	p4q6 = getche();
	system("cls");
	switch (p4q6)
	{
	case 'n':
	case 'N':
		goto p4q6;
		break;
	case 'P':
	case 'p':
		goto p4q5;
		break;
	}
	return checker(p1q1, p1q2, p1q3, p1q4, p1q5, p1q6,
				   p2q1, p2q2, p2q3, p2q4, p2q5, p2q6,
				   p3q1, p3q2, p3q3, p3q4, p3q5, p3q6,
				   p4q1, p4q2, p4q3, p4q4, p4q5, p4q6);
}
// Function to check selected option and calculating marks
int checker(char a1, char a2, char a3, char a4, char a5, char a6, char b1, char b2, char b3, char b4, char b5, char b6, char c1, char c2, char c3, char c4, char c5, char c6, char d1, char d2, char d3, char d4, char d5, char d6)
{
	int number = 0;
	// C++ Portion Checker
	switch (a1)
	{
	case 'b':
	case 'B':
		number += 1;
		break;
	}
	switch (a2)
	{
	case 'd':
	case 'D':
		number += 1;
		break;
	}
	switch (a3)
	{
	case 'c':
	case 'C':
		number += 1;
		break;
	}
	switch (a4)
	{
	case 'c':
	case 'C':
		number += 1;
		break;
	}
	switch (a5)
	{
	case 'b':
	case 'B':
		number += 1;
		break;
	}
	switch (a6)
	{
	case 'c':
	case 'C':
		number += 1;
		break;
	}
	// HTML Portion Checker
	switch (b1)
	{
	case 'd':
	case 'D':
		number += 1;
		break;
	}
	switch (b2)
	{
	case 'a':
	case 'A':
		number += 1;
		break;
	}
	switch (b3)
	{
	case 'b':
	case 'B':
		number += 1;
		break;
	}
	switch (b4)
	{
	case 'a':
	case 'A':
		number += 1;
		break;
	}
	switch (b5)
	{
	case 'b':
	case 'B':
		number += 1;
		break;
	}
	switch (b6)
	{
	case 'b':
	case 'B':
		number += 1;
		break;
	}
	// CSS Portion Checker
	switch (c1)
	{
	case 'a':
	case 'A':
		number += 1;
		break;
	}
	switch (c2)
	{
	case 'b':
	case 'B':
		number += 1;
		break;
	}
	switch (c3)
	{
	case 'a':
	case 'A':
		number += 1;
		break;
	}
	switch (c4)
	{
	case 'a':
	case 'A':
		number += 1;
		break;
	}
	switch (c5)
	{
	case 'a':
	case 'A':
		number += 1;
		break;
	}
	switch (c6)
	{
	case 'd':
	case 'D':
		number += 1;
		break;
	}
	// Javascript Portion Checker
	switch (d1)
	{
	case 'd':
	case 'D':
		number += 1;
		break;
	}
	switch (d2)
	{
	case 'a':
	case 'A':
		number += 1;
		break;
	}
	switch (d3)
	{
	case 'a':
	case 'A':
		number += 1;
		break;
	}
	switch (d4)
	{
	case 'b':
	case 'B':
		number += 1;
		break;
	}
	switch (d5)
	{
	case 'D':
	case 'd':
		number += 1;
		break;
	}
	switch (d6)
	{
	case 'c':
	case 'C':
		number += 1;
		break;
	}
	return number;
}
// Function for Displaying Result
bool printresult(int score)
{
	char dummy;
	header4();
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	if (score >= 13)
	{
		SetConsoleTextAttribute(hConsole, 10);
		cout << "Congratulations! You made it and passed quiz by securing " << score << " out of " << tscore << endl;
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Sorry! you gain " << score << " in quiz but the minimum score required to crack exam is 50 percent" << endl;
	}
	cout << endl;
	SetConsoleTextAttribute(hConsole, 14);
	cout<< "Do you want to give another attempt" << endl;
		 SetConsoleTextAttribute(hConsole, 10);
	cout << "a) Yes" << endl;
	cout << "b) No" << endl;
	dummy = getche();
	if (dummy == 'a' || dummy == 'A' || dummy == 'Y' || dummy == 'y')
	{
		return true;
	}
	if (dummy == 'b' || dummy == 'B' || dummy == 'N' || dummy == 'n')
	{
		return false;
	}
}
// Function for Teacher Authorization
bool teachercheck()
{
	system("cls");
	char a, b, c, d;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "  --: Teacher Verification :--  " << endl<< endl;
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Enter Your Four Digit Code for Teacher Authorization: ";
	SetConsoleTextAttribute(hConsole, 9);
	a = getche();
	b = getche();
	c = getche();
	d = getche();
	if (a == '5' && b == '5' && c == '2' && d == '0')
	{
		return true;
	}
	else
	{
		return false;
	}
}
// End Function
void end(int a)
{
	if (a >= 13)
	{
		pgreetings();
	}
	else
	{
		fgreetings();
	}
}
// Greeting message (For Passed ones)
void pgreetings()
{
	SetConsoleTextAttribute(hConsole, 2);
	cout << " --: Greetings Message :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "We congrats you on your success. We hope you learn some new things from it. We appreciate your spirit of learning new things. Best of Luck for your future :)" << endl;
	cout << "Thank you for using our services" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout<< "Press enter key to finish =>";
	char dummy = getche();
	system("cls");
}
// Greeting message (For Fail ones)
void fgreetings()
{
	SetConsoleTextAttribute(hConsole, 2);
	cout << " --: Greetings Message :--" << endl
		 << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "We regret to inform you that your marks is not enough to pass quiz. We appreciate your spirit of of learning new things. Do more work and try again :)" << endl;
	cout << "Thank you for using our services" << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout<< "Press enter key to finish =>";
	char dummy = getche();
	system("cls");
}
// Header (Quiz App)
void header1()
{
	SetConsoleTextAttribute(hConsole, 10);
	cout << "   _ \\         _)              \\      _  \\    _ \\      " << endl;
	cout << "  |   |  |   |  | _  /        _ \\    |   |  |   |         " << endl;
	cout << "  |   |  |   |  |   /        ___ \\   ___/   ___/          " << endl;
	cout << " \\__\\_\\ \\__,_| _| ___|     _/    _\\ _|     _|         " << endl;
}
// Header (Candidate Data)
void header2()
{
	SetConsoleTextAttribute(hConsole, 11);
	cout << "   ___|                    | _)      |         |              __ \\          |                     " << endl;
	cout << "  |       _` |  __ \\    _` |  |   _` |   _` |  __|   _ \\      |   |   _` |  __|   _` |           " << endl;
	cout << "  |      (   |  |   |  (   |  |  (   |  (   |  |     __/      |   |  (   |  |    (   |             " << endl;
	cout << " \\____| \\__,_| _|  _| \\__,_| _| \\__,_| \\__,_| \\__| \\___|     ____/  \\__,_| \\__| \\__,_|   " << endl;
}
// Header (Instructions)
void header3()
{
	SetConsoleTextAttribute(hConsole, 1);
	cout << " _ _|               |                       |   _)                            " << endl;
	cout << "   |   __ \\    __|  __|   __|  |   |   __|  __|  |   _ \\   __ \\    __|     " << endl;
	cout << "   |   |   | \\__ \\  |    |     |   |  (     |    |  (   |  |   | \\__ \\    " << endl;
	cout << " ___| _|  _| ____/ \\__| _|    \\__,_| \\___| \\__| _| \\___/  _|  _| ____/   " << endl;
}
// Header (Result)
void header4()
{
	SetConsoleTextAttribute(hConsole, 3);
	cout << "   _ \\                      |  |              " << endl;
	cout << "  |   |   _ \\   __|  |   |  |  __|            " << endl;
	cout << "  __ <    __/ \\__ \\  |   |  |  |             " << endl;
	cout << " _| \\_\\ \\___| ____/ \\__,_| _| \\__|        " << endl;
}
// header (End)
void header5()
{
	SetConsoleTextAttribute(hConsole, 9);
	cout << "                       ____|             |                        " << endl;
	cout << "               _)      __|    __ \\    _` |     _)                " << endl;
	cout << " _____| _____|         |      |   |  (   |       _____| _____|    " << endl;
	cout << "               _)     _____| _|  _| \\__,_|     _)                " << endl;
}
// ----The End----
// Created By Mahreen Farooq (2022 CS-511)
// Created By Mirza Sufiyan Ahmad (2022 CS-513)
// Created By Maha Butt (2022 CS-527)
// Created by M.Abdullah (2022 CS-525)
// Best of Luck PF Mates
