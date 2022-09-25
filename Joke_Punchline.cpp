

//Joshua Dean
//Homework 4
//CS 2255 T1-22

#include<fstream>
#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
	string jokestr, punchstr;	//variabe for each txt file as string
							
	//define variable to input from each corresponding file
	fstream jokeIN;
	ifstream punchIN;	
	

	jokeIN.open("joke.txt");	//open joke.text
	punchIN.open("punchline.txt");	//open punchline.txt

	if (!jokeIN || !punchIN)	//input validation for if one of the files cant open
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;
		return 1; //exit with code 1
	}

	if (jokeIN)								//if punchline file is open
	{
		while (getline(jokeIN, jokestr))  //loop to read jokeIN(joke.txt) and put it in jokestr
		{
			cout << jokestr << endl;	//output jokestr, which should have the entire contents
		}


		if (punchIN)		//if punchline file is open
		{
			while (getline(punchIN, punchstr))   //loop to read punchIN(punch.txt) and put it in punchstr
			{
				punchIN.seekg(0, ios::end);		//send position to end of file
				punchIN.seekg(-35, ios::cur);	//send position to position 35 from the end
				getline(punchIN, punchstr);		// get next line of text and put in punchstr
				cout << punchstr << endl;		// output punchstr
			}
		}
	}

	
	
		
		

		
		
		
		
	
	
	jokeIN.close();		// close joke file
	punchIN.close();	//close punchline file
     



	 return 0;
}