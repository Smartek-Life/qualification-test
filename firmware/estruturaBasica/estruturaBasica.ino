/**
 * @brief SUBSTITUIR O TEXTO ABAIXO POR "ESTES SAO MEU E-MAIL DE CONTATO"
 *        PARA SUA SEGURANCA, COLOQUE ABAIXO O SEU E-MAIL
 *        POIS ALGUNS E-MAIL ENVIADOS PODEM SER DIFERENTES DO E-MAIL DO GITHUB
 * @param E_MAIL_DE_CONTATO meu_e_mail_contato@provedor.dominio
 * @param E_MAIL_GITHUB meu_e_mail_github@provedor.dominio
*/

//DEFINIR UMA DIRETIVA DE PRE-PROCESSAMENTO DE QUAL DESAFIO ESTA SENDO CUMPRIDO

typedef struct
{
  /*
     Estados                             AC AL AM AP BA CE DF ES GO MA MG MS MT PA PB PE PI PR RJ RN RO RR RS SC SE SP TO
     Numero                               0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
     VARIAVEL #VAR_01 PARA REPRESENTAR A CONFGURACAO DO ESTADO DO CANDIDATO
     DEVE SER PREENCHIDA NO DESAFIO 01
  */
#VAR_01

  /*
     VARIAVEL #VAR_02 PARA SALVAR O PRIMEIRO NOME DO CANDIDATO
     DEVE SER PREENCHINA NO DESAFIO 01
  */
#VAR_02

  struct
  {
    /*
       VARIAVEL #VAR_03 DEVE SER UM BOOLEANO PARA SALVAR O DIA DA SEMANA QUE FOI ENVIADO O DESAFIO
       SEGUINDO O PADRAO DE DIAS> DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO
       DEVE SER PREENCHIDA NO DESAFIO 01
    */
    bool #VAR_03
  } diasDaSemana[/*DEFINIR O TAMANHO DO VETOR DA SEMANA*/];

  struct
  {
    /*
       VARIAVEL #VAR_04 PARA STATUS DO ACIONAMENTO
       VARIAVEL #VAR_05 PARA QUAL I/O RECEBERA O COMANDO
       PREENCHA OS PADROES DE ACIONAMENTO A SEU CRITERIO.
       ESSAS VARIAVEIS SERAO UTILIZADAS NO DESAFIO 01 e 02
    */
#VAR_04
#VAR_05
  } acionamentos[/*DEFINIR O TAMANHO DO VETOR PARA 4 ACIONAMENTOS*/];
} desafios_t;

typedef struct
{
  /*
    ESTRUTURA PARA SALVAR O SSID E A SENHA DO WIFI PARA UTILIZAR NO DESAFIO 2
    #VAR_06
    #VAR_07
  */
#VAR_06
#VAR_07
} setupWiFi;

/*
 * ESSA ESTRUTURA E OPCIONAL PARA DEFINICAO DE ARMAZENAMENTO
*/
typedef struct
{
  //STRUCTS
} dataBase;

//VOCE DEVE DEFINIR AS ESTRUTURAS QUE ACREDITA SEREM NECESSARIAS PARA CUMPRIR COM O DESAFIO
#STRUCTS

void setup(void)
{

}

void loop(void)
{

}
