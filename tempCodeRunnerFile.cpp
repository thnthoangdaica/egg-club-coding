long long int f[n + 1];
    f[1] = 1;
    printf("1 1\n");
    for(int dem = 2; dem <= a[n]; dem++) {
        f[dem] = (f[dem - 1] + 1) * dem / 2;
        printf("f[%d]= %lld\n", dem, f[dem]);
    }
    for(int i = 1; i <= n; i++) {
        printf("%d %lld\n", i, f[a[i]]);
    }