/* ************************************************************************ *
 *    Problema B:                                                           *
 *    Sucessao Real                                                         *
 *                                                                          *
 *    Copyright (C) 2016 by Matheus Priston Carruthers Figueira             *
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
 *    To contact the author, please write to:                               *
 *    Matheus Priston Carruthers Figueira <matheuspriston@hotmail.com>      *
 *    Webpage: http://www.upe.com.br                                        *
 *    Phone: +55 (81) 98522-6966                                            *
 * ************************************************************************ *
 * 
 */

#include <stdio.h>

#define NREG 100

struct dados 
{
    int data;
    char nome[NREG];
    char nome_pai[NREG];
    char genero;
    char vivo[NREG];
};

int main(void)
{
    int i;
    int nregistros;
    struct dados reg[NREG];

    scanf("%d", &nregistros);

    for(i=0; i<nregistros; i++)
    {
        scanf("%d %s %s %c %s", &reg[i].data, reg[i].nome, reg[i].nome_pai, &reg[i].genero, reg[i].vivo);
    }

    for(i=0;i<nregistros; i++)
    {
        printf("%d\n%s\n%s\n%c\n%s\n",reg[i].data, reg[i].nome, reg[i].nome_pai, reg[i].genero, reg[i].vivo);
    }

    return 0;
}

