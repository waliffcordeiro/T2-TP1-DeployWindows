# Trabalho-TP1
Repositório para versionamento do trabalho da disciplina de TP1 Unb 2019.1

# Alunos

Pedro Augusto Ramalho Duarte 17/0163717

Waliff Cordeiro Bandeira 17/0115810

# Atividades

Linux: https://github.com/PedroAugustoRamalhoDuarte/Trabalho-TP1
Windows: https://github.com/waliffcordeiro/T2-TP1-DeployWindows


A camada de apresentação foi codificada em QT com auxilio da IDE QtCreator, e a camada de serviço em sqlite3
Os códigos estão dentro da pasta Trabalho-TP1

1- Codificar as classes de camada da apresentação

* Os arquivos dessa camada se encontram dividos nas seguintes extensões .h, .cpp, .iu
    + Os .h estão divididos dentro da pasta include em viewAutenticacao.h, viewEventos.h, viewUsuario.h e viewVendar.h cada um representando 
    um subsistema
    + Os .cpp dentro da pasta source com os nomes viewAutenticacao.cpp, viewEventos.cpp, viewUsuario.cpp, viewVendas.cpp
    + E os .ui dentro da pasta ui, que são arquivos xml para definir a interface gráfica

2- Codificar as interfaces entra a camada de apresentação e a camada de seriço
* Se encontram na pasta include no arquivo Interfaces_Servicos.h
* Já a interface entra a camada de apresentação e a controladora  se encontra em include/Interfaces_Apresentacao.h

3- Codificar as classes da camada de serviço
* As .h se encontram na include nos seguintes arquivos Model.h, ModelAutenticacao.h, ModelEventos.h, ModelUsuario.h, modelVendas.h
* As .cpp se encontram na source nos seguintes arquivos Model.cpp, ModelAutenticacao.cpp, ModelEventos.cpp, ModelUsuario.cpp, modelVendas.cpp
* A model.h serve em uma herença para reaproveitar alguns métodos
     
4- Elaborar teste fumaça (smoke test)
* Encontra na raiz com o nome Smoke Test.pdf

5 - Código integrado funciona corretamente segundo o teste fumaça (smoke test).
* Não é possível compilar o código pois para enviar o QT de forma que fosse viável para
compilar seria necessário enviar mais de 5 GB de libs e dlls. Para tanto enviamos um executável, 
será possível acessá-lo via codeblocks (clicando em run (setinha verde)). Caso o programa não rode 
via run você poderá executá-lo indo no diretório Executavel e executando o programa SistemaIngresso.exe 
