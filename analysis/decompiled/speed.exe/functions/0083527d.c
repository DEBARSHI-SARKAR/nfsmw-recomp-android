/* speed.exe 0083527d FUN_0083527d; analysis pseudocode, not buildable source.
 * calls 0085d7f0 __endthreadex
 * calls 00835187 FUN_00835187
 * calls 00835120 FUN_00835120
 * calls 0083563c FUN_0083563c
 * calls 00835321 FUN_00835321
 */

void FUN_0083527d(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00835187();
  iVar2 = FUN_00835321(uVar1);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 8) = param_1;
    FUN_0083563c();
  }
  FUN_00835120(0,1);
  __endthreadex(param_1);
  return;
}

