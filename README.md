# Udacity-CPP-SystemMonitor
Udacity-CPP-SystemMonitor

The uptime for the processes seems to loose its format.
The second thing is that the processor seems to only return 0. 
I have tried to troubeshoot it by displaying totald and itald seperately,
which worked, but when I calculate the percentage it comes back as zero.

I have used this webpages:

https://stackoverflow.com/questions/16726779/how-do-i-get-the-total-cpu-usage-of-an-application-from-proc-pid-stat/16736599#16736599
https://stackoverflow.com/questions/23367857/accurate-calculation-of-cpu-usage-given-in-percentage-in-linux
https://stackoverflow.com/questions/41224738/how-to-calculate-system-memory-usage-from-proc-meminfo-like-htop/41251290#41251290

I have tried to troubleshoot the problem adressed in the recent return of the submition. I have never met 
the problem in the submition feedback, but I have tried to fix it. The  problem can come from the point that 
we are using two different spaces for running the program. I saw a post where they said that removing 0 from 
the return in string functions will fix it. Since I am not able to see this errors myself we will
have to work together to make this submission pass.
