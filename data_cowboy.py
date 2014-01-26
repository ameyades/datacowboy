import textblob
from textblob import TextBlob
from Tkinter import *
from random import *
import tkColorChooser 
import sys
import cmath
import math
import operator
import urllib2
from bs4 import BeautifulSoup
import re

master= Tk()
def hex_to_rgb(value):
    value = value.lstrip('#')
    lv = len(value)
    return tuple(int(value[i:i+lv/3], 16) for i in range(0, lv, lv/3))

def rgb_to_hex(rgb):
    return '#%02x%02x%02x' % rgb

opener = urllib2.build_opener()
opener.addheaders = [('User-agent', 'Mozilla/5.0')]

if(sys.argv[3]=="u"):
    url= sys.argv[1]
else:
    url= ('http://en.wikipedia.org/wiki/Tornado' )

ourUrl = opener.open(url).read()

soup = BeautifulSoup(ourUrl)

title = soup.title.text

body = soup.findAll('p')
mydata=''
for i in body:
    i = re.sub('<.*?>', '', str(i))
    #print (str(i) + '\n\n')
    mydata= mydata+str(i)
filename = sys.argv[1]
keyword = sys.argv[2]
if(sys.argv[3]=="u"):
    filename="alice.txt"

#this will read the textfile into a string
with open (filename, "r") as myfile:
    data=myfile.read().replace('\n', '')
udata=data.decode("utf-8")
asciidata=udata.encode("ascii","ignore")
if(sys.argv[3]=="u"):
    asciidata= mydata
print (keyword)
noun_list= set()

zen = TextBlob(asciidata);
adj_list=set()
totalpolarity=0.0
totalcount=0;
addict= dict()
noundict=dict()
def find_polarity(query):
    mypolarity=0.0
    mycount=1;
    for sen in zen.sentences:
        if(sen.lower().find(query.lower())>0):
            bl= TextBlob(str(sen))
            mypolarity= mypolarity+bl.polarity
            mycount= mycount+1
    return mypolarity/mycount


#print(zen.words.count('Alice'));
for sentence in zen.sentences:
    if(sentence.find(keyword)>0):

        #print (sentence.noun_phrases)


        blob = TextBlob(str( sentence))
        totalpolarity=totalpolarity+blob.sentiment.polarity
        totalcount=totalcount+1
        for tag in blob.tags:
            if(str(tag).find("JJ")>0):
                print(tag)
                if(addict.has_key(str(tag[0]).lower())):
                    addict[str(tag[0]).lower()]=addict[str(tag[0]).lower()]+1
                else:
                    addict[str(tag[0]).lower()]=1;
        for words in sentence.noun_phrases:
            noun_list.add(str(words))
            if(noundict.has_key(str(words).lower())):
                noundict[str(words).lower()]=noundict[str(words).lower()]+1
            else:
                noundict[str(words).lower()]=1;
        #print (sentence.polarity)
#print("screw you")
#print (noun_list);
polarity= totalpolarity/totalcount
print(polarity)
#print(noundict)
#print(addict)
frame=Frame(master,width=1410,height=770)
frame.grid(row=0,column=0)
w=Canvas(frame,bg='#FFFFFF',width=1410,height=770,scrollregion=(-9000,-9000,9000,9000))
hbar=Scrollbar(frame,orient=HORIZONTAL)
hbar.pack(side=BOTTOM,fill=X)
hbar.config(command=w.xview)
vbar=Scrollbar(frame,orient=VERTICAL)
vbar.pack(side=RIGHT,fill=Y)
vbar.config(command=w.yview)
w.config(width=1410,height=770)
w.config(xscrollcommand=hbar.set, yscrollcommand=vbar.set)
w.pack(side=LEFT,expand=True,fill=BOTH)
nountuples= [(k, v) for k, v in noundict.iteritems()]
adtuples=[(k, v) for k, v in addict.iteritems()]
sorted_nouns = sorted(nountuples, key=lambda tup: tup[1],reverse=True)
sorted_adj = sorted(adtuples, key=lambda tup: tup[1],reverse=True)
print( sorted_adj)
print (nountuples)
centerwid= 2000/2
centerhei= 1000/2
anglediff= (2*math.pi)/len(noundict)
anglediff2= (2*math.pi)/len(addict)
radius= 175;
rad= 500;
stangle=0.0;
stangle1=0.01;
col8='#2C9B5C'
col6='#319B2C'
col5='#589B2C'
col4='#F5E504'
colneutral='#FF9100'
col3='#FF5A00'
col2='#FF0000'
col1='#0ee1b4'
if(polarity>=-1 and polarity<=-0.75):
    col= col1
elif(polarity>-0.75 and polarity<=-0.5):
    col=col2
elif(polarity>-0.5 and polarity<=-0.25):
    col=col3
elif(polarity>-0.25 and polarity<=0):
    col=col4
elif(polarity>0 and polarity<=0.25):
    col=colneutral
elif(polarity>0.25 and polarity<=0.5):
    col= col5
elif(polarity>0.5 and polarity<=0.75):
    col=col6
else:
    col= col8
i=0;

for word in sorted_nouns:
    polarity = find_polarity(word[0]);
    print( word[0])
    print (polarity)
    cols =''
    if(polarity>=-1 and polarity<=-0.75):
        cols= col1
    elif(polarity>-0.75 and polarity<=-0.5):
        cols=col2
    elif(polarity>-0.5 and polarity<=-0.25):
        cols=col3
    elif(polarity>-0.25 and polarity<=0):
        cols=col4
    elif(polarity>0 and polarity<=0.25):
        cols=colneutral
    elif(polarity>0.25 and polarity<=0.5):
        cols= col5
    elif(polarity>0.5 and polarity<=0.75):
        cols=col6
    else:
        cols= col8
    x= centerwid+(radius*math.cos(stangle));
    y=centerhei+(radius*math.sin(stangle));
    #radius =randint(200,575)
    radius= radius+3
    w.create_text(x,y , anchor=W, font="Purisa", text=word[0], fill=cols)
    w.create_line(x, y, centerwid, centerhei, fill=cols, dash=(4,4))
    i=i+5;
    stangle= stangle+anglediff;
for word in sorted_adj:

    polarity = find_polarity(word[0]);
    print( word[0]+"sadfsf")
    print (polarity)

    cols =''
    if(polarity>=-1 and polarity<=-0.75):
        cols= col1
    elif(polarity>-0.75 and polarity<=-0.5):
        cols=col2
    elif(polarity>-0.5 and polarity<=-0.25):
        cols=col3
    elif(polarity>-0.25 and polarity<=0):
        cols=col4
    elif(polarity>0 and polarity<=0.25):
        cols=colneutral
    elif(polarity>0.25 and polarity<=0.5):
        cols= col5
    elif(polarity>0.5 and polarity<=0.75):
        cols=col6
    else:
        cols= col8
    #rad= randint(600,900);
    x= centerwid+(rad*math.cos(stangle1));
    y=centerhei+(rad*math.sin(stangle1));
    rad= rad+3;
  
    w.create_text(x,y , anchor=W, font="Purisa", text=word[0], fill= cols)
    w.create_line(x, y, centerwid, centerhei, fill=cols, dash=(4,4))
    i=i+5;
    stangle1= stangle1+anglediff2;
   
w.create_text(centerwid, centerhei, anchor=W, font="Purisa",text=keyword,fill=col)

mainloop()