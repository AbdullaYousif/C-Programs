
#include <iostream>
#include <assert.h>

using namespace std;
//Abdulla Yousif


//Part 1 Pseudocode
//cout<< "Enter Your quiz Grades"<<endl;
//add all the quiz grades
//divide by the amount of quiz grades
//repeat for test grades
//repeat for assignment grades
//cout << " Your final mark in the course is"<<grade<<endl;

void Grade(int gradearray[4], int minIndex);
void shiftMinN(int gradeArray[4], int numGrades, int numCounted);
void Averages(int gradeAArray[4], int numGrades);
void AssignArray(int AssignArray[10], int AssignOutOf, int ASSIGN_GRADES_SIZE);
void LetterGrade(int pctGrade);
void FinalGrade(int quizArray[18], int assignArray[10]);

int main()
{
	int Grades[4] = { 75,25,59,55 };
	Grade(Grades, 4);
	int GradesArray[4] = { 75,25,59,55 };
	shiftMinN(GradesArray, 4 , 4);
	int Averag[4] = { 75,25,59,55 };
	Averages(Averag, 4);
	int AverageArray[10] = { 10,20,30,40,50,60,70,80,90,100 };
	AssignArray(AverageArray, 100, 10);
	LetterGrade(65);
	int QuizArray[18] = { 24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,6,6,24 };
	int AssignArray[10] = { 70,57,80,80,65,90,70,80,90,80 };
	FinalGrade(QuizArray, AssignArray);
}


void Grade(int gradearray[4], int minIndex)
{

	minIndex = gradearray[0];


	for (int i = 0; i < 4; i++)
	{
		if (gradearray[i] < minIndex)
		{
			minIndex = gradearray[i];

		}



	}
	cout << minIndex << endl;

}

void shiftMinN(int gradeArray[4], int numGrades, int numCounted)
{

	int temp;
	 numGrades = 4;
	 numCounted = 4;

	assert(numGrades >= numCounted);

	int newSize = numGrades;
	for (int i = 0; i < numGrades; i++)
	{
		if (gradeArray[i] < numGrades)
		{
			int minIndex = gradeArray[i];
		}
	}
	temp = gradeArray[1];
	gradeArray[1] = gradeArray[3];
	gradeArray[3] = temp;
	cout << gradeArray[3] << endl;


}

void Averages(int gradeAArray[4],int numGrades)
{
	 numGrades = 4;
	gradeAArray[4] = { };
	float sum = 0.0;
	float avg;


	for (int i = 0; i < numGrades; i++)
	{
		sum += gradeAArray[i];
		avg = sum / numGrades;

	}



	cout << "The Average is " << avg << endl;


 }

void AssignArray(int AssignArray[10], int AssignOutOf, int ASSIGN_GRADES_SIZE)
{


	 AssignOutOf = 100;
	 ASSIGN_GRADES_SIZE = 10;

	float sum = 0.0;
	float avg;

	for (int i = 0; i < ASSIGN_GRADES_SIZE; i++)
	{
		AssignArray[9] / 100;
		sum += AssignArray[i];

		avg = sum / ASSIGN_GRADES_SIZE;

	}



	cout << "The Average is " << avg << endl;


}

void LetterGrade(int pctGrade)
{
	const char A = 'A';
	const char B = 'B';
	const char C = 'C';
	const char D = 'D';
	const char F = 'F';

	if (pctGrade >= 90)
	{
		cout << "Congratulations you have an " << A << endl;

	}

	else if (pctGrade >= 70)
	{
		cout << "Congratulations you have a" << B << endl;
	}

	else if (pctGrade >= 60)
	{
		cout << " Dang You have a " << C << endl;
	}
	else if (pctGrade >= 50)
	{
		cout << "Ouch.... You have a " << D << endl;

	}

	else if (pctGrade >= 40)
	{
		cout << "You're failing... better start studying" << F << endl;
	}


}

void FinalGrade(int quizArray[18], int assignArray[10])
{
	float finalgrade = 0.0;
	int sum = 0;
	const char F = 'F';

	for (int i = 0; i < 18; i++)
	{
		sum += quizArray[i];
	}

	for (int j = 0; j < 10; j++)
	{
		sum += assignArray[j];

	}



	cout << "Your Final Grade is " << sum / 28 << "%" << endl;
	cout << " Your Final Letter Grade is " << F << endl;

}


