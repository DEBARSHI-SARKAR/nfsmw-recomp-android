/* speed.exe 00822b40 FUN_00822b40; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 008215a1 FUN_008215a1
 * calls 008228db FUN_008228db
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00822b40(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0081bccb();
  FUN_008215a1();
  if (DAT_009c2428 != 0) {
    FUN_0081eae9(DAT_009c2428);
    DAT_009c2428 = 0;
  }
  if (DAT_009c2520 != 0) {
    FUN_0081eae9(DAT_009c2520);
    DAT_009c2520 = 0;
  }
  piVar2 = &DAT_009c23e8;
  do {
    if (*piVar2 != 0) {
      FUN_0081eae9(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x9c23f0);
  iVar3 = 0;
  if (DAT_009c2318._1_1_ != 0) {
    do {
      iVar1 = (&DAT_009c23f8)[iVar3];
      if (iVar1 != 0) {
        FUN_0081eae9(iVar1);
        (&DAT_009c23f8)[iVar3] = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_009c2318._1_1_);
  }
  if (DAT_009c2251 != '\0') {
    (*DAT_009c252c)();
  }
  FUN_008228db(_DAT_00890d3c);
  FUN_0081bcd9();
  return;
}

