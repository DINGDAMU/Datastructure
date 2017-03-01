# Datastructure
Algorithm and programming in C language  

## Programming tool  
[Vim](https://github.com/vim/vim) with [c.vim](https://github.com/vim-scripts/c.vim) plugin


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

##Topics  

- [x] [array](https://github.com/DINGDAMU/Datastructure/tree/master/array)  
- [x] [linked list](https://github.com/DINGDAMU/Datastructure/tree/master/linked_list)  
- [x] [stack](https://github.com/DINGDAMU/Datastructure/tree/master/stack)
- [x] [queue](https://github.com/DINGDAMU/Datastructure/tree/master/queue)
- [x] [recursive](https://github.com/DINGDAMU/Datastructure/tree/master/recursive)
- [x] [recursive and iteration](https://github.com/DINGDAMU/Datastructure/tree/master/recursive_iteration)
- [x] [sort]()
- [x] [search]() 
- [x] [binary spanning tree]()
- [x] [graph]()

   
