using namespace std;

class dataentry
{
public:

vector <string> quals; //qualitative search strings
vector<string>  quants; //quantitative search strings
vector <string> qa;
double qc;
double qd;	
int i;
double initial_moment;
double final_moment;
double total_moments;
double increment;
int divisors;
string units;


std::vector <string> chars; 
std:: vector< vector<double> > ints;





dataentry();
void chronic_collector();

void getstring();
void getquant();
void getboth();
~dataentry();

};
