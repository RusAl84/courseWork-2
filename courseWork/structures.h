#pragma once
#include <vector>
#include <string>
using namespace std;
struct birthday
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
	char * getDate() {
		char* res = new char[11];
		char day1[4];
		char month1[4];
		char year1[6];
		vector <char> result;
		if (day < 10) {
			sprintf_s(day1, "%d%d",0, day);
		}
		else sprintf_s(day1, "%d", day);
		
		if (month < 10) {
			sprintf_s(month1, "%d%d", 0, month);
		}
		else sprintf_s(month1, "%d", month);
		sprintf_s(year1, "%d", year);
		
		
		int i = 0;
		while (day1[i] != '\0') {
			result.push_back(day1[i]);
			i++;
		}
		result.push_back('.');
		i = 0;
		while (month1[i] != '\0') {
			result.push_back(month1[i]);
			i++;
		}
		result.push_back('.');
		i = 0;
		while (year1[i] != '\0') {
			result.push_back(year1[i]);
			i++;
		}
		result.push_back('\0');
		for (int i = 0; i < result.size(); i++) {
			res[i] = result[i];
		}
		return res;
	}
	void setDate(char* date) {
		char day1[3];
		char month1[3];
		char year1[5];
		int j = 0;
		for (int i = 0; i < 2; i++) {
			day1[i] = date[j];
			j++;
		}
		j++;
		for (int i = 0; i < 2; i++) {
			month1[i] = date[j];
			j++;
		}
		j++;
		for (int i = 0; i < 5; i++) {
			year1[i] = date[j];
			j++;
		}
		int day2[3];
		int month2[3];
		int year2[5];
		sscanf_s(day1, "%d", day2);
		sscanf_s(month1, "%d", month2);
		sscanf_s(year1, "%d", year2);
		day = day2[0];
		month = month2[0];
		year = year2[0];
	}
};
struct Subject
{
	const char* subj;
	int grade;
};
struct resSession
{
	int sessionNumber;
	vector<Subject> subj;
};
struct resAllSession
{
	vector<resSession> result;
};