#include <iostream>
#include <string>
#include <fstream>

void	ft_WriteInFile(std::ofstream &outfile, std::string line, std::string s2, std::string s1)
{
	int i = 0;
	while (line[i] != '\0')
	{
		if (line.find(s1, i) == (size_t)i)
		{
			int len_s2 = s2.length();
			for (int j = 0; j < len_s2; j++)
			{
				outfile << s2[j];
			}
			i += s1.length();
		}
		else
		{
			outfile << line[i];
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string s1 = av[2];
	if (s1.empty())
	{
 		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);	
	}

	std::string s2 = av[3];
	std::ifstream infile(av[1]);
	std::string outname = std::string(av[1]) + ".replace";

	if (!infile.is_open())
	{
		std::cerr << "Error: cannot open file" << std::endl;
		return (1);
	}
	std::ofstream outfile(outname.c_str());
	std::string line;
	while(std::getline(infile, line))
	{
		ft_WriteInFile(outfile, line, s2, s1);
		outfile << "\n";
	}
	return (0);
}

