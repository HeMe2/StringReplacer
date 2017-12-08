# StringReplacer

Provides substring search and substring replacement for C++ strings, because this is not included in the language standard.

This code may be practical for character encoding problems with special characters in some languages, such as: ö, ü, ä, ß, ñ, á, ô, è, æ, Æ, Å, etc.

An example for the usage is located in the example folder.

## Functions

* `replaceSubstrings` Replaces the provided substring with the replacement string in the origin string. The replacement may be an empty string.
* `searchForSubstring` Searches for a substring byte by byte and returns its start position byte number in the original string. If the toSearch string is not contained in the origin string origin.size() is returned. Only the first substring that is contained, will be considered. 
* `matches` Returns if the two strings match in the number of given bytes. Strings do not necessarily need to be null terminated, but in case they are not the result may be inaccurate. (This is more or less the same as the strncmp function from the stdstring.h header file, as I noticed later.)