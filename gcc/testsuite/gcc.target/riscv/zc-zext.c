/* {dg-do compile} */
/* {dg-option "-march=rv32g_zca_zcb -mabi=ilp32" } */

int foo()
{
        int x;
        int y;
        y = x & x;
}

/* {dg-final { scan-assembler "andi rsd, rsd, 0xff" } } */
