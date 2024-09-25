#include <stdio.h>
#include <stdlib.h>


int main (){

    int op1, opcaoate150, nparcelas, servicos, horainicio, horadotermino, totalhoras, horaextra=25, horasextras, taxavisita=40, formatacao=300, limpeza=150, instalacao=100, conserto=120;
    float valor, desconto=0.85, valorcomdesconto, economia, parcela, valorcomjuros, valordasparcelas, valorservico;
    char nome[10];

printf("######################### CONTROLE DE VENDAS E ATENDIMENTO ############################\n\n");
printf ("                ######             ##     ##           #######             #########\n");
printf ("                ##                 ##    ##            ##   ##                 ##    \n");
printf ("                ##                 ##   ##             #######                 ##     \n");
printf ("                ######             ######              ##   ##                 ##      \n\n");
printf ("######################################################################################\n\n");
printf ("1 - Vendas\n\n");
printf ("2 - Atendimento\n\n");
printf ("Selecione a opção desejada:\n\n");
printf ("######################################################################################\n\n");
scanf ("%i", &op1);

    switch (op1)
    {
        case 1:
            printf ("Informe o valor total da sua compra\n");
            scanf ("%f", &valor);
            
                if (valor < 150)
                {
                    printf ("1. Opcao: a vista com 15%% de desconto\n");
                    printf ("2. Opcao: em duas vezes, valor total\n");
                    scanf ("%i", &opcaoate150);

                        switch (opcaoate150)
                        {
                                case 1:
                                    valorcomdesconto=valor*desconto;
                                 printf ("==================== Pagamento à vista com 15%% de desconto=====================\n\n");
                                 printf ("Valor da compra: R$ %.2f", valor);
                                 printf ("         Percentual de desconto: 15%%");
                                 printf ("         Valor total com desconto %.2f\n", valorcomdesconto);
                                 economia=valor-valorcomdesconto;
                                 printf ("Voce economizou R$: %.2f\n", economia);
                                printf ("==================================================================================");
                                break;
                        
                       
                                 case 2:
                                 printf("====================== Parcelamento em 2 vezes ==================================\n\n");
                                 printf("valor da compra %.2f\n\n", valor);
                                 parcela=valor/2;
                                 
                                 printf ("Parcela 01 - R$ %2.f", parcela);
                                 printf("            Vencimento: 30 dias\n");
                                 printf ("Parcela 02 - R$ %2.f", parcela);
                                 printf ("           Vencimento: 60 dias\n");
                                 printf("=================================================================================\n\n");
                                break;

                                default:
                                printf ("Opcao Invalida\n");    
                                break;
                        }

                }

                else{

                    printf ("1. Opcao: a vista com 15%% de desconto\n");
                    printf ("2. Opcao: em duas vezes, valor total\n");
                    printf ("3. Opcao com mais parcelas\n");
                    scanf ("%i", &opcaoate150);

                        switch (opcaoate150)
                        {
                                case 1:
                                    valorcomdesconto=valor*desconto;
                                 printf ("==================== Pagamento à vista com 15%% de desconto=====================\n\n");
                                 printf ("Valor da compra: R$ %.2f", valor);
                                 printf ("         Percentual de desconto: 15%%");
                                 printf ("         Valor total com desconto %.2f\n", valorcomdesconto);
                                 economia=valor-valorcomdesconto;
                                 printf ("Voce economizou R$: %.2f\n", economia);
                                printf ("==================================================================================");
                                break;
                        
                       
                                 case 2:
                                 printf("====================== Parcelamento em 2 vezes ==================================\n\n");
                                 printf("valor da compra %.2f\n\n", valor);
                                 parcela=valor/2;
                                 
                                 printf ("Parcela 01 - R$ %2.f", parcela);
                                 printf("            Vencimento: 30 dias\n");
                                 printf ("Parcela 02 - R$ %2.f", parcela);
                                 printf ("           Vencimento: 60 dias\n");
                                 printf("=================================================================================\n\n");
                                break;

                               case 3:
                                printf ("=======================Opcao de parcelamento em mais vezes=======================\n\n");
                                printf ("Quantas parcelas voce deseja fazer?\n");
                                scanf ("%i", &nparcelas);
                                    
                                    if (nparcelas==3)
                                    {
                                        printf ("Valor total da compra: R$ %2.f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$\n\n %2.f", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                    }

                                    else if (nparcelas==4)
                                    {
                                        printf ("Valor total da compra: R$ %2.f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$\n\n %2.f", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                    }

                                    else if (nparcelas==5)
                                {
                                        printf ("Valor total da compra: R$ %2.f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %2.f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                }   

                                            else if (nparcelas==6)
                                {
                                        printf ("Valor total da compra: R$ %2.f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %2.f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                }        

                                        else if (nparcelas==7)
                                {
                                        printf ("Valor total da compra: R$ %2.f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %2.f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                        printf ("Parcela 07 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 210 dias\n");

                                }        

                                        else if (nparcelas==8)
                                {
                                        printf ("Valor total da compra: R$ %2.f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %2.f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                        printf ("Parcela 07 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 210 dias\n");
                                        printf ("Parcela 08 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 240 dias\n");

                                }        

                                       else if (nparcelas==9)
                                {
                                        printf ("Valor total da compra: R$ %2.f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %2.f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                        printf ("Parcela 07 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 210 dias\n");
                                        printf ("Parcela 08 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 240 dias\n");
                                        printf ("Parcela 09 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 270 dias\n");
                                }        

                                     else if (nparcelas==10)
                                {
                                        printf ("Valor total da compra: R$ %2.f", valor);
                                        printf ("             Numero de parcelas: %i", nparcelas);
                                        valorcomjuros=valor*1.15;
                                        printf("              Valor total com juros: R$ %2.f\n\n", valorcomjuros);
                                        valordasparcelas=valorcomjuros/nparcelas;
                                        printf("Parcela 01 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 30 dias\n");
                                        printf("Parcela 02 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 60 dias\n");
                                        printf("Parcela 03 - R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 90 dias\n");
                                        printf ("Parcela 04 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 120 dias\n");
                                        printf ("Parcela 05 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 150 dias\n");
                                        printf ("Parcela 06 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 180 dias\n");
                                        printf ("Parcela 07 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 210 dias\n");
                                        printf ("Parcela 08 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 240 dias\n");
                                        printf ("Parcela 09 R$ %2.f", valordasparcelas);
                                        printf ("              Vencimento 270 dias\n");
                                        printf ("Parcela 10 R$ %2.f", valordasparcelas);
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


    break; // esse é o break da op1


//aqui entra a opção 2 do menu principal 
    case 2:
        printf ("============================================= Serviços =====================================\n\n");
        printf ("1 - FORMATACAO\n\n");
        printf ("2 - LIMPEZA\n\n");
        printf ("3 - INSTALACAO\n\n");
        printf ("4 - CONSERTO\n\n");
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
                printf ("Informe a hora de inicio:");
                scanf ("%i", &horainicio);
                printf ("Informe a hora do termino:");
                scanf ("%i", &horadotermino);
                totalhoras=horadotermino-horainicio;
                printf ("\n\n");

                printf("===================================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                horasextras=horadotermino-horainicio-2;
                printf ("Horas extras: %i", horasextras);
                printf ("                Valor da hora extra: %i\n\n", horaextra);
                printf ("Valor do serviço: %i", formatacao);
                printf ("                Taxa de visita: %i\n\n", taxavisita);
                valorservico=formatacao+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %2.f", valorservico);

            break;
            
            case 2:
                printf ("Insira o nome do cliente\n");
                scanf ("%s", &nome);
                printf ("Nome do cliente: %s\n\n", nome);
                printf ("Seviço: LIMPEZA\n");
                printf ("Informe a hora de inicio:");
                scanf ("%i", &horainicio);
                printf ("Informe a hora do termino:");
                scanf ("%i", &horadotermino);
                totalhoras=horadotermino-horainicio;
                printf ("\n\n");

                printf("===================================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                horasextras=horadotermino-horainicio-2;
                printf ("Horas extras: %i", horasextras);
                printf ("                Valor da hora extra: %i\n\n", horaextra);
                printf ("Valor do serviço: %i", formatacao);
                printf ("                Taxa de visita: %i\n\n", taxavisita);
                valorservico=limpeza+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %2.f", valorservico);
                break;

            case 3: 
                printf ("Insira o nome do cliente\n");
                scanf ("%s", &nome);
                printf ("Nome do cliente: %s\n\n", nome);
                printf ("Seviço: Instalacao\n");
                printf ("Informe a hora de inicio:");
                scanf ("%i", &horainicio);
                printf ("Informe a hora do termino:");
                scanf ("%i", &horadotermino);
                totalhoras=horadotermino-horainicio;
                printf ("\n\n");

                printf("===================================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                horasextras=horadotermino-horainicio-2;
                printf ("Horas extras: %i", horasextras);
                printf ("                Valor da hora extra: %i\n\n", horaextra);
                printf ("Valor do serviço: %i", formatacao);
                printf ("                Taxa de visita: %i\n\n", taxavisita);
                valorservico=instalacao+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %2.f", valorservico);
                break;

            case 4:
                printf ("Insira o nome do cliente\n");
                scanf ("%s", &nome);
                printf ("Nome do cliente: %s\n\n", nome);
                printf ("Seviço: Conserto\n");
                printf ("Informe a hora de inicio:");
                scanf ("%i", &horainicio);
                printf ("Informe a hora do termino:");
                scanf ("%i", &horadotermino);
                totalhoras=horadotermino-horainicio;
                printf ("\n\n");

                printf("===================================Ordem de serviço========================\n\n");
                printf ("Data: 01/01/02");
                printf ("                Nome do cliente: %s\n\n", nome);
                printf ("Hora inicial: %i", horainicio);
                printf ("                Hora Final: %i\n\n", horadotermino);
                horasextras=horadotermino-horainicio-2;
                printf ("Horas extras: %i", horasextras);
                printf ("                Valor da hora extra: %i\n\n", horaextra);
                printf ("Valor do serviço: %i", formatacao);
                printf ("                Taxa de visita: %i\n\n", taxavisita);
                valorservico=conserto+taxavisita+horasextras*horaextra;
                printf ("O valor total do servico eh de: %2.f", valorservico);
                break;

            default:
            printf ("Opcao invalida\n");
            
                break;
            }

break;
default:
printf ("Opcao invalida\n ");

    break;
}




}