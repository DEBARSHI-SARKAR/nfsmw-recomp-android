/* speed.exe 00659ce0 FUN_00659ce0; analysis pseudocode, not buildable source.
 * calls 00659ae0 FUN_00659ae0
 * calls 0045f640 FUN_0045f640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00659ce0(float *param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  float *pfVar1;
  undefined4 uVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  pfVar1 = (float *)FUN_00659ae0(param_2 - _DAT_0089096c);
  local_20 = *pfVar1 * param_3;
  local_1c = pfVar1[1] * param_3;
  local_18 = pfVar1[2] * param_3;
  uVar2 = FUN_00659ae0(param_2);
  FUN_0045f640(&local_20,&local_20,uVar2,param_4);
  uVar2 = FUN_00659ae0(param_2 + _DAT_0089096c);
  FUN_0045f640(&local_20,&local_20,uVar2,param_5);
  uVar2 = FUN_00659ae0(param_2 + _DAT_00890d3c);
  FUN_0045f640(&local_20,&local_20,uVar2,param_6);
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  return;
}

