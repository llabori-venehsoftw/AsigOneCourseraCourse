/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.h>
 * @brief <File of header for stats.c>
 *
 * <Add Extended Description Here>
 *
 * @author <Luis Labori>
 * @date < 22 Th, December 2019, 13:30 Hr. >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

int find_median(const unsigned char datos[], int length);
/**
 * @brief <Get the median over of the values on a Vector>
 *
 * <Add Extended Description Here>
 *
 * @param <const unsigned char datos[]> <Vector of values>
 * @param <int length> <Length of Vector>
 *
 *
 * @return <int median Value of a Vector>
 */

char find_mean(const unsigned char datos[], int length);
/**
 * @brief <Get the middle value of a Vector>
 *
 * <Add Extended Description Here>
 *
 * @param <const unsigned char datos[]> <Vector of values>
 * @param <int length> <Length of Vector>
 *
 *
 * @return <char middle value of a Vector>
 */

unsigned char find_maximum(const unsigned char datos[], int length);
/**
 * @brief <Get Max value of a Vector>
 *
 * <Add Extended Description Here>
 *
 * @param <const unsigned char datos[]> <Vector of values>
 * @param <int length> <Length of Vector>
 *
 *
 * @return <unsigned char with Max value of a Vector>
 */

unsigned char find_minimum(const unsigned char datos[], int length);
/**
 * @brief <Get Min value of a Vector>
 *
 * <Add Extended Description Here>
 *
 * @param <const unsigned char datos[]> <Vector of values>
 * @param <int length> <Length of Vector>
 *
 *
 * @return <unsigned char with Min value of a Vector>
 */

void print_statistics(const unsigned char datos[], int length);
/**
 * @brief <Get the Max, Min, Median and Middle of the value of a Vector>
 *
 * <Add Extended Description Here>
 *
 * @param <const unsigned char datos[]> <Vector of values>
 * @param <int length> <Length of Vector>
 *
 *
 * @return <void return Max, Min, Median and Middle>
 */

void sort_array(unsigned char datos[],  int length);
/**
 * @brief <Sorting a vector from highest to lowest value of a Vector>
 *
 * <Add Extended Description Here>
 *
 * @param <const unsigned char datos[]> <Vector of values>
 * @param <int length> <Length of Vector>
 *
 *
 * @return <void return the input vector Sorting>
 */

void print_array(const unsigned char datos[], int length);
/**
 * @brief <Print by command windows the Vector whit a particular format>
 *
 * <Add Extended Description Here>
 *
 * @param <const unsigned char datos[]> <Vector of values>
 * @param <int length> <Length of Vector>
 *
 *
 * @return <void return the visualization by command windows the Vector sorting >
 */

#endif /* __STATS_H__ */
