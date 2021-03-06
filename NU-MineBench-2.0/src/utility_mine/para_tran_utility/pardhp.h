#ifndef __PARDHP_H
#define __PARDHP_H

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/time.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <omp.h>

using namespace std;
	
extern double MIN_UTILITY;
extern char transaction_file_name[100], profit_file_name[100];
extern float *profit_array, *transaction_utility_array;
extern int num_trans;
extern int maxitem;
extern int avg_trans_sz;

extern double *item_t_utility;
extern double **local_item_t_utility, *local_tran_utility;
extern double total_tran_utility, tran_utility;

extern float MIN_UTILITY_PER;
extern FILE *summary;
extern int tot_cand;
extern int max_pattern_length;

extern int nthreads;
extern int *hash_indx;
extern struct timeval tp;
#define seconds(tm) gettimeofday(&tp,(struct timezone *)0);\
   tm=tp.tv_sec+tp.tv_usec/1000000.0
      
#define min(a, b) ((a) < (b) ? (a) : (b))

#ifndef ITEM_RANK
#define ITEM_RANK
typedef struct item_rank_2{
   double t_utility;
   int item2;
   }item_2;
typedef struct itemset_length_2 {
   omp_lock_t lck;
   int count;
   int size;
   item_2 *t2;
} itemset2;
#endif

#ifdef __cplusplus   
   }
#endif


#endif //__PARDHP_H
