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
 * #hours:
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
 for ( int n = 0 ; n < line.length() ; n++ ) {
  if ( line[n] == ' ' ) {
   i = n + 1;
  }
  }
}


int main()
{
 string line;
 int numlines = 0;
 int numuqline = 0;
 int numchar = 0;
 int numwords = 0;

set <string> uqline; //gettting a set for the lines

 while(getline(cin,line)) { //getline turns the paragraph into individual lines; cin,line gets the input from string line, which is the textfile

  ++numlines; //increments the # of lines everytime it loops
  numchar += line.length(); //counts the characters in each line
  uqline.insert(line); //insert lines to a set

 }
 cout << "Number of lines " << numlines << endl; //number of lines
 cout << "Number of characters " << numchar << endl; //number of characters in each line
 cout << "Number of unique lines " << numuqline << endl;
numuqline = uqline.size();
  return 0;
}