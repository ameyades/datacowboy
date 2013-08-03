#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Markup.h"
#include <errno.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "dataentry.h"

using namespace std;


#include "user.h"

user::user()
{
 i = 0;


}

int user::directoryconfigure()
{
ifstream fin;
ofstream write;
string dir, filepath;
int num;
DIR *dp;
struct dirent *dirp;
struct stat filestat;
cout << "Which directory are your files located in? (Begin with /home/your username/)" << endl;
cin >> dir;

dp = opendir( dir.c_str() );

if (dp == NULL)
{
	cout << "Error(" <<errno << ") opening" << dir << endl;
	return errno;
}

while ((dirp = readdir(dp)))
{
cout << "hello" << endl;
filepath = dir + "/" + dirp->d_name;

if (stat( filepath.c_str(), &filestat)) continue;
if (S_ISDIR(filestat.st_mode)) continue;

fin.open(filepath.c_str());


uno.qury(filepath.c_str());


fin.close();
//write.open(filepath.c_str());

//write.close();


}

closedir( dp );

return 0; 





}

void user::userinterface()
{
string option;
cout << "Please configure your data search." << endl;
cout << "Are you looking to organize purely qualitative data (type \"ql\"), purely quantitative data (type \"qd\"), or a mix of both? (type \"b\")" << endl;
cin >> option;
if(option == "ql")
{

uno.getstring();


}
else if(option == "qd")
{

uno.getquant();

}
else if(option == "b")
{

uno.getboth();

}





}



user::~user(){



}