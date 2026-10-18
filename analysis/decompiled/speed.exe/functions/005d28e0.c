/* speed.exe 005d28e0 FUN_005d28e0; analysis pseudocode, not buildable source.
 * calls 00444dc0 FUN_00444dc0
 * calls 004884a0 FUN_004884a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d28e0(uint param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_4 = 0;
  pfVar1 = param_2 + 6;
  do {
    local_20 = *param_2 - pfVar1[-2];
    local_1c = pfVar1[-5] - pfVar1[-1];
    local_18 = pfVar1[-4] - *pfVar1;
    local_10 = pfVar1[2] - *param_2;
    local_c = pfVar1[3] - pfVar1[-5];
    local_8 = pfVar1[4] - pfVar1[-4];
    FUN_00444dc0(&local_20,&local_10,param_3);
    param_3[3] = 0.0;
    if (_DAT_00890968 < param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3) {
      FUN_004884a0(param_3,param_3);
LAB_005d29ab:
      param_3[3] = *param_2 * *param_3 + param_2[1] * param_3[1] + param_2[2] * param_3[2];
      return;
    }
    if (param_1 < 4) {
      *param_3 = 0.0;
      param_3[1] = 1.0;
      param_3[2] = 0.0;
      goto LAB_005d29ab;
    }
    param_2 = param_2 + 4;
    pfVar1 = pfVar1 + 4;
    param_1 = param_1 - 1;
  } while( true );
}

