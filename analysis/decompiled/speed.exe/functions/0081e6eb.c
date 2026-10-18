/* speed.exe 0081e6eb FUN_0081e6eb; analysis pseudocode, not buildable source.
 * calls 0081e9e2 thunk_FUN_008225f7
 * calls 0081b92f FUN_0081b92f
 * calls 0081eae9 FUN_0081eae9
 * calls 0081bcd9 FUN_0081bcd9
 * calls 008205a2 FUN_008205a2
 * calls 0081bccb FUN_0081bccb
 * calls 00821a6e FUN_00821a6e
 * calls 0081febc FUN_0081febc
 */

undefined4 FUN_0081e6eb(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0081b92f();
  if (cVar1 == '\0') {
    return 0xfffffff2;
  }
  if (DAT_009c21d4 != (code *)0x0) {
    (*DAT_009c21d4)();
  }
  if (DAT_009c21dc != (code *)0x0) {
    (*DAT_009c21dc)();
  }
  if (DAT_009c21e0 != (code *)0x0) {
    (*DAT_009c21e0)();
  }
  if (DAT_009c21ec != (code *)0x0) {
    (*DAT_009c21ec)();
  }
  if (DAT_009c21e8 != (code *)0x0) {
    (*DAT_009c21e8)();
  }
  FUN_0081febc();
  if (DAT_009c21e4 != (code *)0x0) {
    (*DAT_009c21e4)(0xffffffff);
  }
  FUN_008205a2(0);
  FUN_0081bccb();
  FUN_0081eae9(DAT_009c21f4);
  FUN_0081eae9(DAT_009c21f8);
  FUN_0081bcd9();
  uVar2 = thunk_FUN_008225f7();
  DAT_009c2188 = 0;
  FUN_00821a6e();
  return uVar2;
}

