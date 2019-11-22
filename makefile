CC = g++ #compilador

CPPFLAGS = -Wall -std=c++11 #flags

#executavel
AP3: funcionario.o veterinario.o animal.o anfibio.o anfibioNativo.o gerenciar.o  main.o 
	@$(CC) $(CPPFLAGS) -Iinclude funcionario.o veterinario.o animal.o anfibio.o anfibioNativo.o gerenciar.o main.o  -o AP3											
		
	@mv *.o build/ #enviando os .o para pasta objects
#main.cpp anfibioNativo.cpp 

# o -I include diz que a biblioteca está nessa pasta

funcionario.o: src/funcionario.cpp 
	@clear
	@$(CC) $(CPPFLAGS) -c -Iinclude src/funcionario.cpp
	@echo "Instalando funcionarios..."

veterinario.o: src/veterinario.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/veterinario.cpp
	@echo "Instalando veterinario..."

animal.o: src/animal.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/animal.cpp
	@echo "Instalando animal..."

anfibio.o: src/anfibio.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/anfibio.cpp
	@echo "Instalando anfibio..."
	
anfibioNativo.o: src/anfibioNativo.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/anfibioNativo.cpp
	@echo "Instalando Anfibio nativo..."
	
gerenciar.o: src/gerenciar.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/gerenciar.cpp
	@echo "Instalando gerenciar..."



main.o: src/main.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/main.cpp
	@echo "Aguarde..."
	@echo "Pronto!!!\nPara mais informações digite o comando --> ./AP3\n"
clear:
	@rm -rf AP3
	@echo "Diretorio limpo"
