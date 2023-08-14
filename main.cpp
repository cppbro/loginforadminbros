#include <iostream>
#include <string>
std::string getUsername()
{
	std::cout << "Please enter your username: ";
	std::string username;
	std::cin >> username;

	return username;
}
std::string getPassword()
{
	std::cout << "Please enter your password: ";
	std::string password;
	std::cin >> password;

	return password;
}
std::string testLogin(std::string username, std::string password)
{
	if (username == "admin bro" && password == "admin bro")
		std::cout << "You have been logged in";
	else
		std::cout << "Error, incorrect username or password";
	return 0;

}


int main()
{
	std::string username { getUsername() };
	std::string password { getPassword() };

	testLogin(username,password);

	return 0;
}
