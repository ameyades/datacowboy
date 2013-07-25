#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
#include "dataentry.h"

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

/*cout << "Is your date dynamic? (i.e. does it change over time / other variable)" << endl;
cin >> option1;
if(option1 == "yes")
{
//alpha.directoryconfigure();


}
else
{
//alpha.directoryconfigure();



}*/

return 0;	
}