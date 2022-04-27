dir: # make dir name=
	mkdir $(name)
	touch $(name)/$(name)-toc.md
	touch $(name)/$(name)-todo.md
	touch $(name)/$(name)-notes.md

FLAGS := -std=c++17

organizer:
	g++ -o notes-organizer notes-organizer.cpp $(FLAGS)