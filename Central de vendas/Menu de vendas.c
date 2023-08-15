#include <stdio.h>
#include <stdlib.h>


int main (){

    int op1, opcaoate150, nparcelas, servicos, horainicio, horadotermino, totalhoras, horasextras, tempoestimado, notas100, notas50, notas20, notas10, notas5, notas2, notas1, troco;
    float valor, desconto, valorcomdesconto, valorpago, troco1, economia, parcela, valorcomjuros, valordasparcelas, valorservico, txdejuros;
    char nome[10];
    const float horaextra=25.00, taxavisita=40.00, formatacao=300.00, limpeza=150.00, instalacao=100.00, conserto=120.00;

do
{


printf("######################### CONTROLE DE VENDAS E ATENDIMENTO ############################\n\n");
printf ("                ######             ##     ##           #######             #########\n");
printf ("                ##                 ##    ##            ##   ##                 ##    \n");
printf ("                ##                 ##   ##             #######                 ##     \n");
printf ("                ######             ######              ##   ##                 ##      \n\n");
printf ("######################################################################################\n\n");
printf ("1 - Vendas\n\n");
printf ("2 - Atendimento\n\n");
printf ("0 - Sair\n\n");
printf ("Selecione a opção desejada:\n\n");
printf ("######################################################################################\n\n");
scanf ("%i", &op1);


    switch (op1)
    {
             
             
        case 1:

    
        do
        {
       
        
        
            printf ("Informe o valor total da sua compra\n");
            scanf ("%f", &valor);
            
                if (valor < 150)
                {   
                 
                       
                    printf ("1. Opcao: a vista com percentual de desconto\n");
                    printf ("2. Opcao: em duas vezes, valor total\n");
                    scanf ("%i", &opcaoate150);
                    

                        switch (opcaoate150)
                        {
                                case 1:
                                printf ("Informe a porcentagem do desconto:\n");
                                scanf ("%f", &desconto);
                                valorcomdesconto=valor-(valor*desconto/100);
                                 printf ("==================== Pagamento à vista com percentual de desconto=====================\n\n");
                                 printf ("Valor da compra: R$ %.2f", valor);
                                 printf ("         Percentual de desconto: %.2f", desconto);
                                 printf ("         Valor total com desconto %.2f\n", valorcomdesconto);
                                 economia=valor-valorcomdesconto;
                                 printf ("Voce economizou R$: %.2f\n", economia);
                                 printf ("Valor pago pelo cliente:");
                                 scanf ("%f", &valorpago);
                                 troco1=valorpago-valorcomdesconto;
                                 printf ("O seu troco eh de R$: %.2f\n\n", troco1);
                                troco=valorpago-valorcomdesconto;
   

                                notas100 = troco / 100;
                                troco = troco % 100;

                                notas50 = troco / 50;
                                troco = troco % 50;

                                notas20 = troco / 20;
                                troco = troco % 20;

                                notas10 = troco / 10;
                                troco = troco % 10;

                                notas5 = troco / 5;
                                troco = troco % 5;

                                notas2 = troco / 2;
                                troco = troco % 2;

                                notas1 = troco;

                                printf("Notas de R$100: %d\n", notas100);
                                printf("Notas de R$50: %d\n", notas50);
                                printf("Notas de R$20: %d\n", notas20);
                                printf("Notas de R$10: %d\n", notas10);
                                printf("Notas de R$5: %d\n", notas5);
                                printf("Notas de R$2: %d\n", notas2);
                                printf("Notas de R$1: %d\n", notas1);

                                 printf ("==================================================================================\n\n");
                                break;
                                    
                                 case 2:
                                 printf("====================== Parcelamento em 2 vezes ==================================\n\n");
                                 printf("valor da compra %.2f\n\n", valor);
                                 parcela=valor/2;
                                 
                                 printf ("Parcela 01 - R$ %.2f", parcela);
                                 printf("            Vencimento: 30 dias\n");
                                 printf ("Parcela 02 - R$ %.2f", parcela);
                                 printf ("           Vencimento: 60 dias\n");
                                 printf("=================================================================================\n\n");
                                break;


                                default:
                                printf ("Opcao Invalida\n");    
                                break;
            
       
                        }
                         
                 
                    
                }
                else{                   
                    

                    printf ("1. Opcao: a vista com percentual de desconto\n");
                    printf ("2. Opcao: em duas vezes, valor total\n");
                    printf ("3. Opcao com mais parcelas\n");
                    scanf ("%i", &opcaoate150);

                        switch (opcaoate150)
                        {
                                case 1:
                                 printf ("Informe a porcentagem do desconto:\n");
                                 scanf ("%f", &desconto);
                                valorcomdesconto=valor-(valor*desconto/100);
                                 printf ("==================== Pagamento à vista com percentual de desconto=====================\n\n");
                                 printf ("Valor da compra: R$ %.2f", valor);
                                 printf ("         Percentual de desconto: %.2f", desconto);
                                 printf ("         Valor total com desconto %.2f\n", valorcomdesconto);
                                 economia=valor-valorcomdesconto;
                                 printf ("Voce economizou R$: %.2f\n", economia);
                                 printf ("Valor pago pelo cliente:");
                                 scanf ("%f", &valorpago);
                                 troco1=valorpago-valorcomdesconto;
                                 printf ("O seu troco eh de R$: %.2f\n\n", troco1);
                                
                                 troco=valorpago-valorcomdesconto;
   

                                notas100 = troco / 100;
                                troco = troco % 100;

                                notas50 = troco / 50;
                                troco = troco % 50;

                                notas20 = troco / 20;
                                troco = troco % 20;

                                notas10 = troco / 10;
                                troco = troco % 10;

                                notas5 = troco / 5;
                                troco = troco % 5;

                                notas2 = troco / 2;
                                troco = troco % 2;

                                notas1 = troco;

                                printf("Notas de R$100: %d\n", notas100);
                                printf("Notas de R$50: %d\n", notas50);
                                printf("Notas de R$20: %d\n", notas20);
                                printf("Notas de R$10: %d\n", notas10);
                                printf("Notas de R$5: %d\n", notas5);
                                printf("Notas de R$2: %d\n", notas2);
                                printf("Notas de R$1: %d\n", notas1);

                                printf ("==================================================================================\n\n");
                                break;
                        
                       
                                 case 2:
                                 printf("====================== Parcelamento em 2 vezes ==================================\n\n");
                                 printf("valor da compra %.2f\n\n", valor);
                                 parcela=valor/2;
                                 
                                 printf ("Parcela 01 - R$ %.2f", parcela);
                                 printf("            Vencimento: 30 dias\n");
                                 printf ("Parcela 02 - R$ %.2f", parcela);
                                 printf ("           Vencimento: 60 dias\n");
                                 printf("=================================================================================\n\n");
                                break;

                               case 3:
                                printf ("=======================Opcao de parcelamento em mais vezes=======================\n\n");
                                printf ("Quantas parcelas voce deseja fazer?\n");
                                scanf ("%i", &nparcelas);
                                printf ("informe a taxa de juros:\n");
                                scanf ("%.2f", &txdejuros);
                                    


                                    if (nparcelas==3)
                                    {
                                        printf ("Valor total da compra: R$ %.2f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor+(valor*txdejuros/100);
                                        printf("              Valor total com juros: R$ %.2f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                    }

                                        else if (nparcelas==4)
                                    {
                                        printf ("Valor total da compra: R$ %.2f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %.2f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                    }

                                    else if (nparcelas==5)
                                {
                                        printf ("Valor total da compra: R$ %.2f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %.2f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                }   

                                            else if (nparcelas==6)
                                {
                                        printf ("Valor total da compra: R$ %.2f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %.2f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                }        

                                        else if (nparcelas==7)
                                {
                                        printf ("Valor total da compra: R$ %.2f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %.2f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                        printf ("Parcela 07 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 210 dias\n");

                                }        

                                       else if (nparcelas==8)
                                {
                                        printf ("Valor total da compra: R$ %.2f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %.2f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                        printf ("Parcela 07 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 210 dias\n");
                                        printf ("Parcela 08 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 240 dias\n");

                                }        

                                       else if (nparcelas==9)
                                {
                                        printf ("Valor total da compra: R$ %.2f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %.2f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                        printf ("Parcela 07 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 210 dias\n");
                                        printf ("Parcela 08 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 240 dias\n");
                                        printf ("Parcela 09 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 270 dias\n");
                                }        

                                     else if (nparcelas==10)
                                {
                                        printf ("Valor total da compra: R$ %.2f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %.2f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                        printf ("Parcela 07 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 210 dias\n");
                                        printf ("Parcela 08 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 240 dias\n");
                                        printf ("Parcela 09 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 270 dias\n");
                                        printf ("Parcela 10 - R$ %.2f", valordasparcelas);
                                        printf ("              Vencimento 300 dias\n");

                                        

                                }        
                                      
                                 

                                else 
                                {
                                    printf ("nº de parcelas invalido\n");
                                }

                                 break;

                                default:
                                printf ("Opcao Invalida\n");    

                                break;
                        }
                        
                }

       } while (opcaoate150 !=0);

    break; // esse é o break da op1
    
//aqui entra a opção 2 do menu principal 
    case 2:

        do
        {
      
        

        printf ("============================================= Serviços =====================================\n\n");
        printf ("1 - FORMATACAO\n\n");
        printf ("2 - LIMPEZA\n\n");
        printf ("3 - INSTALACAO\n\n");
        printf ("4 - CONSERTO\n\n");
        printf ("0 - VOLTAR AO MENU PRINCIPAL\n\n");
        printf ("Informe o servico desejado\n\n");
        printf ("============================================================================================\n\n");
        scanf ("%i", &servicos);
            
            switch (servicos)
            {
                case 1:
                printf ("Insira o nome do cliente\n");
                scanf ("%s", &nome);
                printf ("Nome do cliente: %s\n\n", nome);
                printf ("Seviço: FORMATACAO\n");
                printf ("Tempo estimado, em horas:\n");
                scanf ("%i", &tempoestimado);
                printf ("Informe a hora de inicio:");
                scanf ("%i", &horainicio);
                printf ("Informe a hora do termino:");
                scanf ("%i", &horadotermino);
                totalhoras=horadotermino-horainicio;
                printf ("\n\n");
                horasextras=horadotermino-horainicio-2;

                if (horasextras >=2)
                {
                

                printf("=============================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Serviço: FORMATACAO");
                printf ("                Tempo estimado: %i horas\n\n", tempoestimado);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                printf ("Horas extras: %i", horasextras);
                printf ("                Valor da hora extra: %.2f\n\n", horaextra);
                printf ("Valor do serviço: %.2f", formatacao);
                printf ("                Taxa de visita: %.2f\n\n", taxavisita);
                valorservico=formatacao+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %.2f\n\n", valorservico);
                printf ("========================================================================\n\n");
                }

                    else {
                printf("=============================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Serviço: FORMATACAO");
                printf ("                Tempo estimado: %i horas\n\n", tempoestimado);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                printf ("Horas extras: Nao Houve");
                printf ("                Valor da hora extra: %.2f\n\n", horaextra);
                printf ("Valor do serviço: %.2f", formatacao);
                printf ("                Taxa de visita: %.2f\n\n", taxavisita);
                valorservico=formatacao+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %.2f\n\n", valorservico);
                printf ("========================================================================\n\n");

                    }
            break;
            
            case 2:
                printf ("Insira o nome do cliente\n");
                scanf ("%s", &nome);
                printf ("Nome do cliente: %s\n\n", nome);
                printf ("Seviço: LIMPEZA\n");
                printf ("Tempo estimado, em horas:\n");
                scanf ("%i", &tempoestimado);
                printf ("Informe a hora de inicio:");
                scanf ("%i", &horainicio);
                printf ("Informe a hora do termino:");
                scanf ("%i", &horadotermino);
                totalhoras=horadotermino-horainicio;
                printf ("\n\n");
                horasextras=horadotermino-horainicio-2;

                if (horasextras >= 2)
                {

                printf("============================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Serviço: LIMPEZA");
                printf ("                Tempo estimado: %i horas\n\n", tempoestimado);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                printf ("Horas extras: %i", horasextras);
                printf ("                Valor da hora extra: %.2f\n\n", horaextra);
                printf ("Valor do serviço: %.2f", limpeza);
                printf ("                Taxa de visita: %.2f\n\n", taxavisita);
                valorservico=limpeza+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %.2f\n\n", valorservico);
                printf ("========================================================================\n\n");
              
                }

                else {
                    
                printf("===================================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Serviço: LIMPEZA");
                printf ("                Tempo estimado: %i horas\n\n", tempoestimado);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                printf ("Horas extras: Nao houve");
                printf ("                Valor da hora extra: %.2f\n\n", horaextra);
                printf ("Valor do serviço: %.2f", limpeza);
                printf ("                Taxa de visita: %.2f\n\n", taxavisita);
                valorservico=limpeza+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %.2f\n\n", valorservico);
                printf ("========================================================================\n\n");
                }
                  break;

            case 3: 
                printf ("Insira o nome do cliente\n");
                scanf ("%s", &nome);
                printf ("Nome do cliente: %s\n\n", nome);
                printf ("Seviço: Instalacao\n");
                printf ("Tempo estimado, em horas:\n");
                scanf ("%i", &tempoestimado);
                printf ("Informe a hora de inicio:");
                scanf ("%i", &horainicio);
                printf ("Informe a hora do termino:");
                scanf ("%i", &horadotermino);
                totalhoras=horadotermino-horainicio;
                printf ("\n\n");
                horasextras=horadotermino-horainicio-2;

                    if (horaextra >= 2)
                    {
                printf("=============================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Serviço: ISTALACAO");
                printf ("                Tempo estimado: %i horas\n\n", tempoestimado);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                printf ("Horas extras: %i", horasextras);
                printf ("                Valor da hora extra: %.2f\n\n", horaextra);
                printf ("Valor do serviço: %.2f", instalacao);
                printf ("                Taxa de visita: %.2f\n\n", taxavisita);
                valorservico=instalacao+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %.2f\n\n", valorservico);
                printf ("=========================================================================\n\n");
                    }

                    else {
                printf("============================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Serviço: ISTALACAO");
                printf ("                Tempo estimado: %i horas\n\n", tempoestimado);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                printf ("Horas extras: Nao Houve");
                printf ("                Valor da hora extra: %.2f\n\n", horaextra);
                printf ("Valor do serviço: %.2f", instalacao);
                printf ("                Taxa de visita: %.2f\n\n", taxavisita);
                valorservico=instalacao+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %.2f\n\n", valorservico);
                printf ("=========================================================================\n\n");
                        

                    }
                break;
                    

            case 4:
                printf ("Insira o nome do cliente\n");
                scanf ("%s", &nome);
                printf ("Nome do cliente: %s\n\n", nome);
                printf ("Seviço: Conserto\n");
                printf ("Tempo estimado, em horas:\n");
                scanf ("%i", &tempoestimado);
                printf ("Informe a hora de inicio:");
                scanf ("%i", &horainicio);
                printf ("Informe a hora do termino:");
                scanf ("%i", &horadotermino);
                totalhoras=horadotermino-horainicio;
                printf ("\n\n");
                horasextras=horadotermino-horainicio-2;

                if (horasextras >=2)
                    {
                printf("=============================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Serviço: CONSERTO");
                printf ("                Tempo estimado: %i horas\n\n", tempoestimado);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                printf ("Horas extras: %i", horasextras);
                printf ("                Valor da hora extra: %.2f\n\n", horaextra);
                printf ("Valor do serviço: %.2f", conserto);
                printf ("                Taxa de visita: %.2f\n\n", taxavisita);
                valorservico=conserto+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %.2f\n\n", valorservico);
                printf ("========================================================================\n\n");
                    }

                    else{   
                printf("===========================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Serviço: CONSERTO");
                printf ("                Tempo estimado: %i horas\n\n", tempoestimado);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                printf ("Horas extras: Nao Houve");
                printf ("                Valor da hora extra: %.2f\n\n", horaextra);
                printf ("Valor do serviço: %.2f", conserto);
                printf ("                Taxa de visita: %.2f\n\n", taxavisita);
                valorservico=conserto+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %.2f\n\n", valorservico);
                printf ("========================================================================\n\n");
                    }

                break;

            default:
            printf ("\n");

                break;
            }

                    
        } while (servicos !=0);
break;
default:
printf ("Sair\n ");
    break;
}

} while (op1!=0);


}