/* speed.exe 00789870 FUN_00789870; analysis pseudocode, not buildable source.
 * calls 007897c0 FUN_007897c0
 * calls 004048c0 FUN_004048c0
 * calls 007854b0 FUN_007854b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00789870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  char local_7;
  
  cVar1 = FUN_007897c0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    local_78 = *param_1;
    local_70 = param_1[2];
    local_74 = (float)param_1[1] - _DAT_00890d3c;
    local_64 = (float)param_1[1] + _DAT_00894200;
    local_5c = 0x3f800000;
    local_6c = 0x3f800000;
    local_68 = local_78;
    local_60 = local_70;
    FUN_004048c0();
    FUN_007854b0(&local_78,local_58,1);
    if ((local_7 == '\0') || (local_7 != '\x01')) {
      return 0;
    }
    *param_2 = local_54;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_48;
      param_3[1] = local_44;
      param_3[2] = local_40;
    }
  }
  return 1;
}

