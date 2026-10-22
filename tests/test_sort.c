#include <assert.h>
#include <string.h>
#include "../bubble/bubble_sort.h"
#include "../insert/insert_sort.h"
#include "../select/select_sort.h"
#include "../shell/shell_sort.h"
int main(void) {
    int *(*sorts[])(int[],int)={bubblesort,insertsort,selectionsort,shellsort};
    const int input[]={3,-1,3,0,8,-4};
    const int expected[]={-4,-1,0,3,3,8};
    for(int i=0;i<4;i++) {
        int values[6]; memcpy(values,input,sizeof input);
        assert(sorts[i](values,6)==values);
        assert(memcmp(values,expected,sizeof expected)==0);
        int one[]={7}; assert(sorts[i](one,1)==one); assert(one[0]==7);
        assert(sorts[i](NULL,0)==NULL);
    }
    return 0;
}
