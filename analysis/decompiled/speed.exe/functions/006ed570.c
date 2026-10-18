/* speed.exe 006ed570 FUN_006ed570; analysis pseudocode, not buildable source.
 * calls 006e91c0 FUN_006e91c0
 * calls 006e94d0 FUN_006e94d0
 * calls 005ca910 FUN_005ca910
 * calls 00486610 FUN_00486610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ed570(float param_1,float param_2,undefined4 param_3)

{
  float10 fVar1;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [64];
  
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  fVar1 = (float10)FUN_006e94d0(_DAT_0089096c - (param_1 + param_1));
  local_68 = (float)-fVar1;
  local_64 = -param_2;
  local_60 = 0;
  FUN_006e91c0(&local_68,local_50);
  FUN_005ca910(local_50,local_40);
  FUN_00486610(&local_5c,local_40,param_3);
  return;
}

