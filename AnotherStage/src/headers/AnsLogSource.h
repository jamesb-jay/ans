#pragma once
#include <string>

using namespace std;

class AnsLogSource
{
private:
	static unsigned int instance_count;
	static const unsigned int instance_count_max;
	unsigned int instance;
	short int log_level;
protected:
	const char* className;

	AnsLogSource(const char* source_name, unsigned int log_level);
	void log(string tag, string payload);
	void logInfo(string payload);
	void logWarn(string payload);
	void logFatal(string payload);
};

