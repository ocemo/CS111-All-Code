// Homework 2

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main(){

	string Name;
	string Address;
	string City;
	string State;
	string Zip_Code;
	string Email_Address;
	string Major;
	string Phone_Num;

	cout << setiosflags(ios::fixed|ios::showpoint|ios::left); //Setting up the spacing for the final program

	cout << "What is your name?" << endl; //Calling for name
	getline (cin, Name);
	
	cout << "What is your street address?" << endl; //Calling for address
	getline (cin, Address);
	
	cout << "What city is that in?" << endl; //Calling for city
	getline (cin, City);
	
	cout << "And what state?" << endl; //Calling for State
	getline (cin, State);
	
	cout << "What's the Zip Code in that area?" << endl; //Calling for Zip_Code
	getline (cin, Zip_Code);
	
	cout << "What is your email address?" << endl; //Calling for Email Address
	getline (cin, Email_Address);

	cout << "Almost done, what Major are you pursuing?" << endl; //Calling for major
	getline (cin, Major);

	cout << "FInally, what is your cellphone number?" << endl; //Calling for cellphone number
	getline (cin, Phone_Num);

	//Displaying all of the information gathered after this

	cout << "Here it is displayed for you, is it all correct?" << endl << endl; //Displaying all information in an orderly manner at the end


	cout << setw(22) << "Name:" << endl;
	cout << setw(22) << Name << endl << endl;
	cout << setw(22) << "Address:" << setw(22) << "City" << endl;
	cout << setw(22) << Address << setw(22) << City << endl << endl;
	cout << setw(22) << "State:" << setw(22) << "Zip Code" << endl;
	cout << setw(22) << State << setw(22) << Zip_Code << endl << endl;
	cout << setw(22) << "Email Address:" << endl;
	cout << setw(22) << Email_Address << endl << endl;
	cout << setw(22) << "Major:" << endl;
	cout << setw(22) << Major << endl << endl;
	cout << setw(22) << "Phone Number:" << endl;
	cout << setw(22) << Phone_Num << endl;

	return 0;

}

//Homework 3

#include <iostream>
using namespace std;

int main(){

	float distance;
	float speed;
	float time;

	cout << "How long have you been driving? (hours)" << endl;
	cin >> time;

	cout << "How fast have you been going? (miles/hour)" << endl;
	cin >> speed;

	distance = speed * time;

	cout << "You have been traveling for " << distance << " meters" << endl;

	return 0;
}

//Homework 4

#include <iostream>
using namespace std;

int main(){

	int total;
	float total_cents;
	int pennies;
	int nickels;
	int dimes;
	int quarters;
	int cents;
	
	cout << "How many quarters do you have?" << endl;
	cin >> quarters;
	cout << "How many dimes do you have?" << endl;
	cin >> dimes;
	cout << "How many nickels do you have?" << endl;
	cin >> nickels;
	cout << "How many pennies do you have?" << endl;
	cin >> pennies;
	
	total = .25 * quarters + .1 * dimes + .05 * nickels + .01 * pennies;
	total_cents = .25 * quarters + .1 * dimes + .05 * nickels + .01 * pennies;
	cents = (total_cents - total) * 100;
	
	cout << "You have " << total << " dollar(s)." << endl;
	cout << "You have " << cents << " cent(s)." << endl;
	
	return 0;
	
}

/*

Way the teacher does it:

dollars=total/100;
cents=total % 100;


*/

//Homework 5

#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
	float total_price;
	char cheese, drink, fries, hamburger, bacon; //Original program used strings

	cout << setiosflags(ios::right|ios::fixed|ios::showpoint); //Setting iosflags (positioning function
	cout << setprecision(2);


	cout << setw(35) << "WELCOME TO THE KRUSTY KRAB" << endl;
	cout << setw(20) << "Hamburger:" << endl;
	cout << setw(25) << "Cheese" << endl;
	cout << setw(24) << "Bacon" << endl;
	cout << setw(16) << "Drink:" << setw(28) << "Large or Small" << endl;
	cout << setw(16) << "Fries:" << setw(28) << "Large or Small" << endl;
	

	Sleep(1000);

	cout << "Hello there, do you want a hamburger today?" << endl; cin >> hamburger;

/*	if (hamburger == "yes") 
	{
		cout << "Alright, that's one hamburger, what about cheese?" << endl; getline(cin, cheese);
		total_price = 1.00;
		if (cheese == "with cheese" || cheese == "with" || cheese == "cheese" || cheese == "yes") //Determining if you're having cheese or not
		{
			cout << "Alright, one hamburger with cheese" << endl;
			cheese = "yes";
			total_price += .5;
			cout << "Do you also want Bacon with that?" << endl; getline(cin, bacon);
			if (bacon == "yes") //Determining if you're having bacon or not
			{
				cout << "Perfect, one Bacon Cheeseburger. What about a drink?" << endl;
				total_price += .75;
			}
			else
			{
				cout << "No Bacon?! That's nuts, at least order a drink.";
				total_price += 0;
			}
		}
		else //NO CHEESE
		{
			cout << "Alright, one hamburger without cheese" << endl;
			cheese = "no";
			total_price += 0;
		}
	}
	else
		cout << "Alright, no hamburger today, what about a drink?" << endl;

	Sleep(500); //Refer to the other sleep note.

	cout << "We have two sizes available, large or small. Which one do you want?" << endl; getline(cin, drink);

	if (drink == "large") //Determing which drink you're purchasing
	{
		cout << "Alright one large drink and ";
		if (cheese == "yes")
			cout << "one cheeseburger. Now what about for fries?" << endl;
		else
			cout << "one hamburger. Now what about for fries?" << endl;
		total_price += 1.6;
	}
	else if (drink == "small") //SMALL DRINK
	{
		cout << "Alright one small drink and ";
		if (cheese == "yes")
			cout << "one cheeseburger. Now what about for fries?" << endl;
		else
			cout << "one hamburger. Now what about for fries?" << endl;
		total_price += 1.1;
	}
	else
		cout << "Alright, no drink? What about fries?" << endl;

	Sleep(500); //Refer to other sleep note.

	cout << "Same as the drinks, we only have two sizes available, large or small. What are you feeling today?" << endl; getline(cin, fries);

	if (fries == "large") //Determining which fries you're purchasing
	{
		cout << "Alright, large fries, ";
		if (drink == "large")
			cout << "large drink, and ";
		else
			cout << "small drink, and ";
		if (cheese == "yes")
			cout << "a cheeseburger." << endl;
		else
			cout << "a hamburger." << endl;
		total_price += 1.75;
	}
	else if (fries == "small") //SMALL FRIES
	{
		cout << "Alright, small fries, ";
		if (drink == "large")
			cout << "large drink, and ";
		else
			cout << "small drink, and ";
		if (cheese == "yes")
			cout << "a cheeseburger." << endl;
		else
			cout << "a hamburger." << endl;
		total_price += 1.2;
	}
	else
		cout << "No fries? Fine with me." << endl;

	Sleep(500); //Refer to other sleep note.

	cout << string(50, '\n');

	cout << "Alright, here's your final receit:" << endl;

	if (hamburger == "yes")
		cout << setw(16) << "Hamburger" << setw(20) << "$1.00" << endl;
	

	if (bacon == "yes")
		cout << setw(22) << "With Bacon" << setw(14) << "$0.75" << endl;
	

	if (cheese == "yes")
		cout << setw(22) << "With Cheese" << setw(14) << "$0.50" << endl;
	

	if (fries == "large")
		cout << setw(18) << "Large Fries" << setw(18) << "$1.75" << endl;
	else
		cout << setw(18) << "Small Fries" << setw(18) << "$1.20" << endl;;


	if (drink == "large")
		cout << setw(18) << "Large Drink" << setw(18) << "$1.60" << endl << endl;
	else
		cout << setw(18) << "Small Drink" << setw(18) << "$1.10" << endl << endl;

	cout << "Cost: " << total_price << "\n" << "Tax: " << total_price * .06 << "\n" << "Total: " << total_price * 1.06 << endl;

	Sleep(2000);

	return 0;

}*/

	if (hamburger == 'n')
	{
		cout << "Alright, no hamburger for you! What about a drink?" << endl;
		total_price = 0;
	}
	else if (hamburger == 'y')
	{
		total_price = 1.00;
		cout << "Do you want Cheese on that too?" << endl; cin >> cheese;
		if (cheese == 'n')
		{
			cout << "Do you at least want Bacon?" << endl; cin >> bacon;
			if (bacon == 'y')
			{
				total_price += .75;
				cout << "Awesome, what about a drink on top of that?" << endl;
			}
			else
				cout << "Fine then, no bacon for you. Are you at least going to get a drink?" << endl;
		}
		else
		{
			cout << "Awesome, you want bacon too?" << endl; cin >> bacon;
			if (bacon == 'y')
			{
				total_price += .75;
				cout << "Awesome, what about a drink on top of that?" << endl;
			}
			else
				cout << "Fine then, no bacon for you. Are you at least going to get a drink?" << endl;
		}
	}

	cin >> drink;

	if (drink == 'n')
		cout << "No drink? What about fries? We have some of the best around!" << endl;
	else
	{
		cout << "What size do you want? Large (y) or small (n)?" << endl; cin >> drink;
		if (drink == 'y')
		{
			cout << "One large drink coming up! Now what about fries?" << endl;
			total_price += 1.6;
		}
		else
		{
			cout << "One small drink coming up! Now what about fries?" << endl;
			total_price += 1.1;
		}
	}

	cin >> fries;

	if (fries == 'n')
		cout << "Aww, no fries. What a disgrace." << endl;
	else
	{
		cout << "Alright, do you want a large (y) or a small (n)?" << endl; cin >> fries;
			if (fries == 'y')
			{
				cout << "Sweet! One large coming up! Here's your receit!" << endl;
				total_price += 1.75;
			}
			else
			{
				cout << "Small fries, smart man. Here's your final receit." << endl;
				total_price += 1.2;
			}
	}

	if (hamburger == 'y')
		cout << setw(16) << "Hamburger" << setw(20) << "$1.00" << endl;
	

	if (bacon == 'y')
		cout << setw(22) << "With Bacon" << setw(14) << "$0.75" << endl;
	

	if (cheese == 'y')
		cout << setw(22) << "With Cheese" << setw(14) << "$0.50" << endl;
	

	if (fries == 'y')
		cout << setw(18) << "Large Fries" << setw(18) << "$1.75" << endl;
	else
		cout << setw(18) << "Small Fries" << setw(18) << "$1.20" << endl;;


	if (drink == 'y')
		cout << setw(18) << "Large Drink" << setw(18) << "$1.60" << endl << endl;
	else
		cout << setw(18) << "Small Drink" << setw(18) << "$1.10" << endl << endl;

	cout << "Cost: " << total_price << "\n" << "Tax: " << total_price * .06 << "\n" << "Total: " << total_price * 1.06 << endl;
	
}

//Homework 6

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int idNumber, hoursWorked, numberOfSales;
	char employeeCode;
	float hourlyWage, pay, salary;

	cout << "What's the employee number?" << endl; cin >> idNumber;

	while(idNumber != 0)
	{
		cout << "Code?" << endl;
		
		cin >> employeeCode;

		if (employeeCode == 's' || employeeCode == 'S')
		{
			cout << "What's the yearly pay amount?" << endl;
			cin >> pay;
			
			cout << "Employee number " << idNumber << " earned $" << pay/12 << endl;
		}
		else if (employeeCode == 'c' || employeeCode == 'C')
		{
			cout << "How many sales did this employee make?" << endl;
			cin >> numberOfSales;
			cout << "This employee has earned:" << endl;
			
			if (numberOfSales > 5000)
				salary = 185.00 + .053*2000 + .024 * (numberOfSales - 5000);
			else if (numberOfSales > 3000)
				salary = 185.00 + .053 * (numberOfSales - 3000);
			else
				salary = 185.00;
			
			cout << "$" << salary << endl;
		}
		else
		{
			cout << "What's this employee's hourly wage?" << endl;
			cin >> hourlyWage;
			
			cout << "How many hours did he work this week?" << endl;
			cin >> hoursWorked;

			cout << "Employee number " << idNumber << " earned $" << hoursWorked * hourlyWage << endl;
		}

		cout << "What's the employee number?" << endl;
		cin >> idNumber;
	}

	cout << "Thanks for using the Swift Salary calculator!" << endl;

	return 0;

}

//Homework 8

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int homework, projects, final_exam_grade[10], i, a;
	float final_grade[10], homework_average[10], projects_average[10], homework_tot = 0, projects_tot = 0;

	for (i = 0; i<10; i++)
	{
		cout << "What is student #" << i+1 << " homework grades? (1-10)" << endl;

		for (a = 0; a<10; a++)
		{
			cin >> homework;
			homework_tot = homework_tot + homework;
		}

		homework_average[i] = homework_tot / 10;
		homework = 0;
		homework_tot = 0;

		cout << "What is student #" << i+1 << " project grades? (1-2)" << endl;

		for (a = 0; a<2; a++)
		{
			cin >> projects;
			projects_tot = projects_tot + projects;
		}

		projects_average[i] = projects_tot / 2;
		projects = 0;
		projects_tot = 0;

		cout << "What is student #" << i+1 << " final exam grade?" << endl;
		cin >> final_exam_grade[i];

		final_grade[i] = ((((homework_average[i] + projects_average[i]) / 2) + final_exam_grade[i]) / 2);

	}

	cout << setiosflags(ios::right|ios::fixed|ios::showpoint);
	cout << setprecision(2);

	cout << "| ID | Homework Average | Project Average | Final Exam Grade | Final Average |" << endl;


	for (i=0; i<10; i++)
	{
		cout << "|" << setw(2.5) << i+1 << setw(3.5) << "|" << setw(10) << homework_average[i] << setw(9.5) << "|" << setw(9) << projects_average[i] << setw(9) << "|" << setw(11) << final_exam_grade[i] << setw(8) << "|" << setw(9) << final_grade[i] << setw(7.5) << "|" << endl;
	}
}

//Homework 8b

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int homework, projects, final_exam_grade[50], i, a = 0, student_id[50];
	float final_grade[50], homework_average[50], projects_average[50], homework_tot = 0, projects_tot = 0;

	cout << "What is the student ID?" << endl;
	cin >> student_id[a];

	while(student_id[a] != 0)
	{
		cout << "What is student #" << student_id[a] << " homework grades? (1-10)" << endl;

		for (i = 0; i<10; i++)
		{
			cin >> homework;
			homework_tot = homework_tot + homework;
		}

		homework_average[i] = homework_tot / 10;
		homework = 0;
		homework_tot = 0;

		cout << "What is student #" << student_id[a] << " project grades? (1-2)" << endl;

		for (i = 0; i<2; i++)
		{
			cin >> projects;
			projects_tot = projects_tot + projects;
		}

		projects_average[i] = projects_tot / 2;
		projects = 0;
		projects_tot = 0;

		cout << "What is student #" << student_id[a] << " final exam grade?" << endl;
		cin >> final_exam_grade[i];

		final_grade[i] = ((((homework_average[i] + projects_average[i]) / 2) + final_exam_grade[i]) / 2);
		
		a++;

		cout << "What is the next students ID #?" << endl;
		cin >> student_id[a];
	}

	cout << setiosflags(ios::right|ios::fixed|ios::showpoint);
	cout << setprecision(2);

	cout << "| ID | Homework Average | Project Average | Final Exam Grade | Final Average |" << endl;

	for (i=0; i<a; i++)
		cout << "|" << setw(2.5) << student_id[i] << setw(3.5) << "|" << setw(10) << homework_average[i] << setw(9.5) << "|" << setw(9) << projects_average[i] << setw(9) << "|" << setw(11) << final_exam_grade[i] << setw(8) << "|" << setw(9) << final_grade[i] << setw(7.5) << "|" << endl;
}

//Homework 9

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
	ifstream inData;
	ofstream outData;
	int i, numberOfStudents; //studentId[8], credits[8], residency[8], dormLocation[8], tuition[8]; //Would be better if I was able to dynamically change the size of an array

	inData.open("inputData.txt");
	outData.open("outputData.txt");

	cout << setiosflags(ios::showpoint|ios::fixed|ios::right);
	cout << setprecision(3);

	inData >> numberOfStudents;

	vector<int> studentId(numberOfStudents), credits(numberOfStudents), residency(numberOfStudents), dormLocation(numberOfStudents), tuition(numberOfStudents);

	for (i=0;i<numberOfStudents;i++) {
		inData >> studentId[i];	//Student id's variable goes here
		inData >> credits[i];	//Number of credits goes here
		inData >> residency[i];	//Residency Code
		inData >> dormLocation[i];	//Dorm location Code

		if (residency[i] == 1) {
			if (credits[i] < 12)
				tuition[i] += ( 450 * credits[i] );
			else
				tuition[i] += 6000;
		}
		else {
			if (credits[i] < 12)
				tuition[i] += ( 800 * credits[i] );
			else
				tuition[i] += 12000;
		}
		if (dormLocation[i] == 1)
			tuition[i] += 4000;
	}

	outData << "| Student ID | Number of Credits | State Residency | Dorm Residency | Tuition |" << endl;

	for (i=0;i<numberOfStudents;i++)
		outData << "|" << setw(7) << studentId[i] << setw(6.5) << "|" << setw(10) << credits[i] << setw(10) << "|" << setw(9) << residency[i] << setw(9) << "|" << setw(9) << dormLocation[i] << setw(8) << "|" << setw(7) << tuition[i] << setw(3) << "|" << endl;

	return 0;
}

//Homework 10

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int num, answer;
	string playAgain;

	answer = rand()%100+1;

	PlayAgain:

	cout << "Play the guessing game!\n" << "What number is the computer thinking of?!\n";
	cin >> num;

	while (num != answer) {
		cout << "That's the wrong number!\n";
		if (num > answer)
			cout << "Your guess is too large, try again!\n";
		else
			cout << "Your guess is too small, try again!\n";

		cin >> num; }

	cout << "You guessed the right number!\n" << "Do you want to play again? (Yes or No)\n";
	cin >> playAgain;

	if (playAgain == "Yes" || playAgain == "yes")
		goto PlayAgain;
	else {
		cout << "Thanks for playing!\n";
		return 0; }

	return 0; }

//Homework 11

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string getFirst(), getFull(string firstName);

int main() {
	ofstream outputData;
	outputData.open("outputData.txt");
	outputData << getFull(getFirst()); }

string getFirst() {
	string firstName;
	cout << "What's your first name?\n";
	cin >> firstName;
	return firstName; }
	
string getFull(string firstName) {
	string lastName, fullName;
	cout << "What's your last name?\n";
	cin >> lastName;
	fullName = firstName + " " + lastName;
	return fullName; }

//Homework 12

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void getHatSize(int weight[], int height[], float hatSize[]);
void getJacketSize(int weight[], int height[], int age[], float jacketSize[]);
void getPantSize(int weight[], int age[], float pantSize[]);
void inputData(int id[], int height[], int weight[], int age[]);
void outputData(int id[], int height[], int weight[], int age[], float hatSize[], float jacketSize[], float pantSize[]);

int main() {
	int id[10], height[10], weight[10], age[10];
	float hatSize[10], jacketSize[10], pantSize[10];

	inputData(id, height, weight, age);
	getHatSize(weight, height, hatSize);
	getJacketSize(weight, height, age, jacketSize);
	getPantSize(weight, age, pantSize);
	outputData(id, height, weight, age, hatSize, jacketSize, pantSize);

	return 0;
}

void getHatSize(int weight[], int height[], float hatSize[]) {
	for (int i=0; i<10; i++) {
		hatSize[i] = (weight[i] / height[i]) * 2.9; } }

void  getJacketSize(int weight[], int height[], int age[], float jacketSize[]) {
	for (int i=0; i<10; i++) {
		jacketSize[i] = (height[i] * weight[i]) / 288;
		jacketSize[i] += (1/8)((age[i] / 10) - 2); } }

void getPantSize(int weight[], int age[], float pantSize[]) {
	for (int i = 0; i<10; i++) {
		pantSize[i] = (weight[i] / 5.7);
		if (age[i] >= 30) {
			pantSize[i] += ((age[i] - 28) / 2) * .1; } } }

void inputData(int id[], int height[], int weight[], int age[]) {
	ifstream inputData;
	ofstream outputData;

	inputData.open("inputData.txt");
	outputData.open("outputData.txt");

	for (int i = 0; i<10; i++) {
		inputData >> id[i];
		inputData >> height[i];
		inputData >> weight[i];
		inputData >> age[i]; } }

void outputData(int id[], int height[], int weight[], int age[], float hatSize[], float jacketSize[], float pantSize[]) {
	ofstream outputData;
	outputData.open("outputData.txt");

	cout << setiosflags(ios::fixed|ios::right|ios::showpoint);
	cout << setprecision(2);

	cout << "|  ID  | Height | Weight | Age | Hat Size | Jacket Size | Pant Size |\n";
	outputData << "|  ID  | Height | Weight | Age | Hat Size | Jacket Size | Pant Size |\n";

	for(int i=0;i<10;i++) {
		cout << "|" << setw(5) << 111 << setw(2.5) << "|" << setw(5.5) << 11 << setw(4) << "|" << setw(6) << 111 << setw(3.5) << "|" << setw(4) << 11 << setw(2) << "|" << setw(7) << hatSize[1] << setw(4) << "|" << setw(8) << jacketSize[1] << setw(6) << "|" << setw(9) << pantSize[1] << setw(4) << "|\n";
		outputData << "|" << setw(5) << id[i] << setw(2.5) << "|" << setw(5.5) << height[i] << setw(4) << "|" << setw(6) << weight[i] << setw(3.5) << "|" << setw(4) << age[i] << setw(2) << "|" << setw(7) << hatSize[i] << setw(4) << "|" << setw(8) << jacketSize[i] << setw(6) << "|" << setw(9) << pantSize[i] << setw(4) << "|\n"; } }

		// End Of Homework Files