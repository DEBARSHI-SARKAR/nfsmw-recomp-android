/* speed.exe 005d0c70 FUN_005d0c70; analysis pseudocode, not buildable source.
 * calls 005cab00 FUN_005cab00
 * calls 004fa510 FUN_004fa510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005d0c70(int param_1,float param_2,float *param_3)

{
  undefined *puVar1;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  local_4c = param_2 * param_2;
  local_48 = param_2;
  local_50 = local_4c * param_2;
  local_44 = 0x3f800000;
  puVar1 = &DAT_008a3180;
  if (*(int *)(param_1 + 0x60) == 1) {
    puVar1 = &DAT_008a31c0;
  }
  FUN_005cab00(puVar1,param_1,local_40);
  FUN_004fa510(&local_50,local_40,param_3);
  param_3[3] = 1.0;
  if (*(int *)(param_1 + 0x60) == 1) {
    *param_3 = *param_3 * _DAT_008933d4;
    param_3[1] = param_3[1] * _DAT_008933d4;
    param_3[2] = param_3[2] * _DAT_008933d4;
  }
  return;
}

