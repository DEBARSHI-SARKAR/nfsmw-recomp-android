/* speed.exe 00615230 FUN_00615230; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 00606980 FUN_00606980
 */

void FUN_00615230(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  
  uVar2 = param_2 * 8 + 0x10;
  iVar4 = 0;
  uVar3 = (undefined1)param_2;
  if (uVar2 == 0) {
    uRam00000007 = uVar3;
    uRam00000006 = 1;
    return;
  }
  if (uVar2 < 0xfffffffd) {
    iVar4 = (*DAT_0091e0e0)(param_1,0,0,uVar2,0xc);
    if (iVar4 == 0) {
      if (param_1 == 0) {
        uRam00000006 = 1;
        uRam00000007 = uVar3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00606980(param_1,4);
    }
  }
  else {
    FUN_00613880(param_1,"memory allocation error: block too big");
  }
  if (param_1 != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
    *piVar1 = *piVar1 + uVar2;
  }
  *(undefined1 *)(iVar4 + 7) = uVar3;
  *(undefined1 *)(iVar4 + 6) = 1;
  return;
}

