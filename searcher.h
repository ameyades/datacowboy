#ifndef SEARCHER_H
#define SEARCHER_H


using namespace std;


class searcher //for quals
{
private:

string it;
vector<string> ignore;
vector<string> inupdown;
vector<string> insideways;



public:


searcher();

searcher(string init);

void finder(string n);






};

#endif