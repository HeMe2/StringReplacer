/*
 * StringReplacerExample.cpp
 *
 *  Created on: Sep 24, 2017
 *      Author: HeMe2
 */

#include "../inc/StringReplacer.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;
using namespace StringReplacer;

/**
 * This program demonstrates the capabilities and the usage of the functions in the StringReplacer.h
 */

int main(void) {
	// create string with many special characters
	string testString = "original: ÜÖÄ üöä ÜÖÄ ß ñáò";
	// print the original string
	cout << testString << endl;

	// replace one substring with something else
	string changedString = replaceSubstrings(testString, "ñ", "ene");
	changedString = replaceSubstrings(changedString, "original: ", "changed:  ");

	// replace a substring that occurs multiple times with something
	changedString = replaceSubstrings(changedString, "Ü", "Ue");

	// replace a substring that occurs multiple times with something that contains the substring again
	changedString = replaceSubstrings(changedString, "Ö", "ÖÖ");

	// print the new string with the replacements
	cout << changedString << endl;
	return 0;
}

