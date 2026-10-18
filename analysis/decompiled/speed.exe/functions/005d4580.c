/* speed.exe 005d4580 FUN_005d4580; analysis pseudocode, not buildable source.
 * calls 005cab00 FUN_005cab00
 * calls 004fa510 FUN_004fa510
 * calls 005d2b90 FUN_005d2b90
 * calls 005ca910 FUN_005ca910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005d4580(int param_1,float param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined *puVar2;
  int extraout_EDX;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  local_4c = param_2 * param_2;
  iVar1 = *(int *)(param_1 + 0x60);
  local_50 = local_4c * param_2;
  local_48 = param_2;
  local_44 = 0x3f800000;
  puVar2 = &DAT_008a3180;
  if (iVar1 == 1) {
    puVar2 = &DAT_008a31c0;
  }
  FUN_005cab00(puVar2,param_1,local_40);
  FUN_004fa510(&local_50,local_40,&local_60);
  local_54 = 0x3f800000;
  if (iVar1 == 1) {
    local_60 = local_60 * _DAT_008933d4;
    local_5c = local_5c * _DAT_008933d4;
    local_58 = local_58 * _DAT_008933d4;
  }
  if (param_4 == '\x01') {
    FUN_005d2b90(param_1 + 0x40,param_1 + 0x50,&local_50,param_2);
    FUN_005ca910(&local_50,param_3);
    *(float *)(extraout_EDX + 0x30) = local_60;
    *(float *)(extraout_EDX + 0x34) = local_5c;
    *(float *)(extraout_EDX + 0x38) = local_58;
    *(undefined4 *)(extraout_EDX + 0x3c) = local_54;
  }
  return;
}

