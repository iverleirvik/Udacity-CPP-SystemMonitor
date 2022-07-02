#include "processor.h"
#include "linux_parser.h"
using namespace std;

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  
int cpu, user, nice, system, idle, iowait, irq, softirq, steal, guest, guest_nice;
string line;
int totald, idled, Total, NonIdle;
float CPU_Percentage = 69;

std::ifstream filestream(LinuxParser::kProcDirectory + LinuxParser::kUptimeFilename);
  if (filestream.is_open()) {
    std::getline(filestream, line);
  	std::istringstream linestream(line);
    
    linestream >> cpu >> user >> nice >> system >> idle >> iowait >> irq >> softirq >> steal >> guest >> guest_nice;
   
    PrevIdle = PrevIdle + previowait;
    idle = idle + iowait;
    PrevNonIdle = prevuser + prevnice + prevsystem + previrq + prevsoftirq + prevsteal;
    NonIdle = user + nice + system + irq + softirq + steal;
    PrevTotal = PrevIdle + PrevNonIdle;
    Total = idle + NonIdle;
    totald = Total - PrevTotal;
    idled = idle - PrevIdle;
    CPU_Percentage = (totald - idled)/totald * 100;

    previowait = iowait;
    prevuser = user;
    prevnice = nice;
    prevsystem = system;
    previrq = irq;
    prevsoftirq = softirq;
    prevsteal = steal;  
  }
  
return CPU_Percentage;
}