#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp

  int PrevIdle;
  int previowait;
  
  int PrevNonIdle;
  int prevuser;
  int prevnice;
  int prevsystem;
  int previrq;
  int prevsoftirq;
  int prevsteal;
  
  int PrevTotal;
  int prevNonIdle;
  
  // TODO: Declare any necessary private members
 private:
   
};

#endif