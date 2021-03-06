#include <unistd.h>
#include <cstddef>
#include <set>
#include <string>
#include <vector>

#include "process.h"
#include "processor.h"
#include "system.h"
#include "linux_parser.h"

using std::set;
using std::size_t;
using std::string;
using std::vector;
/*You need to complete the mentioned TODOs in order to satisfy the rubric criteria "The student will be able to extract and display basic data about the system."

You need to properly format the uptime. Refer to the comments mentioned in format. cpp for formatting the uptime.*/

// TODO: Return the system's CPU
Processor& System::Cpu() { return cpu_; }

// TODO: Return a container composed of the system's processes
vector<Process>& System::Processes() { 
  vector<int> pids = LinuxParser::Pids();
  processes_.clear();
  for (long unsigned int i = 0; i < pids.size(); i++) {
    if (!LinuxParser::Ram(pids[i]).empty()) {
      Process process(pids[i]);
      processes_.push_back(process);
    }
  }
  
  std::sort(processes_.rbegin(), processes_.rend());
  return processes_;
}

// TODO: Return the system's kernel identifier (string)
std::string System::Kernel() { 
  std::string valueKernel = LinuxParser::Kernel();
  
  return valueKernel; 
}

// TODO: Return the system's memory utilization
float System::MemoryUtilization() { 
  float MU = LinuxParser::MemoryUtilization();
  
  return MU;
}

// TODO: Return the operating system name
std::string System::OperatingSystem() {
	std::string valueOS = LinuxParser::OperatingSystem();
  
  	return valueOS;
}

// TODO: Return the number of processes actively running on the system
int System::RunningProcesses() { 
  int procsRunning = LinuxParser::RunningProcesses();
  
  return procsRunning;
}

// TODO: Return the total number of processes on the system
int System::TotalProcesses() { 
	int totProcesses = LinuxParser::TotalProcesses();
  
  return totProcesses;
}

// TODO: Return the number of seconds since the system started running
string System::UpTime() {
  string upTime = LinuxParser::UpTime();
  
  return upTime;
}
