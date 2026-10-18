/* speed.exe 00499690 FUN_00499690; analysis pseudocode, not buildable source.
 * calls 0048d7d0 FUN_0048d7d0
 * calls 0048d8e0 FUN_0048d8e0
 * calls 004995d0 FUN_004995d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499690(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)*param_2;
  local_c = *pfVar1 * _DAT_0089551c;
  *param_2 = pfVar1 + 1;
  local_8 = pfVar1[1];
  *param_2 = pfVar1 + 2;
  local_8 = local_8 * _DAT_0089551c;
  local_4 = pfVar1[2];
  *param_2 = pfVar1 + 3;
  local_4 = local_4 * _DAT_0089551c;
  FUN_0048d8e0(&local_c,&DAT_0091133c);
  FUN_004995d0(param_3,param_4);
  FUN_0048d7d0(param_1,&DAT_0091133c,param_4,param_4);
  return;
}

