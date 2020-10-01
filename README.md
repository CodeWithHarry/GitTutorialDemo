# GitTutorialDemo
This is a repository for explaining git on CodeWithHarry

What is Git?
In general, It is a distributed version control system.

From above definition some question arrises:-
1.What is version control?
  Version  control  is  a  system  that  records changes  to  a  file  or  set  of  files  over  time
  so  that  you  can  recall  specific  versions  later.
  
2. What is distributed VCS?
   There are three types of version control method:-
    i. Local VCSs (Example: A time-stamped directory).
    ii. Centralized VCSs (Example: CVS, Subversion, and Perforce).
    iii. Distributed VCSs (Example: Git, Mercurial,Bazaar  or  Darcs).
    
    In a DVCS, clients  don’t  just  check  out  the  latest  snapshot  of  the  files; 
    rather, they  fully mirror  the  repository,  including  its  full  history.  
    Thus,  if  any  server  dies,  and  these  systems  were collaborating  via  that  server, 
    any  of  the  client  repositories  can  be  copied  back  up  to  the  server  to restore it.
    Every clone is really a full backup of all the data.
  
                                             |_____________________|
                                             |   Server Computer   |
                                             |_____________________|
                                             |   Version database  |
                                             |      Version 1      |
                                             |         |           |
                                             |      Version 2      |
                                             |         |           |
                                            /|      Version 3      |\
                                           / |_____________________| \
                                          /                           \
                                         /                             \
                                        /                               \
                            |___________________|            |____________________|
                            |    Computer A     |            |    Computer B      |
                            |       File        |            |       File         |
                            |  _______|_______  |            |  _______|________  |
                            | |   Version DB* | |            | |   Version DB*  | |
                            | |       |       | |            | |       |        | |
                            | |   Version 1   | |            | |   Version 1    | |
                            | |       |       | |            | |       |        | |
                            | |   Version 2   | |            | |   Version 2    | |
                            | |       |       | |            | |       |        | |
                            | |   Version 3   | |            | |   Version 3    | |
                            | |_______________| |            | |________________| |
                            |___________________|            |____________________|
Will continue,
Thanks Harry Bhai                   
                                        
                                        
