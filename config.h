///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   17_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#define 	PROGRAM_TITLE   "Animal Farm 3"

#define PROGRAM_NAME "Animal Farm 3"


/// Format the heading for dumping members of a class to the console
///
/// Print =====================

#define PRINT_HEADING_FOR_DUMP                                          \
 /* Print =========================================================== */ \
 std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl

/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member ) \
 std::cout << std::setfill( ' ' ) /* Space pad */ \
 << std::left /* Left justify */ \
 << std::boolalpha /* Print `true` or `false` for `bool`s */ \
 << std::setw(8) << (className) \
 << std::setw(20) << (member) \
 << std::setw(52) /* (data) */


//typedef float Weight;
//const Weight UNKNOWN_WEIGHT = -1; //unknwn weight is a non possible weight