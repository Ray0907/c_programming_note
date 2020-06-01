int sum_array(const int a[], int n) {

    int *p, sum;

    sum = 0;
    for (p = &a[0]; p < &a[n]; p++) { /* variations like (p=a; p<a+n; p++) */
                                      /* are also possible.                */
        sum += *p;
    }
    return sum;
}