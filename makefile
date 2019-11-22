CC = g++ #compilador

CPPFLAGS = -Wall -std=c++11 #flags

#executavel
 
AP3: funcionario.o veterinario.o animal.o animalSilvestre.o animalNativo.o animalExotico.o anfibio.o anfibioExotico.o reptilNativo.o reptilExotico.o mamiferoNativo.o mamiferoExotico.o aveNativo.o aveExotico.o reptil.o mamifero.o ave.o anfibioNativo.o gerenciar.o  main.o 
	@$(CC) $(CPPFLAGS) -Iinclude funcionario.o veterinario.o animal.o animalSilvestre.o animalNativo.o animalExotico.o anfibio.o anfibioNativo.o anfibioExotico.o reptilNativo.o reptilExotico.o mamiferoNativo.o mamiferoExotico.o aveNativo.o aveExotico.o reptil.o mamifero.o ave.o gerenciar.o main.o  -o AP3											
		
	@mv *.o build/ #enviando os .o para pasta objects
#main.cpp anfibioNativo.cpp 

# o -I include diz que a biblioteca está nessa pasta

funcionario.o: src/funcionario.cpp 
	@$(CC) $(CPPFLAGS) -c -Iinclude src/funcionario.cpp
	@echo "Instalando funcionarios..."

veterinario.o: src/veterinario.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/veterinario.cpp
	@echo "Instalando veterinario..."

animal.o: src/animal.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/animal.cpp
	@echo "Instalando animal..."

animalSilvestre.o: src/animalSilvestre.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/animalSilvestre.cpp
	@echo "Instalando Animal silvestre..."
animalNativo.o: src/animalNativo.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/animalNativo.cpp
	@echo "Instalando Animal nativo..."

animalExotico.o: src/animalExotico.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/animalExotico.cpp
	@echo "Instalando Animal exotico..."

#segunda classe
reptil.o: src/reptil.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/reptil.cpp
	@echo "Instalando Reptil..."
mamifero.o: src/mamifero.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/mamifero.cpp
	@echo "Instalando Mamifero..."
ave.o: src/ave.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/ave.cpp
	@echo "Instalando Ave..."
anfibio.o: src/anfibio.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/anfibio.cpp
	@echo "Instalando anfibio..."

#terceira classe
anfibioNativo.o: src/anfibioNativo.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/anfibioNativo.cpp
	@echo "Instalando Anfibio nativo..."
anfibioExotico.o: src/anfibioExotico.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/anfibioExotico.cpp
	@echo "Instalando Anfibio nativo..."
reptilNativo.o: src/reptilNativo.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/reptilNativo.cpp
	@echo "Instalando Reptil Exotico..."
reptilExotico.o: src/reptilNativo.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/reptilExotico.cpp
	@echo "Instalando Reptil exotico..."
mamiferoNativo.o: src/mamiferoNativo.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/mamiferoNativo.cpp
	@echo "Instalando Mamifero nativo..."
mamiferoExotico.o: src/mamiferoExotico.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/mamiferoExotico.cpp
	@echo "Instalando Mamifero exotico..."
aveNativo.o: src/aveNativo.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/aveNativo.cpp
	@echo "Instalando Ave nativo..."
aveExotico.o: src/aveExotico.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/aveExotico.cpp
	@echo "Instalando Ave exotico..."

gerenciar.o: src/gerenciar.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/gerenciar.cpp
	@echo "Instalando gerenciar..."

main.o: src/main.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/main.cpp
	@echo "Aguarde..."
	@clear
	@echo "Pronto!!!\nPara mais informações digite o comando --> ./AP3\n"
clear:
	@rm -rf AP3
	@echo "Diretorio limpo"
