/* speed.exe 006e91c0 FUN_006e91c0; analysis pseudocode, not buildable source.
 * calls 005c5ec0 FUN_005c5ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e91c0(float *param_1,float *param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1 * _DAT_008933d4;
  local_8 = param_1[1] * _DAT_008933d4;
  local_4 = param_1[2] * _DAT_008933d4;
  FUN_005c5ec0(&local_c,&param_1,&local_20);
  FUN_005c5ec0(&local_8,&local_10,&local_18);
  FUN_005c5ec0(&local_4,&local_1c,&local_14);
  *param_2 = local_14 * local_18 * (float)param_1 - local_1c * local_10 * local_20;
  param_2[1] = local_1c * local_18 * (float)param_1 + local_20 * local_14 * local_10;
  param_2[2] = local_1c * local_18 * local_20 - local_14 * local_10 * (float)param_1;
  param_2[3] = local_14 * local_18 * local_20 + local_1c * local_10 * (float)param_1;
  return;
}

