This folder contains my fuzzing results of Mirai malware. 

1. server.py is a fake C&C server and victim's HTTP server used to trigger DoS in Mirai.
2. The folder ```crashes``` contains malformed HTTP responses that trigger DoS in Mirai.
3. The folder ```Mirai``` is slightly modified (makes Mirai easier to fuzz and compile) version of Mirai.
    
    a. You need to run ``` ./build.sh debug telnet``` to be able to compile Mirai and ```debug/mirai.dbg``` to run it.
   
    b. You can find original Mirai code here https://github.com/m0n0ph1/malware-1/tree/master/Mirai
