exe: std_main.o std_add.o std_del.o std_show.o std_mod.o std_save.o std_sort.o
	cc std_main.o std_add.o std_del.o std_show.o std_mod.o std_save.o std_sort.o -o exe
std_main.o: std_main.c
	cc -c std_main.c
std_add.o: std_add.c
	cc -c std_add.c
std_del.o: std_del.c
	cc -c std_del.c
std_show.o: std_show.c
	cc -c std_show.c
std_mod.o: std_mod.c
	cc -c std_mod.c
std_save.o: std_save.c
	cc -c std_save.c
std_sort.o: std_sort.c
	cc -c std_sort.c
clean:
	@echo "Cleaning up..."
	rm -v *.o exe
