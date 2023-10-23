
test: main.c lib/vector_3d.c lib/vector_3d.h
	gcc -Wall -o $@ $^ -Ilib

