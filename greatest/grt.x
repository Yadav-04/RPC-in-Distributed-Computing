struct numbers{
    int a;
    int b;
    int c;
};

program GRT_PROG{
    version GRT_VERS{
        int grt(numbers) = 1;
    } = 1;
} = 0x20000001;