/* speed.exe 004badf0 FUN_004badf0; analysis pseudocode, not buildable source.
 * calls 004baec0 FUN_004baec0
 * calls 007ec1bd FUN_007ec1bd
 * calls 007eda45 FUN_007eda45
 * calls 004b2a30 FUN_004b2a30
 * calls 007ec1c8 FUN_007ec1c8
 * calls 004b27d0 FUN_004b27d0
 */

void FUN_004badf0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  DAT_00911f94 = 1;
  iVar1 = *(int *)(param_3 + 0x6c);
  if (*(int *)(iVar1 + 0x10) == 1) {
    iVar3 = *(int *)(param_3 + 0x188);
    bVar2 = *(int *)(iVar1 + 0x11c) <= *(int *)(param_3 + 0x180) + iVar3;
  }
  else {
    iVar3 = FUN_007eda45(*(undefined4 *)(param_3 + 0x184));
    bVar2 = iVar3 < *(int *)(param_3 + 0x188);
  }
  *(int *)(param_3 + 0x180) = *(int *)(param_3 + 0x180) + iVar3;
  *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + iVar3;
  iVar3 = FUN_004b27d0();
  if (*(int *)(iVar1 + 4) == 4) {
    FUN_004b2a30(param_3,*(undefined4 *)(param_3 + 0x4c));
    return;
  }
  if ((!bVar2) && (iVar3 == 0)) {
    FUN_004baec0(param_3,*(int *)(param_3 + 0x4c) + -1);
    return;
  }
  FUN_007ec1bd();
  if (*(int *)(iVar1 + 4) != 4) {
    *(undefined4 *)(iVar1 + 4) = 3;
  }
  FUN_007ec1c8();
  FUN_004b2a30(param_3,*(undefined4 *)(param_3 + 0x4c));
  return;
}

