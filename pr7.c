/* *********************************************************************** *
 *    Cupido
 *    BRIEF_DESCRIPTION                                                     *
 *                                                                          *
 *  Copyright (C) 2021 by Lucas Felipe Dias De Miranda                      *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *  To contact the author, please write to:                                 *
 *  Name: Lucas Felipe Dias De Miranda <lfdm@poli.br>                       *
 *  Webpage: http://beco.poli.br/~username                                  *
 *  Phone: (81) 98493-6578                                                  *
 * ************************************************************************ *
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



int main (void)
{
    srand(time(NULL));
    char nome1[10]={0};
    char nome2[10]={0};
    char nomes[10][10]={{"Anitta"},
                       {"Pablo"},
                       {"Xuxa"},
                       {"Didi"},
                       {"Mônica"},
                       {"Neymar"},
                       {"Bruna"},
                       {"Magali"},
                       {"Cebolinha"},
                       {"Ivete"}};
   //printf("%s\n", nomes[rand() % 10]);
    //atribuindo o nome da string a uma variavel
   
    strcpy(nome1, nomes[rand()%10]);
    //printf("%s\n", nome1);
    strcpy(nome2, nomes[rand()%10]);
    //comparando variváveis
    //testando se os nomes são iguais
    while(strcmp(nome1,nome2)==0)
    {
        strcpy(nome1, nomes[rand()%10]);
        strcpy(nome2, nomes[rand()%10]);
    }
    if(strcmp(nome1,nome2) !=0)
    {
        printf("%s Está muito apaixonado(a) por %s\n", nome1, nome2);
    }

    return 0;

}






