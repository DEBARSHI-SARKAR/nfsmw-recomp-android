/* speed.exe 005cbcd0 FUN_005cbcd0; analysis pseudocode, not buildable source.
 * calls 004012f0 FUN_004012f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005cbcd0(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1[4] & 0x100000) == 0) {
    local_4 = 0;
    local_c = _DAT_00890968;
    local_8 = _DAT_0089096c;
  }
  else {
    FUN_004012f0(param_1 + 8,param_1,&local_c);
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = 0;
  param_2[4] = local_c;
  param_2[5] = local_8;
  param_2[6] = local_4;
  param_2[7] = 0;
  param_2[8] = param_1[8];
  param_2[9] = param_1[9];
  param_2[10] = param_1[10];
  param_2[0xb] = 0;
  if (param_3 != '\0') {
    param_2[0xc] = param_1[0xc];
    param_2[0xd] = param_1[0xd];
    param_2[0xe] = param_1[0xe];
    param_2[0xf] = 0x3f800000;
    return;
  }
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0x3f800000;
  return;
}

