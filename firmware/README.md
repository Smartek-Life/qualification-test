# Avaliacao de qualificacao

Disclaimer: Por padrao de programacao e versionamento de codigo, a descricao nao possui acentuacao ou caracteres especiais.

Criterios de avaliacao:
* Qualidade do codigo desenvolvido;
* Manutenibilidade e legibilidade do codigo;
* Desejavel: Um codigo utilizando boas praticas/padroes para linguagem C/C++ para reduzir os metodos;
	* Aplicacao de MISRA-C;
	* Aplicacao de clean code;
* Extra: Utilizar mecanismos de garantia de operacao.

Etapas que devem ser rigorosamente cumpridas:
*	Devem ser criados repositorios separadamente para cada desafio no github;
*	Os repositorios devem ser privados ate a data final de avaliacao 31/12/2021. Apos tal data fica a seu criterio;
	* Caso tenha alguma restricao para essa data, entrar em contato.
*	Deve ser convidado o usuario https://github.com/jPerotto para acompanhar, assim facilita tirar dúvidas.

OBSERVACOES
Para tirar duvidas estarei disponível via whatsapp (62) 98577-7262, envia uma mensagem que fazemos uma videochamada.

ORIENTACAO EXTRA
Qualquer atualizacao de prazos, regras ou mudanca no teste, sera publicado um commit.
Entao sincronize o desafio para recebe-las. Qualquer duvida, entrar em contato.


# //===========--- #AMBIENTE DE DESENVOLVIMENTO #
Requisitos>
*	Possuir alguma placa de prototipagem com ES8266 de 4MB para executar os desafios;
	* caso sua placa tiver um ESP8266 com flash superior ou inferior a 4MB consultar orientacoes se achar necessario;
*	Deve ser utilizado o ESP8266 com as libraries/core do arduino: [GITHUB](https://github.com/esp8266/Arduino);
	* release que deve ser utilizada: [GITHUB](https://github.com/esp8266/Arduino/releases/tag/2.7.4);
*	Preferencialmente ser desenvolvido utilizando Arduino IDE ou Microsoft Visual Studio Code. Para quem utilizar ATOM ou outras plataformas, o firmware deve ser compativel para compilar na IDE do arduino.
*	Para realizacao do testes, o candidato estara livre para utilizar qualquer recurso da linguagem de programacao C/C++ com bibliotecas do arduino ESP8266, e demais recursos disponiveis do sdk espressif.
*	Para quando necessario pode ser utilizado bibliotecas publicas do github ou outros repositorios. Nesse caso, deve incluir uma pasta libraries ou colocar o link de acesso/download logo afrente do #include <lib.h>;
*	A configuracao da placa deve ser a seguinte:
	* Placa: Generic ESP8266
	* Builtin Led: 2
	* Upload Speed: 115200
	* CPU Frequency: 160MHz
	* Crystal Freqyency: 40 MHz
	* Flash Size: 4MB (FS: 1MB OTA:~ 1019KB)
	* Flash Mode: DIO
	* Flash Frequency: 40MHz
	* Reset Method: dtd (aka nodemcu)
	* Debug port: (Disabled)
	* Core Debug Leval: Nenhum
	* lwIP Variant: v2 Lower Memory
	* VTables: Flash
	* Exception: Legacy (Nnew can return nullptr)
	* Erase Flash: Only Sketch
	* Espressif FW: nonos-sdk.2.2.1+100(190?03)
	* SSL Suport: All SSL ciphers (most compatible)


# //===========--- #APRESENTACAO DOS DESAFIOS # 
Deve estar separado cada desafio com alguma forma de controle de versao, seja por separacao de codigo, branch do GitHub, ou qualquer outro metodo conhecido.

# //===========--- #CRIAR SUA ESTRUTURA BASICA # 
Descricao: Estrutura basica de configuracao a ser utilizada em todos os desafios. Estamos disponibilizando a forma em que a estrutura deve ser construida,
porem aonde esta #VAR_(0,1...n) voce deve criar uma variavel compativel com um tipo e um nome que acredita representar sua atividade, a descricao no comentario explicara o que ela deve fazer.
A estrutura deve ser construida completamente antes do desafio 01. Retirar os comentarios de explicacao, substituindo por comentarios do que aquela variavel faz, se julgar necessario.


# //===========--- #DESAFIO 01 (FILE SYSTEM) # 
Neste desafio voce deve preencher a estrutura de configuracao dos desafios e do WiFi, salvar em algum dos sistemas de armazenamento do ESP8266, que possa ser recuperado apos um reset.
Pode ser utilizado a lib EEPROM com NVS, NVS direto, SPIFFS, ou algum outro metodo para salvar na flash do ESP8266.

* Resultados esperados:
	* Um codigo que compila;
	* Preencha estrutura com os valores padroes definidas;
	* Salvar na flash;
	* Deve conter um controle de versao de configuracao;
	* Apos um reset carrega os dados para a estrutura sem redefinir os padroes.
* Pontos extas:
	* Utilizar metaprogramacao;
	* Utilizar mais que um file system para seguranca das credenciais do setupWiFi:
		* Gerenciais uma possivel recuperacao das credenciais do wifi.


# //===========--- #DESAFIO 02 (WiFi / MQTT) #
Neste desafio voce deve carregar a estrutura do file system criada no desafio anterior para a estrutura de configuracao do wifi e do desafio;
utilizar a estrutura de configuracao para se conectar ao wifi;
utilizar o protocolo mqtt para se conectar ao broker "broker.mqtt-dashboard.com" para receber configuracoes atraves de um topico "A SUA ESCOLHA";
Salvar os comandos MQTT em um arquivo **a sua escolha** em uma pasta Doc dentro do repositorio para o desafio especifico.


Voce deve definir o formato da mensagem de configuracao.
A configuracao que sera recebida deve ser alteracao do "desafios[N_DESAFIOS]" para a variavel #VAR_04 e #VAR_05.
conter na configuracao a possibilidade de:
* selecionar qual posicao do vetor do desafios_t desafios[x] recebera a configuracao;
* selecionar qual sera o acionamento que recebera a configuracao;
* alterar o status atual.

## //===========--- RESULTADOS ESPERADOS #
- [ ] Um codigo que compila no ambiente especificado;
- [ ] Salve dados no file system;
- [ ] Carregue os dados do file system apos um reset;
- [ ] Conecte ao WiFi com ssid e senha da estrutura de configuracao carregado do file system;
- [ ] Conecte no broker MQTT indicado;
- [ ] Receba a configuracao somente se validada de alguma forma;
- [ ] Receba o comando atraves do MQTT para #VAR_04 E #VAR_05 de acionamento;
- [ ] salvar as alteracoes no file system caso existirem.
