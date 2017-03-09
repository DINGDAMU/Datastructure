/*
 * =====================================================================================
 *
 *       Filename:  graph.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/03/08 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ding Damu, dingdamu@gmail.com
 *   Organization:  
 *
 *
 *
 *
 *
 *
 *          1--2
 *          |\ |
 *          | \|
 *          3--4
 *
 * =====================================================================================
 */

#include    "stdio.h"
#include    "stdlib.h"
#define MAX 5
typedef struct __edge__{
    int marked;
    int vertex1;
    int vertex2;
    struct __edge__ *edge1;
    struct __edge__ *edge2;
}_edge_;
typedef struct __node__{
    int vertex;
    struct __edge__ *next;
}_node_;


