/* speed.exe 00726d20 FUN_00726d20; analysis pseudocode, not buildable source.
 * calls 0045f640 FUN_0045f640
 * calls 00726af0 FUN_00726af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00726d20(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_3 - *(float *)(param_1 + 0x30);
  local_2c = param_3[1] - *(float *)(param_1 + 0x34);
  fVar1 = (*param_2 - *(float *)(param_1 + 0x30)) * *(float *)(param_1 + 0x70) +
          (param_2[2] - *(float *)(param_1 + 0x38)) * *(float *)(param_1 + 0x78) +
          (param_2[1] - *(float *)(param_1 + 0x34)) * *(float *)(param_1 + 0x74);
  fVar2 = local_30 * *(float *)(param_1 + 0x70) +
          local_2c * *(float *)(param_1 + 0x74) +
          (param_3[2] - *(float *)(param_1 + 0x38)) * *(float *)(param_1 + 0x78);
  if (fVar2 * fVar1 < _DAT_00890968) {
    local_20 = *param_3 - *param_2;
    local_1c = param_3[1] - param_2[1];
    local_28 = param_3[2] - param_2[2];
    fVar1 = ABS(fVar1);
    local_18 = local_28;
    FUN_0045f640(&local_30,param_2,&local_20,fVar1 / (ABS(fVar2) + fVar1));
    cVar3 = FUN_00726af0(&local_30,0);
    if (cVar3 != '\0') {
      if (param_4 != (float *)0x0) {
        *param_4 = local_30;
        param_4[1] = local_2c;
        param_4[2] = local_28;
      }
      return 1;
    }
  }
  return 0;
}

