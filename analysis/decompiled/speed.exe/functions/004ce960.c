/* speed.exe 004ce960 FUN_004ce960; analysis pseudocode, not buildable source.
 * calls 004c7620 FUN_004c7620
 * calls 004c6cb0 FUN_004c6cb0
 * calls 004cd0a0 FUN_004cd0a0
 * calls 004ca7c0 FUN_004ca7c0
 * calls 004ca430 FUN_004ca430
 * calls 004af470 FUN_004af470
 */

void __thiscall FUN_004ce960(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004af470(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                       *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  if (iVar1 == -1) {
    if (DAT_00912078 != 0) {
      param_3 = -1;
    }
    iVar1 = 0;
    if ((param_3 != -1) && (iVar1 = FUN_004c7620(param_3), iVar1 == 0)) {
      if (*(int *)(param_2 + 0x20) == 0) {
        return;
      }
      FUN_004ca430(*(int *)(param_2 + 0x20));
      return;
    }
    iVar2 = FUN_004ca7c0(param_2);
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 0x20) = &DAT_00912858 + iVar2 * 0x1a;
      *(int *)(&DAT_0091287c + iVar2 * 0x68) = iVar1;
    }
  }
  iVar1 = *(int *)(param_1 + 0xbc);
  iVar2 = FUN_004c6cb0(iVar1,*(undefined4 *)(iVar1 + 4),param_2);
  FUN_004cd0a0(1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

