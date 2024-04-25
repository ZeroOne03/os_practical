: '
  Name:- Shaikh Zaid Muddaris Husian
  Roll no:- 23dco06
  AIM:- IMPLEMENTATION OF SWITCH CASE USING SHELL SCRIPT
 
'


#!/bin/bash

while true; do
  echo "1.OS Version, release number, Kernel Version "
  echo "2.Display top 10 Process in descending order"
  echo "3.Display Processes with highest memory usage"
  echo "4.Display Current logged user and Login Name"
  echo "5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory"
  echo "6.Exit"
  read -p "Enter your choice (1-6): " ch

  case $ch in
    1)
      echo "OS Name is:"
      uname;
      uname -s;
      echo "Release Number is:"
      uname -a;
      echo "kernel Version"
      uname -r;;
    2)
      echo "Top 10 Processes in descending order:"
      ps axl | head -n 10;;
    3)
      echo "Display Processes with highest memory usage"
      ps -eo pid,ppid,cmd,%mem,%cpu --sort=-%mem | head ;;
    4)
      echo "Logged in users are :-\n"
      who -u;
      echo "Number of Logged in users are:-\n"
      who -u | wc -l;;
    5)
      echo "Current Shell :-\n"
      which bash;
      echo "Current home directory-\n"
      whoami;
      echo "Current operating system type is-\n"
      uname;
      echo "Current Path setting and current working directory is -\n"
      pwd;;
    6)
      echo "Exiting the script."
      exit;;
    *)
      echo "Invalid choice";;
  esac
done


:' OUTPUT:-

aiktc@aiktc20:~/Downloads/23dco06$ bash 2.sh
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in descending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
6.Exit
Enter your choice (1-6): 1
OS Name is:
Linux
Linux
Release Number is:
Linux aiktc20 5.4.0-80-generic #90-Ubuntu SMP Fri Jul 9 22:49:44 UTC 2021 x86_64 x86_64 x86_64 GNU/Linux
kernel Version
5.4.0-80-generic
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in descending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
6.Exit
Enter your choice (1-6): 2
Top 10 Processes in descending order:
F   UID     PID    PPID PRI  NI    VSZ   RSS WCHAN  STAT TTY        TIME COMMAND
4     0       1       0  20   0 171016 12876 -      Ss   ?          0:02 /sbin/init splash
1     0       2       0  20   0      0     0 -      S    ?          0:00 [kthreadd]
1     0       3       2   0 -20      0     0 -      I<   ?          0:00 [rcu_gp]
1     0       4       2   0 -20      0     0 -      I<   ?          0:00 [rcu_par_gp]
1     0       6       2   0 -20      0     0 -      I<   ?          0:00 [kworker/0:0H-kblockd]
1     0       9       2   0 -20      0     0 -      I<   ?          0:00 [mm_percpu_wq]
1     0      10       2  20   0      0     0 -      S    ?          0:00 [ksoftirqd/0]
1     0      11       2  20   0      0     0 -      I    ?          0:20 [rcu_sched]
1     0      12       2 -100  -      0     0 -      S    ?          0:00 [migration/0]
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in descending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
6.Exit
Enter your choice (1-6): 3
Display Processes with highest memory usage
    PID    PPID CMD                         %MEM %CPU
  12630    1853 /usr/lib/firefox/firefox     6.0  8.0
  15078   12630 /usr/lib/firefox/firefox -c  5.7  2.9
   1359       1 /usr/sbin/mysqld             4.7  0.3
  12939   12630 /usr/lib/firefox/firefox -c  3.5  1.1
  17866   12630 /usr/lib/firefox/firefox -c  3.4  4.5
   1063     963 /usr/lib/xorg/Xorg -core :0  2.2  0.2
  12805   12630 /usr/lib/firefox/firefox -c  1.6  0.1
  17779   12630 /usr/lib/firefox/firefox -c  1.4  0.1
  12831   12630 /usr/lib/firefox/firefox -c  1.4  0.1
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in descending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
6.Exit
Enter your choice (1-6): 4
Logged in users are :-\n
aiktc    tty7         2024-02-27 14:40  old         1537 (:0)
Number of Logged in users are:-\n
1
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in descending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
6.Exit
Enter your choice (1-6): 5
Current Shell :-\n
/usr/bin/bash
Current home directory-\n
aiktc
Current operating system type is-\n
Linux
Current Path setting and current working directory is -\n
/home/aiktc/Downloads/23dco06
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in descending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
6.Exit
Enter your choice (1-6): 6
Exiting the script.

'
