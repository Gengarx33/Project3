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
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <set>
using std::set;

// write this function to help you out with the computation.
unsigned long countWords(const string& s, set<string>& wl);

int main()
{
  string line;

 int numlines = 0;
 int numchar = 0;
 while(getline(cin,line)) {
  numlines++;
  cout << "Number of lines" << numlines << endl;
  numchar += line.length;
  cout << "Number of characters" << numchar << endl;


 int numberlines = 0;

 while(getline(cin,line)) {
  numberlines++;
  cout << "Number of lines" << numberlines << endl;

 }

	return 0;
 }
