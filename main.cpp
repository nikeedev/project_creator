#include <iostream>
#include <fstream>

constexpr auto app_version = "1.0";

void createFile(std::string name, std::string file_type, std::string input)
{
	std::ofstream file(name + file_type);
	file << input << std::endl;
	file.close();
}


int main()
{	
	std::cout << "Project Creator v" << app_version << std::endl;
	
	std::cout << "\nYou can create 3 hello programs with 3 diffrent programming languages: " << std::endl;
	std::cout << " 1. Python \n 2. C++ (this program is built on it :D) \n or \n 3. Javascript \n" << std::endl;

	std::cout << " Write language here: ";
	std::string answer;
	std::cin >> answer;

	std::string file_name;

	if (answer == "py" || answer == "python" || answer == "1") {
		std::cout << "Creating file for Python Hello World" << std::endl;
		std::cout << "Name the file: ";
		std::cin >> file_name;
		std::cout << "Creating the file, and adding code..." << std::endl;

		createFile(file_name, ".py", "# By Project Creator, made by nikeedev \n# @2022  \n\nprint(\"Hello World!\")\n");
		std::cout << "Finished! File " << file_name << ".py, are successfully created!" << std::endl;
	}

	else if (answer == "c++" || answer == "cpp" || answer == "2") {
		std::cout << "Creating file for C++ Hello World" << std::endl;
		std::cout << "Name the file: ";
		std::cin >> file_name;
		if (!(file_name == "main") && !(file_name == "updater"))
		{
			std::cout << "Creating the file, and adding code..." << std::endl;

			createFile(file_name, ".cpp", "// By Project Creator, made by nikeedev \n// @2022 \n\n#include <iostream>\n\nint main() {\n\tstd::cout << \"Hello World\" << std::endl;\n}    \n");
			
		}
		else
		{
			std::cout << "Cancelled process! Cannot use file name" << file_name << ".cpp, because thats the name of main file!" << std::endl;
		}
	}

	else if (answer == "js" || answer == "javascript" || answer == "3") {
		std::cout << "Creating file for Javascript Hello World" << std::endl;
		std::cout << "Name the file: ";
		std::cin >> file_name;
		std::cout << "Creating the file, and adding code..." << std::endl;

		createFile(file_name, ".js", "// By Project Creator, Made by nikeedev \n// @2022  \n\nconsole.log(\"Hello World!\")\n");
		std::cout << "Finished! File " << file_name << ".js, are successfully created!" << std::endl;
	}

	else {
		std::cout << " Didn't recognize the word as the one in the list.\n" << std::endl;
	}

	std::cout << " Proceeding to exit..." << std::endl;
	std::cout << " Exited app, press ENTER to exit.\n";
	std::cin.get();

	return 0;

}
