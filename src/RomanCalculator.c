/* Roman Calculator.c, Copyright (c) 2016, Dennis Arce
   Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
   and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
   
   The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
   IN THE SOFTWARE.
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "RomanCalculator.h"

//Convert an inputNumber to a string Roman Numeral
void convertIntToRoman(int inputNumber, char * outputRomanNumeral) {
	if ((inputNumber >= 4000) || (inputNumber <= 0)) {
		strcpy(outputRomanNumeral, ERROR_MSG);
	} else {
		int thousands=inputNumber/1000;
		strncpy(outputRomanNumeral, "MMM", thousands);
		int remainder=inputNumber-(thousands * 1000);
		if (remainder >= 900) {
			strncat(outputRomanNumeral, "CM", 2);
			remainder=remainder-900;
		} else if (remainder >= 500) {
			strncat(outputRomanNumeral, "D", 1);
			remainder=remainder-500;
		} else 	if (remainder >= 400) {
			strncat(outputRomanNumeral, "CD", 2);
			remainder=remainder-400;
		}
		int hundreds=remainder/100;
		strncat(outputRomanNumeral, "CCC", hundreds);
		remainder=remainder - (hundreds * 100);
		if (remainder >= 90) {
			strncat(outputRomanNumeral, "XC", 2);
			remainder=remainder-90;
		} else if (remainder >= 50) {
			strncat(outputRomanNumeral, "L", 1);
			remainder=remainder-50;
		} else if (remainder >= 40) {
			strncat(outputRomanNumeral, "XL", 2);
			remainder=remainder-40;
		}
		int tens=remainder/10;
		strncat(outputRomanNumeral, "XXX", tens);
		remainder=remainder - (tens * 10);
		if (remainder >= 9) {
			strncat(outputRomanNumeral, "IX", 2);
			remainder= remainder-9;
		} else if (remainder >= 5) {
			strncat(outputRomanNumeral, "V", 1);
			remainder= remainder-5;
		} else if (remainder == 4) {
			strncat(outputRomanNumeral, "IV", 2);
			remainder= remainder-4;
		}
		strncat(outputRomanNumeral, "III", remainder);
	}
}

//Converts a Roman Numeral to an integer, since 0 is not a valid Roman Numeral 0 is returned on Error
int convertRomanToInt(char * inputRomanNumeral) { //returns Roman Numberal or ERROR<=0
    unsigned char Tokens[TOKEN_QTY][TOKEN_SIZE]={0};  //Initialize 0
	int qtyOfTokens=getTokensFromRoman(inputRomanNumeral, &Tokens);
    int index;
	int returnValue=0;
	for (index=0; index < qtyOfTokens; index++) {
		int len=strlen(Tokens[index]);
		switch (Tokens[index][0]) {
			case 'M':
				returnValue=returnValue+1000*len;
				break;
			case 'D':
				returnValue=returnValue+500; //Only 1 d is allowed
				break;
			case 'C':
				returnValue=returnValue+100*len; //Only 1 d is allowed
				break;				
			default:
				returnValue=0;
				break;
		}
	}
	return returnValue;
}

//returns the number of tokens found
int getTokensFromRoman(char *inputRomanNumeral, unsigned char (*Tokens)[TOKEN_QTY][TOKEN_SIZE]) {
	int len=strlen(inputRomanNumeral);
	unsigned char lastChar=0; //initialize to a invalid roman numeral
	int tokensReturned=-1;    //It will be returning 1 + the index at the end
	int index;
	for (index=0; index < len; index++) {
		if (inputRomanNumeral[index] != lastChar) {  //Different char than last time
			tokensReturned++;
			lastChar = inputRomanNumeral[index];
		}
		strncat((*Tokens)[tokensReturned], &inputRomanNumeral[index], 1);
	}
	tokensReturned++; //return one more than last index
	return tokensReturned;
}


// Customer Interface, outputRomanNumeral= firstInputRomanNumeral + secondInputRomanNumeral, "Error" when input or error is incorrect
void AddTwoRomans(char * firstInputRomanNumeral, char * secondInputRomanNumeral, char * outputRomanNumeral) {
}

// Customer Interface, outputRomanNumeral= firstInputRomanNumeral - subtractedInputRomanNumeral, "Error" when input or error is incorrect
void SubTwoRomans(char * firstInputRomanNumeral, char * subtractedInputRomanNumeral, char * outputRomanNumeral) {
}
