#include <iostream>
#include <limits>
#include "headers/AnsLogSource.h"

unsigned int AnsLogSource::instance_count;
const unsigned int AnsLogSource::instance_count_max = numeric_limits<unsigned int>::max();

AnsLogSource::AnsLogSource(const char* source_name, unsigned int log_level)
{
	this->className = source_name;
	this->log_level = log_level;

	if (instance_count == instance_count_max)
	{
		cout << 
			"                      === FATAL CRASH ==\n"
			"AnsLogSource instance count grew to max unsigned int, meaning that a\n"
			"HUGE number of log sources have been created, implying that something\n"
			"has gone very VERY wrong.\n"
			<< endl;
		exit(1);
	}
	this->instance = ++instance_count;

}

void AnsLogSource::log(string tag, string payload)
{
	cout << "[" << tag << "] " << "<" << this->className << "_" << this->instance
		<< "> " << payload << "\n";
}

void AnsLogSource::logInfo(string payload)
{
	if (log_level > 1) return;
	this->log("INFO", payload);
}

void AnsLogSource::logWarn(string payload)
{
	if (log_level > 2) return;
	this->log("WARN", payload);
}

void AnsLogSource::logFatal(string payload)
{
	if (log_level > 3) return;
	this->log("FATAL", payload);
}
