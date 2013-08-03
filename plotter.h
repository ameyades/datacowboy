#ifndef PLOTTER_H
#define PLOTTER_H


using namespace std;


class plotter
{
private: 
string timetype;	
double moment1;
double moment2;
int total_instances;
dataentry alpha;

public:

plotter (string righttype, double one, double two);
void objectcreator();
vector <dataentry> timeline;



};

#endif