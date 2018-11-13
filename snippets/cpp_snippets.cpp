cpp_snippets.cpp


/*
	get input line as string type and convert to char array.	
*/
void inputStringToCharArray() {
	string input_string;
	char stack[n];
	getline(cin, input_string);
	char * cstr = new char [input_string.length()+1];
	strcpy (cstr, input_string.c_str());	
}


