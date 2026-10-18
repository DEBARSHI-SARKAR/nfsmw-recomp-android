/* speed.exe 00501870 FUN_00501870; analysis pseudocode, not buildable source.
 * calls 0064a980 FUN_0064a980
 * calls 0064a990 FUN_0064a990
 * calls 00501760 FUN_00501760
 */

void FUN_00501870(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0064a980(iVar1);
  }
  FUN_0064a990(iVar1 + 8,*(int *)(iVar1 + 4) + 8 + iVar1);
  iVar1 = FUN_00501760(iVar1);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x78);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(iVar1 + 0x6c) != 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x68);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar1 + 0x6c);
  }
  return;
}

