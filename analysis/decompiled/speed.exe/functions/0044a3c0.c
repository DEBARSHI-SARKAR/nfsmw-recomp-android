/* speed.exe 0044a3c0 FUN_0044a3c0; analysis pseudocode, not buildable source.
 * calls 00789190 FUN_00789190
 * calls 00767790 FUN_00767790
 * calls 004048c0 FUN_004048c0
 * calls 007854b0 FUN_007854b0
 * calls 00402690 FUN_00402690
 * calls 00449320 FUN_00449320
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044a3c0(undefined4 *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94 [48];
  byte local_64;
  undefined1 local_58 [4];
  float local_54;
  float local_48;
  float local_44;
  float local_40;
  char local_7;
  
  FUN_00449320(0x3ccccccd);
  FUN_00789190(param_1,1);
  if ((local_64 & 1) != 0) {
    FUN_00402690(param_3);
    fVar1 = (float10)FUN_00767790(param_3,local_94,param_1);
    *param_2 = (float)fVar1;
    return 1;
  }
  local_b0 = (float)param_1[1];
  local_ac = param_1[2];
  local_b4 = *param_1;
  local_a0 = local_b0 + _DAT_00893718;
  local_98 = 0x3f800000;
  local_a8 = 0x3f800000;
  local_a4 = local_b4;
  local_9c = local_ac;
  FUN_004048c0();
  FUN_007854b0(&local_b4,local_58,1);
  if ((local_7 != '\0') && (local_7 == '\x01')) {
    *param_2 = local_54;
    *param_3 = -local_48;
    param_3[1] = -local_44;
    param_3[2] = -local_40;
    return 1;
  }
  return 0;
}

