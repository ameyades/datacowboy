#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

#include  "Markup.h"
using namespace std;
#include "dataentry.h"
#include "searcher.h"
#include "plotter.h"
#include "user.h"


int main()
{
string name;
string option1;
cout << "Welcome to Data Cowboy! What is your name?" << endl;
cin >> name; 
user alpha;
alpha.username = name;
alpha.userinterface();
alpha.directoryconfigure();


return 0;	
}