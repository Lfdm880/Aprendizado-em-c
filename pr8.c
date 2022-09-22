/* *********************************************************************** *
 *   Calculdadora de Determinante , VERSION                                 *
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
    int M[3][3]={{0}};
    //int i =0, j=0,det;
    int det;
    //Contruindo a matriz
    for(int i=0; i<3; i++)
    {
        printf("digite cada numero da linha: %i\n", i+1);
        for(int j=0; j<3; j++)
        {
            scanf("%i", &M[i][j]);
        }
        
    }
    //calculando a determinante
   det=(((M[0][0] * M[1][1] * M[2][2]) + (M[0][1] * M[1][2] * M[2][0]) + (M[0][2] * M[1][0] * M[2][1])) - ((M[2][0] * M[1][1] * M[0][2]) + (M[2][1] * M[1][2] * M[0][0]) + (M[2][2] * M[1][0] * M[0][1])));
    printf("A determinante é: %i\n", det);

    return 0;
}



