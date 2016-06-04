
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// very incomplete small test program...

int main() {
LIST *lst1;
int i;

  lst1 = lst_create();

  
  for(i=0; i<5; i++) {
     lst_push_front(lst1, i);
  }
  
  for(i=0; i<5; i++) {
     lst_push_back(lst1, i);
  }
/*
  printf("lst_length(lst1) : %i\n", lst_length(lst1));
  printf("lst1 contents: ");
  lst_print(lst1);


  lst_pop_front(lst1);
  lst_pop_front(lst1);
  printf("lst1 contents after two pops: ");
  lst_print(lst1);

*/
  /** TODO:  test code here! **/


  /** test code for lst_count **/

//  printf("number of 3's = %i\n", lst_count(lst1, 3));
//  printf("number of 0's = %i\n\n", lst_count(lst1, 0));


  /** test code for lst_print_rev **/
//  lst_print(lst1);
//  printf("\nList 1 Sorted: %d\n", lst_is_sorted(lst1));
  
 // printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst1), lst_sanity2(lst1));
  
	
  /*
  LIST *lst2 = lst_create();
  for(i = 0; i < 5; i++){
	  lst_push_back(lst2, i);
  }
  printf("\n\nLIST 2\n");
  lst_print(lst2);
  printf("\nList 2 Sorted: %d\n", lst_is_sorted(lst2));
  printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst2), lst_sanity2(lst2));
  
 
  //testing insert sort
  printf("\n\n*****TESTING INSERT SORTED*****\n");
  lst_print(lst2);
  printf("\nInserting 0 into list\n");
  lst_insert_sorted(lst2, 0);
  lst_print(lst2);

  printf("\nInserting 5 into list\n");
  lst_insert_sorted(lst2, 5);
  lst_print(lst2);
 
  printf("\nInserting 1 into list\n");
  lst_insert_sorted(lst2, 1);
  lst_print(lst2);
  
  
  printf("\nList 2 Sorted: %d\n", lst_is_sorted(lst2));
  printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst2), lst_sanity2(lst2));
  */
  
  //testing merge sort

  LIST *lst3 = lst_create();
  LIST *lst4 = lst_create();
  for(i = 1; i < 10; i+=2)
	  lst_push_back(lst3, i);
  for(i = 0; i <= 10; i+=2)
	  lst_push_back(lst4, i);
  lst_insert_sorted(lst4, 6);
  
	lst_print(lst3);
	lst_print(lst4);
	/* printf("\nList 3 Sorted: %d\n", lst_is_sorted(lst3));
    printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst3), lst_sanity2(lst3));
	printf("\nList 4 Sorted: %d\n", lst_is_sorted(lst4));
    printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst4), lst_sanity2(lst4)); */
    printf("\n**MERGE SORTING**\n");
	lst_merge_sorted(lst3, lst4);
	
	lst_print(lst3);
	lst_print(lst4);
	
	/*
    printf("\nList 3 Sorted: %d\n", lst_is_sorted(lst3));
    printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst3), lst_sanity2(lst3));
	printf("\nList 4 Sorted: %d\n", lst_is_sorted(lst4));
    printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst4), lst_sanity2(lst4)); 
	*/
	/* printf("\n\nCloning lst3 to lst5\n");
	LIST *lst5 = lst_create();
	lst5 = lst_clone(lst3);
	printf("lst3:\n");
	lst_print(lst3);
	printf("lst5:\n");
	lst_print(lst5);
	printf("\nList 5 Sorted: %d\n", lst_is_sorted(lst5));
    printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst5), lst_sanity2(lst5));  */
  
	/* printf("\nTesting list from array\n");
	int arr[6];
	printf("\narr: ");
	for(i = 0; i < 6; i++){
		arr[i] = i;
		printf("%d ", arr[i]);
	}
	LIST *lst6 = lst_create();
	lst6 = lst_from_array(arr, 6);
	printf("\nlst6\n");
	lst_print(lst6);
	
	//printf("\nList 6 Sorted: %d\n", lst_is_sorted(lst6));
    //printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst6), lst_sanity2(lst6));
	
	printf("\nTesting list to array.\tLENGTH: %d\n", lst_length(lst6));
	
	int *arr2 = lst_to_array(lst6);
	for(i = 0; i < 6; i++){
		printf("%d ", arr2[i]);
	}
	
	//printf("\nLENGTH OF lst3: %d\n", lst_length(lst3)); */
	
	
	/* printf("\nTESTING PREFIX\n");
	LIST *lst7 = lst_create();
	lst_print(lst3);
	lst_print(lst7);
	lst7 = lst_prefix(lst3, 12);
	printf("AFTER\n");
	lst_print(lst3);
	lst_print(lst7);
	printf("\nList 7 Sorted: %d\n", lst_is_sorted(lst7));
    printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst7), lst_sanity2(lst7));
	printf("\nList 3 Sorted: %d\n", lst_is_sorted(lst3));
    printf("Sanity 1: %d\nSanity 2: %d\n", lst_sanity1(lst3), lst_sanity2(lst3)); */
	
	printf("\n\nTESTING FILTER\n");
	LIST *lst8 = lst_create();

	lst_push_front(lst3, 10);
	lst_push_front(lst3, 20);
	lst_pop_back(lst3);
	
	lst_print(lst3);
	lst_print(lst8);
	
	lst8 = lst_filter_leq(lst3, 9);
	lst_print(lst3);
	lst_print(lst8);
	
	/*
	printf("\n\ntesting concat\n\n");
	LIST *lst9 = lst_create();
	LIST *lst10 = lst_create();
	
	for(i = 0; i < 3; i++){
		lst_push_back(lst9, i);
		lst_push_back(lst10, i);
	}
	
	lst_print(lst9);
	lst_print(lst10);
	
	lst_concat(lst9, lst10);
	lst_print(lst9);
	lst_print(lst10);
	*/
	
  /** test code for lst_push_back **/

  lst_free(lst1);
}
  
