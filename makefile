vowel_count.out:vowel_count.o
	gcc vowel_count.o -o vowel_count.out
vowel_count.o:vowel_count.c
	gcc -c vowel_count.c    
clean:
	rm -f vowel_count.o vowel_count.out MP0_output.txt
