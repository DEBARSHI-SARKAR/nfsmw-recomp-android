/* speed.exe 006ed9d0 FUN_006ed9d0; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 006ed600 FUN_006ed600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ed9d0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 float param_5,int param_6)

{
  float fVar1;
  int iVar2;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  float local_8;
  
  fVar1 = _DAT_0089096c / param_5;
  FUN_0040fe20(param_2,local_c);
  local_8 = local_8 * fVar1;
  local_18 = *param_1;
  local_10 = param_1[2];
  local_14 = (float)param_1[1] * fVar1;
  local_24 = *param_3;
  local_1c = param_3[2];
  local_20 = (float)param_3[1] * fVar1;
  iVar2 = FUN_006ed600(&local_18,local_c,&local_24,param_4,param_6);
  if (iVar2 != 0) {
    param_5 = (*(float *)(param_6 + 4) - local_20) * param_5;
    *(float *)(param_6 + 4) = param_5;
    *(float *)(param_6 + 4) = param_5 + (float)param_3[1];
  }
  return;
}

