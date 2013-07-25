#include <iostream>
#include <vector>
#include "dataentry.h"
#include <fstream>
#include <sstream>
using namespace std;


#include "plotter.h"






plotter::plotter(string righttype, double one, double two)
{
timetype = righttype;
moment1 = one;
moment2 = two;





}

void plotter::objectcreator()
{
int i;
if(moment1 == 0)
{
total_instances = moment2 - moment1 + 1;
}
else
{

total_instances = moment2 - moment1;

}


for(i = 0; i < total_instances; i++)
{




}


}