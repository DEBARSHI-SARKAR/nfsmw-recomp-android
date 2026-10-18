/* speed.exe 0073dcb0 FUN_0073dcb0; analysis pseudocode, not buildable source.
 * calls 0073dab0 FUN_0073dab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0073dcb0(int *param_1)

{
  int iVar1;
  int *extraout_ECX;
  float10 fVar2;
  float local_4;
  
  if ((float)param_1[1] != _DAT_00890968) {
    local_4 = DAT_008f8308 - (float)param_1[1];
    if (*(float *)(*(int *)(*param_1 + 8) + 0x44) < local_4) {
      param_1[2] = param_1[3];
      param_1[1] = 0;
      return (float10)(float)param_1[2];
    }
    if (_DAT_00890968 <= local_4) {
      iVar1 = *(int *)(*param_1 + 8);
      local_4 = local_4 / *(float *)(iVar1 + 0x44);
      if ((float)param_1[3] < (float)param_1[2]) {
        local_4 = _DAT_0089096c - local_4;
      }
      fVar2 = (float10)FUN_0073dab0(local_4,iVar1);
      extraout_ECX[2] = (int)(float)fVar2;
      param_1 = extraout_ECX;
    }
  }
  return (float10)(float)param_1[2];
}

