#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
	// Strings
	string user_input;
	string school_domain = "@sonoma.edu";
	
	// Conditions
	bool domain_requirement = false;
	bool valid_username = true;
	
	//Counter
	int char_match_counter = 0;
	
	// User Input
	cout << "Enter E-Mail Address: ";
	cin >> user_input;
	
	// Input Validation
	
	// Set j to the end of the required domain
	int j = school_domain.length() - 1;
	
	// For loop traversing from the end of the user's email
	for (int i = user_input.length() - 1; i >= 0; i--) {
		
		// If the school's domain is still being traversed
		if (j >= 0) {
			// If the character at the index match, update the match counter and the school domain index
			if (user_input[i] == school_domain[j]) {
				char_match_counter++;
				j--;
				
				// If all characters match, the domain condition has been met
				if (char_match_counter == school_domain.length()) {
					domain_requirement = true;
				}
			}
			// If any character in the domain doesn't match, terminate the for loop
			else {
				break;
			}
		}
		
		// If the domain traversal has ended and the username contains an invalid character, terminate the for loop
		if (i < ((user_input.length() - 1) - (school_domain.length() - 1)) && ((isupper(user_input[i])) || (!isalpha(user_input[i])))) {
			valid_username = false;
			break;
		}
	}
	
	// If all conditions have been met
	if (domain_requirement == true && valid_username == true) {
		cout << "Success" << endl;
	}
	// If any, or all, of the conditions have not been met
	else{
		cout << "Unsuccessful" << endl;
		
		// If the domain is invalid
		if (domain_requirement == false) {
			cout << "Invalid domain. Please use @sonoma.edu" << endl;
		}
		// If the username is invalid
		if (valid_username == false) {
			cout << "Invalid characters. Please make sure you have entered the correct username and that there are no uppercase letters!" << endl;
		}
	}
	
	return 0;
}
