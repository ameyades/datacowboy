#include <iostream>
#include <vector>
#include "searcher.h"
using namespace std;

#include "dataentry.h"

dataentry::dataentry()
{




}


void dataentry::qury()
{


for(int i = 0; i < quals.size(); i++)
{
string theta = quals[i];
searcher yup(theta);


}

for(int j = 0; j < quants.size(); j++)
{
string theta2 = quants[j];


searcher yoo(theta2);


}



}



void dataentry::getstring()
{ 
bool out;
out = false;
cout << "What is the type(s) of qualitative data you are searching for?" << endl;
while(!out)
{
string choice;
string thing;
cin >> thing;
quals.push_back(thing);
cout << "Add more? Y or N" << endl;
cin >> choice;
if(choice == "N" or "no" or "No")
{

out = true;



}






}
}

void dataentry::getquant()
{
bool out;
out = false;
cout << "What is the type(s) of quantitative data you are searching for?" << endl;
while(!out)
{
string choice;
string thing;
cin >> thing;
quants.push_back(thing);
cout << "Add more? Y or N" << endl;
cin >> choice;
if(choice == "N" or "no" or "No")
{

out = true;



}




}













}


void dataentry::getboth()
{

bool out;
out = false;
cout << "What is the type(s) of qualitative data you are searching for?" << endl;
while(!out)
{
string choice;
string thing;
cin >> thing;
quals.push_back(thing);
cout << "Add more? Y or N" << endl;
cin >> choice;
if(choice == "N" or "no" or "No")
{

out = true;



}
}


bool in;
in = false;
cout << "What is the type(s) of quantitative data you are searching for?" << endl;
while(!in)
{
string choice;
string thing;
cin >> thing;
quants.push_back(thing);
cout << "Add more? Y or N" << endl;
cin >> choice;
if(choice == "N" or "no" or "No")
{

in = true;



}
}



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





dataentry::~dataentry()
{



}