.DEFAULT_GOAL := build
prog = 'calcul'
clean:
	@echo "cleaning up ...."
	del .\calcul.exe

run :
	@echo "running ${prog} program for you"
	.\calcul.exe

build:
	@echo "building the ${prog} programme "
	g++ -o calcul.exe main.cpp consol_hundler.cpp numeric.cpp