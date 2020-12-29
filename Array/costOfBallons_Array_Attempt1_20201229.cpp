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
