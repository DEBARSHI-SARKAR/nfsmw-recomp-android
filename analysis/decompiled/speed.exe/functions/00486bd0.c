/* speed.exe 00486bd0 FUN_00486bd0; analysis pseudocode, not buildable source.
 * calls 004665b0 FUN_004665b0
 * calls 005cab00 FUN_005cab00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00486bd0(float *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  if (param_1[2] <= _DAT_008953f4) {
    fVar1 = param_1[2];
  }
  else {
    fVar1 = _DAT_0089096c / param_1[2];
  }
  if (param_1[1] <= _DAT_008953f4) {
    fVar2 = param_1[1];
  }
  else {
    fVar2 = _DAT_0089096c / param_1[1];
  }
  if (*param_1 <= _DAT_008953f4) {
    fVar3 = *param_1;
  }
  else {
    fVar3 = _DAT_0089096c / *param_1;
  }
  *param_3 = fVar3;
  param_3[5] = fVar2;
  param_3[10] = fVar1;
  param_3[0xf] = 1.0;
  param_3[0xe] = 0.0;
  param_3[0xd] = 0.0;
  param_3[0xc] = 0.0;
  param_3[0xb] = 0.0;
  param_3[9] = 0.0;
  param_3[8] = 0.0;
  param_3[7] = 0.0;
  param_3[6] = 0.0;
  param_3[4] = 0.0;
  param_3[3] = 0.0;
  param_3[2] = 0.0;
  param_3[1] = 0.0;
  FUN_004665b0(param_2,local_40);
  FUN_005cab00(param_3,param_2,local_80);
  FUN_005cab00(local_40,local_80,param_3);
  return;
}

