/* *********************************************************************** *
 *    Perguntar a Nacionalidade                                            *
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
#include<string.h>
int main(void)

{
    
    char P[]={"Brasil"},b[20];
    
    printf("Onde você estuda?\n");
    scanf("%s", b);
    if (strcmp(b,P)==0)//função strcmp(a,b) compara duas strings e ==0 é usado caso sejam iguais
        printf("Parabéns por estudar no Brasil\n");
    else
        printf("Você não merece usar esse programa\n");


return 0;
}












