# Datastructure
Algorithm and programming in C language  


##  How to EASILY compile C language in unix-like system:  
1.Write a shell script for compile  

	
	#!/bin/sh   
	for params
	do
	gcc -g -o out -Wall $params
	done
	./out
	rm -rf out*
	
2.Move it to /usr/local/bin, in my case, the script's name is damu. Then give the script execute permission.  


	mv damu /usr/local/bin/damu  
	cd /use/local/bin  
	chmod u+x damu


3.Compile the C script with only one shell command now  


	damu *.c <argv[1]> <argv[2]> ...

   
