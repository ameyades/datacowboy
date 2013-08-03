#include <iostream>
#include <vector>
#include <stdio.h>
#include "Markup.h"


using namespace std;

#include "searcher.h"

searcher::searcher()
{
ignore[0] =  "be";
ignore[1] =  "do";
ignore[2] =  "have";
ignore[3] =  "say";
ignore[4] =  "get";
ignore[5] =  "make";
ignore[6] =  "go";
ignore[7] =  "know";
ignore[8] =  "take";
ignore[9] =  "see";
ignore[10] =  "come";
ignore[11] =  "think";
ignore[12] =  "look";
ignore[13] =  "want";
ignore[14] =  "give";
ignore[15] =  "use";
ignore[16] =  "find";
ignore[17] =  "tell";
ignore[18] =  "ask";
ignore[19] =  "work";
ignore[20] =  "seem";
ignore[21] =  "feel";
ignore[22] =  "try";
ignore[23] =  "leave";
ignore[23] =  "call";
ignore[24] =  "a";
ignore[25] =  "I";
ignore[26] =  "of";
ignore[27] =  "it";
ignore[28] =  "as";
ignore[29] =  "at";
ignore[30] =  "by";
ignore[31] =  "but";
ignore[32] =  "to";
ignore[33] =  "my";
ignore[34] =  "us";
ignore[35] =  "in";
ignore[36] =  "or";
ignore[37] =  "who";
ignore[38] =  "so";
ignore[39] =  "he";
ignore[40] =  "she";
ignore[41] =  "how";




}

searcher::searcher(string init)
{

ignore[0] =  "be";
ignore[1] =  "do";
ignore[2] =  "have";
ignore[3] =  "say";
ignore[4] =  "get";
ignore[5] =  "make";
ignore[6] =  "go";
ignore[7] =  "know";
ignore[8] =  "take";
ignore[9] =  "see";
ignore[10] =  "come";
ignore[11] =  "think";
ignore[12] =  "look";
ignore[13] =  "want";
ignore[14] =  "give";
ignore[15] =  "use";
ignore[16] =  "find";
ignore[17] =  "tell";
ignore[18] =  "ask";
ignore[19] =  "work";
ignore[20] =  "seem";
ignore[21] =  "feel";
ignore[22] =  "try";
ignore[23] =  "leave";
ignore[23] =  "call";
ignore[24] =  "a";
ignore[25] =  "I";
ignore[26] =  "of";
ignore[27] =  "it";
ignore[28] =  "as";
ignore[29] =  "at";
ignore[30] =  "by";
ignore[31] =  "but";
ignore[32] =  "to";
ignore[33] =  "my";
ignore[34] =  "us";
ignore[35] =  "in";
ignore[36] =  "or";
ignore[37] =  "who";
ignore[38] =  "so";
ignore[39] =  "he";
ignore[40] =  "she";
ignore[41] =  "how";



}

void searcher::finder(string n)
{


CMarkup xml;

bool bSuccess = xml.Load(n);

string sXML = xml.GetData();

cout << sXML << endl;

	
}






