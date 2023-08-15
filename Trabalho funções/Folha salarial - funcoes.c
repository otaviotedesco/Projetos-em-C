#include <stdio.h>
#include <string.h>


int main (){

//-----------------------Funcoes------------------------------
float CalculoSalarioBruto (int horastrabalhadas, float valorhora);
float CalculoINSS (float salariobruto);
float CalculoIPRF(float salario, int dependentes);

//----------------------Variaveis----------------------------
int opcaomenu1, opcaomenu2;
char razaosocial[51], endereco [51], nomefuncionario [51], cargo [51], cnpj[51];
int mes;
int dianascimento, mesnascimento, anonascimento;
int horastrabalhadas;
float valorhora;
float valortotalhorasextras;
float salarioliquido;
float salariobruto;
float descontoinss;
float descontoIR;
float valortotaldesconto = descontoinss + descontoIR;
int dependentes;
float salarioreal=salarioliquido-descontoIR;

do
{
printf ("----------------------FOLHA DE PAGAMENTO------------------\n\n");
printf ("1 - Configurar dados da empresa\n");
printf ("2 - Calcular salário mensal\n");
printf ("3 - Imprimir contracheque\n");
printf ("4 - Sair\n");
printf ("Digite sua opcao\n");
scanf ("%i", &opcaomenu1);
fflush(stdin);

    switch (opcaomenu1)
    {
    case 1: //------------------------------------------CASE 1 - DADOS DA EMPRESA----------------------------
     
        printf ("Insira os dados da empresa\n");
        printf ("Razao social: ");
        fgets (razaosocial, 51, stdin);
        fflush(stdin);
        printf ("CNPJ - (somente numeros): ");
        fgets (cnpj, 51,stdin);
        fflush(stdin);
        printf ("Endereco: ");
        fgets (endereco, 51, stdin);
        fflush(stdin);

        puts(razaosocial);

        break;
    
            case 2://------------------------------------------CASE 2 - CALCULO SALÁRIO MENSAL------------------
            printf ("Informe o mes atual: ");
            scanf ("%i", &mes);
            fflush(stdin);
            printf ("Informe o nome completo do funcionario: ");
            fgets (nomefuncionario, 51, stdin);
            fflush(stdin);
            printf ("Cargo do funcionario: ");
            fgets (cargo, 51, stdin);
            fflush(stdin);
            printf ("Dia de nascimento: ");
            scanf ("%i", &dianascimento);
            fflush(stdin);
            printf ("Mes de nascimento: ");
            scanf ("%i", &mesnascimento);
            fflush(stdin);
            printf ("Ano de nascimento: ");
            scanf ("%i", &anonascimento);
            fflush(stdin);
            //----------------------------------SWITCH CASE DENTRO DO MENU 2---------------------------------------
           
                printf ("\n");
                printf ("Certo! Vamos fazer mais algumas coisas antes de imprimir o contrachque\n\n");
                
                do
                {
                    
                printf ("1 - Calcular salario bruto mensal\n");
                printf ("2 - Calcular INSS\n");
                printf ("3 - Calcular IRPF\n");
                printf ("4 - Voltar ao menu anterior\n");
                printf ("Digite sua opcao\n");
                scanf ("%i", &opcaomenu2);
                fflush(stdin);
                
                        switch (opcaomenu2)
                        {
                        case 1: //----------------- CALCULO SALARIO----------------------
                            {
                            printf ("Informe as horas trabalhadas: ");
                            scanf ("%i", &horastrabalhadas);
                            fflush(stdin);
                            printf ("Informe o valor da hora: ");
                            scanf ("%f", &valorhora);
                            fflush(stdin);

                            salariobruto=CalculoSalarioBruto(horastrabalhadas,valorhora);

                           printf ("O Salario Bruto do Funcionario foi: %.2f", salariobruto);
                           printf ("\n");
                             
                            break;
                          }
                        case 2: //----------------- CALCULO INSS ----------------------
                            printf ("Aqui vamos fazer o calculo para fins de INSS\n");
                            
                                salarioliquido = CalculoINSS(salariobruto);

                             printf ("O Salario liquido do Funcionario foi: %.2f", salarioliquido);
                           printf ("\n");

                            break;
                        case 3: //----------------- CALCULO IRPF ----------------------
                         printf ("Aqui vamos fazer o calculo para fins de IPRF\n");
                         printf ("Nao precisamos inserir o salario liquido pois ja temos esse dado\n");
                         printf ("Informe quantos dependentes voce tem: ");
                         
                         scanf("%i", &dependentes);
                         fflush(stdin);

                         descontoIR = CalculoIPRF(salarioliquido, dependentes);
                         
                         printf("O desconto do Imposto de Renda é de: R$ %.2lf\n", descontoIR);
                         printf ("\n");

                            break;

                            return 0;
                        
                        default: //-----------------------------------------ESSE É O DAFAULT DA OPCAO MENU 2 -----------------------------
                         break;
                         

                        }

                        } while (opcaomenu2 !=4);
            case 3://------------------------------------------CASE 3 -IMRPIMIR CONTRACHEQUE----------------------
            
            printf ("------------------------DADOS DA EMPRESA----------------------------\n\n");
            puts (razaosocial);
            puts (endereco);
            puts (cnpj);
            printf ("------------------------DADOS DO FUNCIONARIO----------------------------\n\n");
            puts (nomefuncionario);
            puts (cargo);
            printf ("%i/%i/%i\n", dianascimento, mesnascimento, anonascimento);
            printf ("------------------------INFORMACOES FINANCEIRAS----------------------------\n\n");
            
            printf ("Valor das horas extras: %.2f\n", valortotalhorasextras);
            descontoinss=salariobruto-salarioliquido;
            printf ("Desconto INSS: %.2f\n", descontoinss);
            printf ("Desconto IPRF: %2.f\n", descontoIR);
            printf ("Valores descontados: %2.f\n", valortotaldesconto);
            printf ("Valor a receber: %.2f\n", salarioreal);

        break; // break do case 3 - contracheque

    
    default:
        break; //--------------------------- esse é o break da op menu 1----------------
    }

} while (opcaomenu1 !=4);

return 0;

} 

//-------------------------CALCULO SALARIO-------------------------------------
float CalculoSalarioBruto(int horastrabalhadas, float valorhora){

    float salariobruto;
    int horasextras = 0; 
    int horasextras2 = 0;
    float valortotalhorasextras;
    
    
    
    if (horastrabalhadas > 0 && horastrabalhadas < 220)
    {
        salariobruto=horastrabalhadas*valorhora;
       
    }
    else if (horastrabalhadas >= 220 && horastrabalhadas < 240)
    {
        horasextras = horastrabalhadas - 220;
        salariobruto = horastrabalhadas*valorhora + (horasextras*(valorhora*1.25));  
        valortotalhorasextras = (horasextras*(valorhora*1.25));
                                    
        printf ("Horas extras 25: %i\n", horasextras);
        printf ("Valor total horas extras %2.f\n ", valortotalhorasextras);
    }

     else if (horastrabalhadas >= 240)
    {
        horasextras = 20;
        horasextras2 = horastrabalhadas-240;
        salariobruto = horastrabalhadas*valorhora + (horasextras*(valorhora*1.25) + (horasextras2*(valorhora*1.50)));
        valortotalhorasextras = (horasextras * (valorhora * 1.25)) + (horasextras2 * (valorhora * 1.50));

         printf ("Horas extras 25: %i\n", horasextras);
         printf ("Horas extras 50: %i\n", horasextras2);
         printf ("Valor total horas extras %2.f\n ", valortotalhorasextras);


     }
    
     return salariobruto; 
     
    

}

//-------------------------CALCULO INSS-------------------------------------
float CalculoINSS (float salariobruto){
   
   float SC1=1320.00, SC2=2571.29, SC3=3856.94, SC4=7507.49; //SC - Salario Contribuicao
   float aliquota1=0.075, aliquota2=0.09, aliquota3=0.12, aliquota4=0.15; 
   float salarioliquido = 0;
   
    if (salariobruto < SC1)
    {
        salarioliquido = salariobruto - (salariobruto*aliquota1);
    }
    else if (salariobruto > SC1 && salariobruto < SC2)
    {
        salarioliquido = salariobruto - ((SC1*aliquota1) + (salariobruto-SC1)*aliquota2);
    }
    else if (salariobruto > SC2 && salariobruto < SC3)
    {
        salarioliquido = salariobruto - (((SC1*aliquota1) + (SC2-SC1)*aliquota2) + (salariobruto-SC2)*aliquota3);
    }
     else if (salariobruto > SC3 && salariobruto < SC4)
    {
        salarioliquido = salariobruto - (((SC1*aliquota1) + ((SC2-SC1)*aliquota2)) + ((SC3-SC2)*aliquota3) + ((salariobruto-SC3)*aliquota4));
    }
    else{
         salarioliquido = salariobruto - (((SC1*aliquota1) + ((SC2-SC1)*aliquota2)) + ((SC3-SC2)*aliquota3) + ((SC4-SC3)*aliquota4));
    }

    return salarioliquido;

}

//-------------------------------CALCULO IMPOSTO DE RENDA-------------------------------

float CalculoIPRF(float salario, int dependentes) {
    float desconto = 0;

    if (salario <= 1903.98) {
        
        desconto = 0.0;
    } else if (salario <= 2826.65) {
        
        desconto = salario * 0.075;
    } else if (salario <= 3751.05) {
        
        desconto = salario * 0.15;
    } else if (salario <= 4664.68) {
        
        desconto = salario * 0.225;
    } else {
        
        desconto = salario * 0.275;
    }

    
    float valordependente = 189.59; 
    float deducaoDependentes = valordependente * dependentes;
    desconto -= deducaoDependentes;

    return desconto;
}