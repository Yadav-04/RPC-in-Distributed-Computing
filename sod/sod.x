struct number{
    int a;
};

program SOD_PROG{
    version SOD_VERS{
        int sod(number) = 1;
    } = 1;
} = 0x4562877;