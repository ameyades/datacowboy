#include <iostream>
#include <vector>
#include "searcher.h"
using namespace std;

#include "dataentry.h"

dataentry::dataentry()
{



}


void dataentry::qury(string n)
{


for(int i = 0; i < quals.size(); i++)
{
string theta = quals[i];
searcher yup(theta);
yup.finder(n);

}

for(int j = 0; j < quants.size(); j++)
{
string theta2 = quants[j];


searcher yoo(theta2);
yoo.finder(n);


}



}



void dataentry::getstring()
{ 
bool out;
out = false;
cout << "What is the type(s) of qualitative data you are searching for?" << endl;
while(!out)
{
cout << "Complete Loop" << endl;
char* choice;
choice = new char [20];
char* thing;
thing = new char [20];
cin >> thing;
quals.push_back(thing);
cout << "Add more? Y or N" << endl;
cin >> choice;
if(choice == "Y")
{

out = false;



}

else
{

break;

}

cout << "Loop Qual" << endl;
//loop
delete [] thing;
delete [] choice;

}

//function


}

void dataentry::getquant()
{
bool out;
out = false;
cout << "What is the type(s) of quantitative data you are searching for?" << endl;
while(!out)
{
cout << "Complete Loop" << endl;
char* choice;
char* thing;
choice = new char[20];
thing = new char[20];

cin >> thing;
quants.push_back(thing);
cout << "Add more? Yes or No" << endl;
cin >> choice;
if(choice == "Yes")
{

out = false;



}

else
{


break;


}

cout << "Loop Quant" << endl;
//loop
delete [] thing;
delete [] choice;

}







//function





}


void dataentry::getboth()
{

bool out;
out = false;
cout << "What is the type(s) of qualitative data you are searching for?" << endl;
while(!out)
{
cout << "Complete Loop" << endl;
char* choice;
char* thing;
choice = new char[20];
thing = new char[20];
cin >> thing;
quals.push_back(thing);
//cin.ignore();
cout << "Add more? Yes or No" << endl;
cin >> choice;
if(choice == "Yes")
{

out = false;



}
else
{


break;


}

cout << "Loop BA" << endl;

//loop
delete [] choice;
delete [] thing;
//cout << thing << endl;
//cout << choice << endl;

}

cout << "between loops" << endl; 


bool in;
in = false;
cout << "What is the type(s) of quantitative data you are searching for?" << endl;
while(!in)
{

cout << "Complete Loop" << endl;	
char* choice2;
char* thing2;
choice2 = new char[20];
thing2 = new char[20];
cin >> thing2;
quants.push_back(thing2);
cout << "Add more? Yes or No" << endl;
cin >> choice2;
if(choice2 == "Yes")
{

in = false;



}
else
{

break;


}

cout << "Loop BB" << endl;
//loop
delete [] choice2;
delete [] thing2;


 }


//function

}









void dataentry::chronic_collector()
{
cout << "What type of units are you planning to plot this data against?" << endl;
cin >> units; 
cout << "How many of these units do you want each division of the x-axis to be?" << endl;
cin >> increment;
cout <<"What is the initial moment you are measuring from?" << endl;
cin >> initial_moment;
cout << "What is the final moment you are measuring to?" << endl;
cin >> final_moment;
total_moments = final_moment - initial_moment;
divisors = total_moments / increment;



}


void dataentry::revup()
{







}




dataentry::~dataentry()
{



}