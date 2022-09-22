/* *********************************************************************** *
 *    Programa Escrever nome, VERSION                                      *
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
    char a[20], b[20], c[20];
    printf("Digite o primeiro nome\n");
    scanf("%s", a);
    printf("Digite o segundo nome\n");
    scanf("%s", b);
    printf("Digite o terceiro nome\n");
    scanf("%s", c);
    printf("Os nomes são:\n%s\n%s\n%s\n",a,b,c);
    return 0;
}



