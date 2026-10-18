/* speed.exe 007897c0 FUN_007897c0; analysis pseudocode, not buildable source.
 * calls 00786750 FUN_00786750
 * calls 00449320 FUN_00449320
 * calls 00402690 FUN_00402690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007897c0(float *param_1,float *param_2,float *param_3)

{
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  byte local_c;
  
  FUN_00449320(0x3ccccccd);
  FUN_00786750(0,param_1,1);
  if ((local_c & 1) == 0) {
    return 0;
  }
  FUN_00402690(&local_48);
  if (local_44 != _DAT_00890968) {
    local_38 = local_38 -
               ((*param_1 - local_3c) * local_48 + (param_1[2] - local_34) * local_40) / local_44;
  }
  *param_2 = local_38;
  if (param_3 != (float *)0x0) {
    *param_3 = local_48;
    param_3[1] = local_44;
    param_3[2] = local_40;
  }
  return 1;
}

