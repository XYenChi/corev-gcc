/* { dg-do compile } */
/* { dg-options "-march=rv32g_zca_zcd -mabi=ilp32d" } */

int foo()
{
    asm("c.fld fa0, 0(a0)");
    asm("c.fldsp fa0, 0(a0)");
    asm("c.fsd fa0, 0(a0)");
    asm("c.fsdsp fa0, 0(a0)");
}

/* { dg-final { scan-assembler "c.fld fa0, 0\\(a0\\)" } } */
/* { dg-final { scan-assembler "c.fldsp fa0, 0\\(a0\\)" } } */
/* { dg-final { scan-assembler "c.fsd fa0, 0\\(a0\\)" } } */
/* { dg-final { scan-assembler "c.fsdsp fa0, 0\\(a0\\)" } } */
