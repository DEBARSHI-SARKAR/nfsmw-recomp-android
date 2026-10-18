/* speed.exe 007c86d9 FUN_007c86d9; analysis pseudocode, not buildable source.
 * calls 007d2670 __CrtDbgReport
 */

void FUN_007c86d9(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"Object dump complete.\n");
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

