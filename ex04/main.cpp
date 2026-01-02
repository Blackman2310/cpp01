#include <iostream>
#include <string>
#include <fstream>

int main(int ac,char **av)
{
    if(ac != 4)
        return 1;
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty()) {
        std::cerr << "Error: s1  be empty." << std::endl;
        return 1;
    }
    std::ifstream readfile(filename);

    if(!readfile.is_open())
    {
        std::cerr << " error: read file not open " << std::endl;
        return 1; 
    }
    std::string line;
    std::string content;
    while (std::getline(readfile,line))
    {
        content += line ;
        if(!readfile.eof())
            content += '\n'; 
    }

    std::string res;
    int i = 0;
    int last = 0;
    while((i = content.find(s1,last)) != std::string::npos )
    {
        res.append(content,last, i - last);
        res += s2;
        last = i + s1.length();
    }
    res.append(content,last);
    //std::cout << res << "\n";

    std::string outfile = filename + ".replace";

    std::ofstream ofile(outfile.c_str());

    ofile << res ;
} 