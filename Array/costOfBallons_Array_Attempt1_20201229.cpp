/* Problem Statement: 

You are conducting a contest at your college. This contest consists of two problems and n participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. 
Each problem must have a balloon associated with it as a prize for solving that specific problem. 
You can distribute balloons to each participant by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons for the second problem
Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

Input format

First line: T that denotes the number of test cases (1≤T≤10)
For each test case: 
First line: Cost of green and purple-colored balloons 
Second line: n that denotes the number of participants (1≤n≤10)
Next n lines: Contain the status of users. For example, if the value of the jth integer in the ith row is 0, then it depicts that the ith participant has not solved the jth problem. 
Similarly, if the value of the jth integer in the ith row is 1, then it depicts that the ith participant has solved the jth problem.

Output format
For each test case, print the minimum cost that you have to pay to purchase balloons.

SAMPLE INPUT 
2
9 6
10
1 1
1 1
0 1
0 0
0 1
0 0
0 1
0 1
1 1
0 0
1 9
10
0 1
0 0
0 0
0 1
1 0
0 1
0 1
0 0
0 1
0 0
SAMPLE OUTPUT 
69
14
*/


//Solution: 

#include <iostream>

using namespace std;

int main()
{
	//var declaration: 
	int iTestCases = 0; 

	//Code for Getting the Values: 
	cin >> iTestCases; 
	//cout << iTestCases; 
	if(iTestCases > 10)
	{
		iTestCases = 10;
	}
	if(iTestCases < 1)	
	{
		iTestCases = 1;
	}
	int iGreenCost = 0; 
	int iPurpleCost = 0; 
	
	for(int i=0; i<iTestCases ; i++)
	{
		
		int iTotalParticipant = 0; 
		int iMinPay1 = 0;
		int iMinPay2 = 0;

		
		cin >> iGreenCost;
		cin >> iPurpleCost; 
		//cout << iGreenCost << endl;
		//cout << iPurpleCost << endl;

		cin >> iTotalParticipant;
		//cout << iTotalParticipant << endl; 


		if(iTotalParticipant > 10)
		{
			iTotalParticipant = 10;
		}
		if(iTotalParticipant < 1)
		{
			iTotalParticipant = 1;
		}

		for(int j = 0; j < iTotalParticipant; j++ )
		{
			int iFirstProblem = 0;
			int iSecondProblem = 0; 
			int iCostPerUser = 0;
			cin >> iFirstProblem; 
			cin >> iSecondProblem; 
			//cout << iFirstProblem << endl;
			//cout << iSecondProblem << endl;
			
			//Assinging the GreenCost for First problem 
			if((iFirstProblem == 0 || iFirstProblem == 1)  && 
			(iSecondProblem == 0 || iSecondProblem == 1))
			{ 
				iCostPerUser = ((iFirstProblem * iGreenCost) + (iSecondProblem * iPurpleCost));
			}
			iMinPay1 = iMinPay1 + iCostPerUser; 
			
			//Assigining the Purple Cost for the First problem
			if((iFirstProblem == 0 || iFirstProblem == 1)  && 
			(iSecondProblem == 0 || iSecondProblem == 1))
			{ 
				iCostPerUser = ((iFirstProblem * iPurpleCost) + (iSecondProblem * iGreenCost));
			}
			iMinPay2 = iMinPay2 + iCostPerUser; 
		}
		if(iMinPay1 < iMinPay2)
			cout << iMinPay1 << endl; 
		else
			cout << iMinPay2 << endl ;
	}

	return 0; 
}
