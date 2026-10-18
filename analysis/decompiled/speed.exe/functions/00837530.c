/* speed.exe 00837530 FUN_00837530; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 0083e3b0 FUN_0083e3b0
 */

int FUN_00837530(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = FUN_0083e390(*(undefined4 *)(param_1 + 0xc));
  if (0 < iVar1) {
    do {
      iVar2 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0xc),iVar4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x10) & 1) == 0)) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar3;
}

