/* speed.exe 006d9460 FUN_006d9460; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 * calls 006ca560 FUN_006ca560
 */

int __thiscall
FUN_006d9460(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
            undefined4 param_19,undefined4 param_20,undefined4 param_21,undefined4 param_22,
            undefined4 param_23,undefined4 param_24,undefined4 param_25)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  piVar1 = (int *)(param_1 + (param_3 + 0x10 + param_2 * 8) * 4);
  iVar3 = 0;
  if (*piVar1 != 0) {
    FUN_006ca560(param_2,param_3,param_4);
  }
  param_4 = (int *)*param_4;
  if (param_4 != (int *)0x0) {
    local_68 = param_13;
    local_6c = param_12;
    local_60 = param_15;
    local_64 = param_14;
    local_58 = param_17;
    local_5c = param_16;
    local_50 = param_19;
    local_54 = param_18;
    local_44 = param_22;
    local_48 = param_21;
    local_3c = param_24;
    local_40 = param_23;
    puVar4 = local_38;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_38[2] = param_6;
    local_28 = param_8;
    local_20 = param_10;
    local_38[1] = param_5;
    local_38[3] = param_7;
    local_18 = &local_6c;
    local_24 = param_9;
    local_10 = &local_4c;
    local_4 = param_20;
    local_1c = param_11;
    local_14 = &local_64;
    local_8 = &local_5c;
    local_4c = 0x14;
    local_38[0] = 0x38;
    local_c = 0x10;
    iVar3 = (**(code **)(*param_4 + 0x48))(param_4,param_25,local_38,piVar1,0);
    if (iVar3 < 0) {
      FUN_006ca3d0("ERROR: Failed to create periodic effect on channel %d\n",param_2);
      return iVar3;
    }
  }
  iVar2 = -0x7fffbffb;
  if (*piVar1 != 0) {
    iVar2 = iVar3;
  }
  return iVar2;
}

