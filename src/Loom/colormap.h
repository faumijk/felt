/*
    This file is part of the FElt finite element analysis package.
    Copyright (C) 1993-2000 Jason I. Gobat and Darren C. Atkinson

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

# ifndef _COLORMAP_H
# define _COLORMAP_H

static struct {
   unsigned char       r;
   unsigned char       g;
   unsigned char       b;
} color_values [ ] = {
{ 160,   0, 160 },
{ 153,   0, 160 },
{ 147,   0, 160 },
{ 140,   0, 160 },
{ 133,   0, 160 },
{ 126,   0, 160 },
{ 119,   0, 160 },
{ 112,   0, 160 },
{ 105,   0, 160 },
{  98,   0, 160 },
{  91,   0, 160 },
{  84,   0, 160 },
{  77,   0, 160 },
{  70,   0, 160 },
{  63,   0, 160 },
{  56,   0, 160 },
{  49,   0, 160 },
{  35,   0, 160 },
{  42,   0, 160 },
{  28,   0, 160 },
{  21,   0, 160 },
{  14,   0, 160 },
{   7,   0, 160 },
{   3,   0, 162 },
{   0,   0, 164 },
{   0,   0, 168 },
{   0,   0, 172 },
{   0,   0, 176 },
{   0,   0, 180 },
{   0,   0, 184 },
{   0,   0, 188 },
{   0,   0, 192 },
{   0,   0, 197 },
{   0,   0, 201 },
{   0,   0, 205 },
{   0,   0, 209 },
{   0,   0, 213 },
{   0,   0, 221 },
{   0,   0, 225 },
{   0,   0, 230 },
{   0,   0, 234 },
{   0,   0, 238 },
{   0,   0, 242 },
{   0,   0, 246 },
{   0,   0, 250 },
{   0,   0, 255 },
{   0,   5, 255 },
{   0,  10, 255 },
{   0,  15, 255 },
{   0,  20, 255 },
{   0,  25, 255 },
{   0,  30, 255 },
{   0,  35, 255 },
{   0,  40, 255 },
{   0,  45, 255 },
{   0,  56, 255 },
{   0,  61, 255 },
{   0,  66, 255 },
{   0,  71, 255 },
{   0,  76, 255 },
{   0,  81, 255 },
{   0,  86, 255 },
{   0,  91, 255 },
{   0,  96, 255 },
{   0, 102, 255 },
{   0, 107, 255 },
{   0, 112, 255 },
{   0, 117, 255 },
{   0, 122, 255 },
{   0, 127, 255 },
{   0, 132, 255 },
{   0, 137, 255 },
{   0, 142, 255 },
{   0, 153, 255 },
{   0, 158, 255 },
{   0, 163, 255 },
{   0, 168, 255 },
{   0, 173, 255 },
{   0, 178, 255 },
{   0, 183, 255 },
{   0, 188, 255 },
{   0, 193, 255 },
{   0, 198, 255 },
{   0, 204, 255 },
{   0, 209, 255 },
{   0, 214, 255 },
{   0, 219, 255 },
{   0, 224, 255 },
{   0, 229, 255 },
{   0, 234, 255 },
{   0, 239, 255 },
{   0, 249, 255 },
{   0, 255, 255 },
{   0, 255, 249 },
{   0, 255, 244 },
{   0, 255, 239 },
{   0, 255, 234 },
{   0, 255, 229 },
{   0, 255, 224 },
{   0, 255, 219 },
{   0, 255, 214 },
{   0, 255, 209 },
{   0, 255, 204 },
{   0, 255, 198 },
{   0, 255, 193 },
{   0, 255, 188 },
{   0, 255, 183 },
{   0, 255, 178 },
{   0, 255, 173 },
{   0, 255, 163 },
{   0, 255, 158 },
{   0, 255, 153 },
{   0, 255, 147 },
{   0, 255, 142 },
{   0, 255, 137 },
{   0, 255, 132 },
{   0, 255, 127 },
{   0, 255, 122 },
{   0, 255, 117 },
{   0, 255, 112 },
{   0, 255, 107 },
{   0, 255, 102 },
{   0, 255,  96 },
{   0, 255,  91 },
{   0, 255,  86 },
{   0, 255,  81 },
{   0, 255,  76 },
{   0, 255,  66 },
{   0, 255,  61 },
{   0, 255,  56 },
{   0, 255,  51 },
{   0, 255,  45 },
{   0, 255,  40 },
{   0, 255,  35 },
{   0, 255,  30 },
{   0, 255,  25 },
{   0, 255,  20 },
{   0, 255,  15 },
{   0, 255,  10 },
{   0, 255,   5 },
{   0, 255,   0 },
{   5, 255,   0 },
{  10, 255,   0 },
{  15, 255,   0 },
{  20, 255,   0 },
{  30, 255,   0 },
{  35, 255,   0 },
{  40, 255,   0 },
{  45, 255,   0 },
{  51, 255,   0 },
{  56, 255,   0 },
{  61, 255,   0 },
{  66, 255,   0 },
{  71, 255,   0 },
{  76, 255,   0 },
{  81, 255,   0 },
{  86, 255,   0 },
{  91, 255,   0 },
{  96, 255,   0 },
{ 102, 255,   0 },
{ 107, 255,   0 },
{ 112, 255,   0 },
{ 117, 255,   0 },
{ 127, 255,   0 },
{ 132, 255,   0 },
{ 137, 255,   0 },
{ 142, 255,   0 },
{ 147, 255,   0 },
{ 153, 255,   0 },
{ 158, 255,   0 },
{ 163, 255,   0 },
{ 168, 255,   0 },
{ 173, 255,   0 },
{ 178, 255,   0 },
{ 183, 255,   0 },
{ 188, 255,   0 },
{ 193, 255,   0 },
{ 198, 255,   0 },
{ 204, 255,   0 },
{ 209, 255,   0 },
{ 214, 255,   0 },
{ 224, 255,   0 },
{ 229, 255,   0 },
{ 234, 255,   0 },
{ 239, 255,   0 },
{ 244, 255,   0 },
{ 249, 255,   0 },
{ 255, 255,   0 },
{ 255, 250,   0 },
{ 255, 245,   0 },
{ 255, 240,   0 },
{ 255, 235,   0 },
{ 255, 230,   0 },
{ 255, 225,   0 },
{ 255, 220,   0 },
{ 255, 215,   0 },
{ 255, 209,   0 },
{ 255, 204,   0 },
{ 255, 199,   0 },
{ 255, 189,   0 },
{ 255, 184,   0 },
{ 255, 179,   0 },
{ 255, 174,   0 },
{ 255, 169,   0 },
{ 255, 164,   0 },
{ 255, 158,   0 },
{ 255, 153,   0 },
{ 255, 148,   0 },
{ 255, 143,   0 },
{ 255, 138,   0 },
{ 255, 133,   0 },
{ 255, 128,   0 },
{ 255, 123,   0 },
{ 255, 118,   0 },
{ 255, 113,   0 },
{ 255, 107,   0 },
{ 255, 102,   0 },
{ 255,  92,   0 },
{ 255,  87,   0 },
{ 255,  82,   0 },
{ 255,  77,   0 },
{ 255,  72,   0 },
{ 255,  67,   0 },
{ 255,  62,   0 },
{ 255,  56,   0 },
{ 255,  51,   0 },
{ 255,  46,   0 },
{ 255,  41,   0 },
{ 255,  36,   0 },
{ 255,  31,   0 },
{ 255,  26,   0 },
{ 255,  21,   0 },
{ 255,  16,   0 },
{ 255,  11,   0 },
{ 255,   5,   0 },
{ 250,   0,   0 },
{ 245,   0,   0 },
{ 240,   0,   0 },
{ 235,   0,   0 },
{ 230,   0,   0 },
{ 225,   0,   0 },
{ 220,   0,   0 },
};

# endif /* _COLORMAP_H */
