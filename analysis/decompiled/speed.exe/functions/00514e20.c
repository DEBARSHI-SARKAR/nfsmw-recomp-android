/* speed.exe 00514e20 FUN_00514e20; analysis pseudocode, not buildable source.
 * calls 005b8200 FUN_005b8200
 * calls 0045efa0 FUN_0045efa0
 * calls 0045dbd0 FUN_0045dbd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514e20(int param_1,float param_2)

{
  float10 fVar1;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1 != 0) {
    param_2 = param_2 * _DAT_0089551c;
    local_50 = 1.0;
    local_4c = 0.0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x3f800000;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f800000;
    fVar1 = (float10)FUN_0045dbd0(param_2 + _DAT_00891654);
    local_3c = (float)fVar1;
    local_50 = (float)fVar1;
    fVar1 = (float10)FUN_0045dbd0(param_2);
    local_4c = (float)fVar1;
    local_40 = (float)-fVar1;
    FUN_0045efa0(&local_70,&local_50);
    local_5c = local_6c;
    local_60 = local_70;
    local_58 = local_68;
    local_54 = local_64;
    FUN_005b8200(&local_60,0);
  }
  return;
}

