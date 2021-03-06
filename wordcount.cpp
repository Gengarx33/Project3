/*
 * CSc103 Project 3: wordcount++
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *StackOverflow
 *Cpp forums
 *upperclassmen and friends

 * Finally, please indicate approximately how many hours you spent on this:
 * #hours: 10 or so, 3 days
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <set>
using std::set;

// write this function to help you out with the computation.VVVV
unsigned long countWords(const string& s, set<string>& wl) {
 int i = 0;
 int numwords = 0;
 for ( int n = 0 ; n < s.length() ; n++ ) {
  if ( (s[n] == ' ' || s[n] == '\t') && s[i] != ' ' )  {
   string t;
   t = s.substr(i,n);
   wl.insert(t); // inserts the words into the set
   i = n + 1;
   numwords += 1;
  }
  else if ( n == s.length () - 1 ){
   numwords += 1;
   string t;
   t = s.substr(i);
   wl.insert(t); //inserts the last word into the set
   }
   else if ( s[i] == ' ' || s[i] == '\t' ) {
    i++;
   }
  }
  return numwords;
}

int main()
{
 string line;
 int numlines = 0;
 int numuqline = 0;
 int numchar = 0;
 int numwords = 0;

set <string> uqwords;
set <string> uqline; //gettting a set for the lines

 while(getline(cin,line)) { //getline turns the paragraph into individual lines; cin,line gets the input from string line, which is the textfile
  ++numlines; //increments the # of lines everytime it loops
  numchar += line.length() + 1; //counts the characters in each line
  uqline.insert(line); //insert lines to a set
  numwords += countWords(line,uqwords);
 }
numuqline = uqline.size();
 cout << numlines << '\t' << numwords << '\t' << numchar << '\t' << numuqline << '\t' << uqwords.size() << endl;
  return 0;
}