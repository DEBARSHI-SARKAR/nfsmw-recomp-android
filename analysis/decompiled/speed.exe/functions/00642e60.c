/* speed.exe 00642e60 FUN_00642e60; analysis pseudocode, not buildable source.
 * calls 0064cf00 thunk_FUN_007ec298
 * calls 006277d0 FUN_006277d0
 * calls 00642db0 FUN_00642db0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00642e60(float param_1,char param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float local_4;
  
  local_4 = param_1;
  FUN_006277d0(&local_4);
  fVar2 = local_4;
  fVar1 = (float)((int)local_4 - *(int *)((int)param_1 + 0x14)) * _DAT_00890984;
  if (_DAT_00890968 <= fVar1) {
    local_4 = fVar1;
    if ((param_2 == '\0') && (fVar1 < *(float *)((int)param_1 + 0x20))) {
      uVar3 = FUN_007c4b80();
      thunk_FUN_007ec298(uVar3);
    }
    *(float *)((int)param_1 + 0x14) = fVar2;
    fVar1 = _DAT_00890968;
    if (_DAT_00890968 < local_4) {
      fVar1 = local_4;
    }
    *(float *)((int)param_1 + 0x18) = fVar1 + *(float *)((int)param_1 + 0x18);
    iVar4 = FUN_007c4b80();
    fVar5 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar5 = fVar5 + (float10)_DAT_00891214;
    }
    *(float *)((int)param_1 + 0x1c) = (float)(extraout_ST0 - fVar5);
    if (param_2 != '\0') {
      iVar4 = 4;
      *(undefined4 *)((int)param_1 + 0x1c) = 0;
    }
    FUN_00642db0(iVar4);
    fVar5 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar5 = fVar5 + (float10)_DAT_00891214;
    }
    return fVar5 * (float10)*(float *)((int)param_1 + 0x20);
  }
  fVar5 = (float10)_DAT_00890968;
  *(float *)((int)param_1 + 0x14) = local_4;
  return fVar5;
}

