/* speed.exe 00660b40 FUN_00660b40; analysis pseudocode, not buildable source.
 * calls 0065ad80 FUN_0065ad80
 * calls 00463ca0 FUN_00463ca0
 * calls 0065c770 FUN_0065c770
 * calls 0065f680 FUN_0065f680
 * calls 0065e760 FUN_0065e760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00660b40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_0065c770();
  *(float *)(param_1 + 0x44) = (float)(fVar4 - (float10)_DAT_009258fc);
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 2;
    return;
  }
  iVar2 = FUN_0065f680(*(undefined4 *)(param_1 + 0xc),1,1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 3;
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) < iVar3) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18);
  if ((int)(((int)*(uint *)(iVar2 + 0xc) < 0) - 1 & *(uint *)(iVar2 + 0xc)) < iVar1 + iVar3) {
    *(undefined4 *)(param_1 + 0x40) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(int *)(iVar2 + 0x10) = iVar1;
    if (-1 < *(int *)(iVar2 + 0xc)) {
      FUN_0065e760(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x18),iVar3,&LAB_0065a980,param_1);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar3;
  }
  if (0 < *(int *)(iVar2 + 0x20)) {
    *(undefined4 *)(iVar2 + 0x1c) = 1;
    return;
  }
  FUN_0065ad80();
  FUN_00463ca0(DAT_00925914,iVar2);
  return;
}

