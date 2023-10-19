
test.exe: main.c lib/vector_3d.c
	gcc -Wall -o $@ $^ -Ilib