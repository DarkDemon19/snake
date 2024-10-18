run : bin/programa
	./bin/programa

bin/programa : main.cpp include/*.hpp
	g++ main.cpp -Iinclude -o bin/programa