/* speed.exe 00711e10 Catch@00711e10; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 00702580 FUN_00702580
 */

void Catch_00711e10(void)

{
  int unaff_EBP;
  
  FUN_00702580(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

