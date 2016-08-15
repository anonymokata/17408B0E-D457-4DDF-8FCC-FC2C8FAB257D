/* check_Roman Calculator.h, Copyright (c) 2016, Dennis Arce
   Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
   and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
   
   The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
   IN THE SOFTWARE.
*/

#include <config.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <check.h>
#include <check_stdint.h>
#include "../src/RomanCalculator.h"

//First we will learn how to build Roman Numerals because we must return them to Romans who only know Roman Numerals
//Approach will be big letters to small. M to i
START_TEST(whenconvertIntToRomanisPassed1000AndReturnsM)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(1000, returnValue);
	_Bool result=!strcmp(returnValue, "M");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST

START_TEST(whenconvertIntToRomanisPassed3000AndReturnsMMM)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(3000, returnValue);
	_Bool result=!strcmp(returnValue, "MMM");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST

START_TEST(whenconvertIntToRomanisPassed4000AndReturnsERROR)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(4000, returnValue);
	_Bool result=!strcmp(returnValue, "ERROR");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST

START_TEST(whenconvertIntToRomanisPassed0AndReturnsERROR)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(0, returnValue);
	_Bool result=!strcmp(returnValue, "ERROR");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed3900AndReturnsMMMCM)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(3900, returnValue);
	_Bool result=!strcmp(returnValue, "MMMCM");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed500AndReturnsD)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(500, returnValue);
	_Bool result=!strcmp(returnValue, "D");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed1400AndReturnsMCD)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(1400, returnValue);
	_Bool result=!strcmp(returnValue, "MCD");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed2800AndReturnsMMDCCC)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(2800, returnValue);
	_Bool result=!strcmp(returnValue, "MMDCCC");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed2990AndReturnsMMCMXC)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(2990, returnValue);
	_Bool result=!strcmp(returnValue, "MMCMXC");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed50AndReturnsL)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(50, returnValue);
	_Bool result=!strcmp(returnValue, "L");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed1340AndReturnsMCCCXL)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(1340, returnValue);
	_Bool result=!strcmp(returnValue, "MCCCXL");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed2020AndReturnsMMXX)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(2020, returnValue);
	_Bool result=!strcmp(returnValue, "MMXX");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed3779AndReturnsMMMDCCLXXIX)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(3779, returnValue);
	_Bool result=!strcmp(returnValue, "MMMDCCLXXIX");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed5AndReturnsV)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(5, returnValue);
	_Bool result=!strcmp(returnValue, "V");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed1664AndReturnsMDCLXIV)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(1664, returnValue);
	_Bool result=!strcmp(returnValue, "MDCLXIV");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whenconvertIntToRomanisPassed3888AndReturnsMMMDCCCLXXXVIII)
{
	unsigned char returnValue[MAX_ROMAN_LENGTH];
	convertIntToRoman(3888, returnValue);
	_Bool result=!strcmp(returnValue, "MMMDCCCLXXXVIII");
	ck_assert_msg(result, "Failure, returnValue='%s'\r\n", returnValue);
}
END_TEST
START_TEST(whengetTokensFromRomanisPassedMAndReturnsQty1)
{
	unsigned char Tokens[TOKEN_QTY][TOKEN_SIZE]={0};
	int qty=getTokensFromRoman("M", &Tokens);
	_Bool result=1; //Assume result is fine
	if (qty != 1) {
		result=0; 
	}
	ck_assert_msg(result, "Failure, qty='%d'\r\n", qty);
}
END_TEST
START_TEST(whengetTokensFromRomanisPassedMAndReturnsQty1AndM)
{
	unsigned char Tokens[TOKEN_QTY][TOKEN_SIZE]={0};
	int qty=getTokensFromRoman("M", &Tokens);
	_Bool result=1; //Assume result is fine
	if (qty != 1) {
		result=0; 
	} else {
		if (strcmp(Tokens[0], "M")) {
			result=0;
		}
	}
	ck_assert_msg(result, "Failure, qty='%d', Value='%s'\r\n", qty, Tokens[0]);
}
END_TEST
START_TEST(whengetTokensFromRomanisPassedMCLAndReturnsQty3AndM_C_L)
{
	unsigned char Tokens[TOKEN_QTY][TOKEN_SIZE]={0};
	int qty=getTokensFromRoman("MCL", &Tokens);
	_Bool result=1; //Assume result is fine
	if (qty != 3) {
		result=0; 
	} else {
		if (strcmp(Tokens[0], "M")) {
			result=0;
		}
		if (strcmp(Tokens[1], "C")) {
			result=0;
		}
		if (strcmp(Tokens[2], "L")) {
			result=0;
		}
	}
	ck_assert_msg(result, "Failure, qty='%d', Values='%s','%s','%s'\r\n", qty, Tokens[0], Tokens[1], Tokens[2]);
}
END_TEST
START_TEST(whengetTokensFromRomanisPassedMMMCCCLXXAndReturnsQty4AndMMM_CCC_L_XX)
{
	unsigned char Tokens[TOKEN_QTY][TOKEN_SIZE]={0};
	int qty=getTokensFromRoman("MMMCCCLXX", &Tokens);
	_Bool result=1; //Assume result is fine
	if (qty != 4) {
		result=0; 
	} else {
		if (strcmp(Tokens[0], "MMM")) {
			result=0;
		}
		if (strcmp(Tokens[1], "CCC")) {
			result=0;
		}
		if (strcmp(Tokens[2], "L")) {
			result=0;
		}
		if (strcmp(Tokens[3], "XX")) {
			result=0;
		}
	}
	ck_assert_msg(result, "Failure, qty='%d', Values='%s','%s','%s','%s'\r\n", qty, Tokens[0], Tokens[1], Tokens[2], Tokens[3]);
}
END_TEST
START_TEST(whenconvertRomanToIntisPassedMAndReturns1000)
{
	int result=convertRomanToInt("M");	
	ck_assert_msg(result==1000, "Failure, result='%d'\r\n", result);
}
END_TEST
START_TEST(whenconvertRomanToIntisPassedMMMAndReturns3000)
{
	int result=convertRomanToInt("MMM");	
	ck_assert_msg(result==3000, "Failure, result='%d'\r\n", result);
}
END_TEST


Suite * RomanCalculator_suite(void)
{
    Suite *s;
    TCase *tc_core;
    TCase *tc_limits;

    s = suite_create("RomanCalculatorSuite");

    /* Core test case */
    tc_core = tcase_create("Core");

    //tcase_add_checked_fixture(tc_core, setup, teardown);
    tcase_add_test(tc_core, whenconvertIntToRomanisPassed1000AndReturnsM);
    tcase_add_test(tc_core, whenconvertIntToRomanisPassed3000AndReturnsMMM);
    tcase_add_test(tc_core, whenconvertIntToRomanisPassed4000AndReturnsERROR);
    tcase_add_test(tc_core, whenconvertIntToRomanisPassed0AndReturnsERROR);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed3900AndReturnsMMMCM);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed500AndReturnsD);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed1400AndReturnsMCD);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed2800AndReturnsMMDCCC);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed2990AndReturnsMMCMXC);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed50AndReturnsL);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed1340AndReturnsMCCCXL);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed2020AndReturnsMMXX);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed3779AndReturnsMMMDCCLXXIX);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed5AndReturnsV);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed1664AndReturnsMDCLXIV);
	tcase_add_test(tc_core, whenconvertIntToRomanisPassed3888AndReturnsMMMDCCCLXXXVIII);
	tcase_add_test(tc_core, whengetTokensFromRomanisPassedMAndReturnsQty1);
	tcase_add_test(tc_core, whengetTokensFromRomanisPassedMAndReturnsQty1AndM);
	tcase_add_test(tc_core, whengetTokensFromRomanisPassedMCLAndReturnsQty3AndM_C_L);
	tcase_add_test(tc_core, whengetTokensFromRomanisPassedMMMCCCLXXAndReturnsQty4AndMMM_CCC_L_XX);
	tcase_add_test(tc_core, whenconvertRomanToIntisPassedMAndReturns1000);
	tcase_add_test(tc_core, whenconvertRomanToIntisPassedMMMAndReturns3000);
	suite_add_tcase(s, tc_core);
    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = RomanCalculator_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
