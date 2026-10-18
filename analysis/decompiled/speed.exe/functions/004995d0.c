/* speed.exe 004995d0 FUN_004995d0; analysis pseudocode, not buildable source.
 * calls 0048d8e0 FUN_0048d8e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004995d0(undefined4 *param_1,undefined4 param_2)

{
  float *pfVar1;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)*param_1;
  local_c = *pfVar1 * _DAT_0089551c;
  *param_1 = pfVar1 + 1;
  local_8 = pfVar1[1];
  *param_1 = pfVar1 + 2;
  local_8 = local_8 * _DAT_0089551c;
  local_4 = pfVar1[2];
  *param_1 = pfVar1 + 3;
  local_4 = local_4 * _DAT_0089551c;
  FUN_0048d8e0(&local_c,param_2);
  return;
}

