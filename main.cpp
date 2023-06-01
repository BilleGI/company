#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include <limits>
#include <fstream>
#include <algorithm>

const std::string name("company.json");

struct DataModel
{
	int year;
	std::string address;
	std::string title;
	std::string activity;
	bool economy;
};

void check(int& data)
{
	while(true)
	{
		if(std::cin.good() && data > 1900 && data <=2023) break;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cout << "Enter the correct year: ";
		std::cin >> data;
	}
}

void checkAddres(std::string& address)
{
	while(true)
	{
		bool flag = true;
		for(int i = 0; i < address.size(); ++i)
		{
			if(address[i] != '.' && address[i] != ',' && !(address[i] >= 'a' && address[i] <= 'z')
					&& !(address[i] >= 'A' && address[i] <= 'Z') && !(address[i]>='0' && address[i]<='9') && address[i] != ' ')
			{
				flag = false;
				break;
			}
		}
		if (flag) break;
		std::cout << "Enter the correct address";
		std::getline(std::cin, address);
	}
}

void check(std::string& mean)
{
	while(true)
	{
		auto it = std::find_if(mean.begin(),mean.end(),[](char const &c)
		{
			return !std::isalpha(c);
		});
		if(it == mean.end()) break;
		std::cout << "Enter the correct mean: ";
		getline(std::cin, mean);
	}
}

void fillData(DataModel& proto)
{
	std::cout << "Enter the year of foundation: ";
	std::cin >> proto.year;
	check(proto.year);
	std::cin.ignore();
	std::cout << "Enter the legal address: ";
	std::getline(std::cin, proto.address);
	checkAddres(proto.address);
	std::cout << "Enter the title company: ";
	std::getline(std::cin, proto.title);
	check(proto.title);
	std::cout << "Enter the type of activity: ";
	std::getline(std::cin, proto.activity);
	check(proto.activity);
	std::cout << "Does the company have foreign economic activity? ((y -1)/(n - 0) ";
	std::cin.ignore();
	std::cin >> proto.economy;
}

void fillFile(nlohmann::json& jsonCompany,DataModel& proto)
{
	jsonCompany["year"] = proto.year;
	jsonCompany["address"] = proto.address;
	jsonCompany["title"] = proto.title;
	jsonCompany["activity"] = proto.activity;
	jsonCompany["economy"] = proto.economy;
}

int main()
{
	DataModel proto;
	fillData(proto);
	std::ofstream file(name, std::ios::app);
	if(!file.is_open())
	{
		std::cerr << "Error! The file did not open." << std::endl;
		exit(1);
	}
	nlohmann::json jsonCompany;
	fillFile(jsonCompany, proto);
	file << jsonCompany;
	return 0;
}
