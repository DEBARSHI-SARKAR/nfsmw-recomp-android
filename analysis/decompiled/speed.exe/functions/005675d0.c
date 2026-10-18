/* speed.exe 005675d0 FUN_005675d0; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00514e20 FUN_00514e20
 * calls 007c4b80 FUN_007c4b80
 * calls 00525050 FUN_00525050
 * calls 0045ded0 FUN_0045ded0
 * calls 0045dbd0 FUN_0045dbd0
 * calls 005b2d80 FUN_005b2d80
 * calls 00514cc0 FUN_00514cc0
 * calls 00515830 FUN_00515830
 * calls 005157e0 FUN_005157e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005675d0(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float local_14;
  float local_10;
  float local_4;
  
  iVar5 = *(int *)(param_1 + 0x98);
  fVar1 = _DAT_0089096c / *(float *)(iVar5 + 0xb4);
  local_10 = (*(float *)(iVar5 + 0xb0) - param_2[1]) * fVar1 + _DAT_0089096c;
  local_4 = ((*param_2 - *(float *)(iVar5 + 0xac)) * fVar1 - *(float *)(param_1 + 0xb0)) *
            *(float *)(param_1 + 0xa8);
  fVar1 = (local_10 - *(float *)(param_1 + 0xb4)) * *(float *)(param_1 + 0xa8);
  fVar6 = (float10)FUN_0045dbd0(*(float *)(param_1 + 0xac) * _DAT_0089551c);
  local_14 = (float)fVar6;
  fVar6 = (float10)FUN_0045dbd0(*(float *)(param_1 + 0xac) * _DAT_0089551c + _DAT_00891654);
  fVar2 = (float)fVar6 * local_4 + local_14 * fVar1;
  param_2 = (float *)((float)fVar6 * fVar1 - local_14 * local_4);
  fVar1 = SQRT(fVar2 * fVar2 + (float)param_2 * (float)param_2);
  if ((fVar1 <= _DAT_00890968) || (fVar1 <= _DAT_0089f25c)) {
    if (fVar1 < _DAT_0089f25c == (fVar1 == _DAT_0089f25c)) {
      FUN_00514c70(param_4);
      return;
    }
  }
  else {
    fVar2 = (_DAT_0089f25c / fVar1) * fVar2;
    param_2 = (float *)((_DAT_0089f25c / fVar1) * (float)param_2);
  }
  local_4 = fVar2 * _DAT_0089f258 + *(float *)(param_1 + 0xb8);
  fVar1 = (float)param_2 * _DAT_0089f258 + *(float *)(param_1 + 0xbc);
  FUN_00525050(param_4,local_4,fVar1);
  FUN_00514cc0(param_4);
  uVar3 = FUN_0045ded0(param_3[1],*param_3);
  FUN_00514e20(param_4,(float)uVar3 * _DAT_00894958 - *(float *)(param_1 + 0xac));
  FUN_00515830(&local_14,param_4);
  uVar4 = FUN_005b2d80();
  iVar5 = FUN_007c4b80();
  FUN_005157e0(param_4,uVar4 & 0xffffff | iVar5 << 0x18);
  if (param_5 != '\0') {
    FUN_00514cc0(*(undefined4 *)(param_1 + 0x114));
    FUN_00525050(*(undefined4 *)(param_1 + 0x114),local_4,fVar1);
  }
  return;
}

