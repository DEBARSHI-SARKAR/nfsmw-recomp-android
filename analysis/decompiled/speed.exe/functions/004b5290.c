/* speed.exe 004b5290 FUN_004b5290; analysis pseudocode, not buildable source.
 * calls 004d5bd0 FUN_004d5bd0
 * calls 004b51e0 FUN_004b51e0
 * calls 0045d9e0 FUN_0045d9e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b5290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x1f0) == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 2;
    return;
  }
  iVar1 = FUN_004b51e0();
  iVar1 = *(int *)(param_1 + 0x8c) - iVar1;
  if ((1 < iVar1) || (iVar1 < -1)) {
    uVar2 = FUN_004b51e0();
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    *(undefined4 *)(param_1 + 0x90) = uVar2;
  }
  if (_DAT_00896d70 < *(float *)(param_1 + 0x2c)) {
    iVar1 = FUN_004b51e0();
    if (iVar1 < 4) {
      iVar1 = 3;
    }
    else if (7 < iVar1) {
      iVar1 = 7;
    }
    *(int *)(param_1 + 0x8c) = iVar1;
    fVar3 = (float10)FUN_0045d9e0(0x442f0000,&DAT_00911fe0);
    *(float *)(param_1 + 0x270) = (float)fVar3;
    *(undefined4 *)(param_1 + 0x27c) = 0;
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x8c) + -1;
    return;
  }
  if ((*(float *)(param_1 + 0x2c) < *(float *)(&DAT_00896524 + *(int *)(param_1 + 0x8c) * 4)) &&
     (2 < *(int *)(param_1 + 0x8c))) {
    iVar1 = FUN_004b51e0();
    *(int *)(param_1 + 0x8c) = iVar1;
    if (iVar1 == *(int *)(param_1 + 0x90)) {
      *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x280) = 0;
    }
    if (iVar1 == 2) {
      fVar3 = (float10)FUN_004d5bd0();
      if ((float10)_DAT_00890bf8 < fVar3) {
        *(undefined4 *)(param_1 + 0x8c) = 3;
      }
    }
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x8c) + 1;
  }
  return;
}

