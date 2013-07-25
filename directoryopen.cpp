#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <errno.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
using namespace std;

#include "directoryopen.h"



directoryopen::directoryopen()
{





}


int directoryopen::manualupdate()
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

fin.close();
write.open(filepath.c_str());

write.close();


}

closedir( dp );

return 0;

}


int directoryopen::autoupdate()
{


}

void directoryopen::output()
{


	
}

directoryopen::~directoryopen()
{



}