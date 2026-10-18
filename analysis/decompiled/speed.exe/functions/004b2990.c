/* speed.exe 004b2990 FUN_004b2990; analysis pseudocode, not buildable source.
 * calls 004baec0 FUN_004baec0
 * calls 004b2730 FUN_004b2730
 * calls 007eda45 FUN_007eda45
 * calls 004b2a30 FUN_004b2a30
 */

void FUN_004b2990(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_007eda45(*(undefined4 *)(param_3 + 0x184));
  *(int *)(param_3 + 0x17c) = iVar1;
  if (iVar1 != 0) {
    FUN_004baec0(param_3,*(undefined4 *)(param_3 + 0x4c));
    return;
  }
  *(undefined4 *)(param_3 + 0x44) = 0;
  FUN_004b2730();
  if (*(int *)(param_3 + 0x54) != 0) {
    FUN_004b2a30(param_3,*(undefined4 *)(param_3 + 0x4c));
    return;
  }
  FUN_004b2a30(param_3,*(undefined4 *)(param_3 + 0x48));
  return;
}

