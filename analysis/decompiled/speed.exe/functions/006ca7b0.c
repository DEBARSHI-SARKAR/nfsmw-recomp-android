/* speed.exe 006ca7b0 FUN_006ca7b0; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 * calls 006ca560 FUN_006ca560
 */

int __thiscall
FUN_006ca7b0(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
            undefined4 param_19,undefined4 param_20,undefined4 param_21,undefined4 param_22)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
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
  
  piVar2 = param_4;
  piVar1 = (int *)(param_1 + (param_3 + 0x10 + param_2 * 8) * 4);
  iVar4 = 0;
  if (*piVar1 != 0) {
    FUN_006ca560(param_2,param_3,param_4);
  }
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    local_5c = param_12;
    local_54 = param_14;
    local_58 = param_13;
    param_3 = param_16;
    local_50 = param_15;
    local_44 = param_19;
    local_48 = param_18;
    local_3c = param_21;
    local_40 = param_20;
    puVar5 = local_38;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_38[2] = param_6;
    local_28 = param_8;
    local_20 = param_10;
    local_38[1] = param_5;
    local_38[3] = param_7;
    local_18 = &local_5c;
    local_24 = param_9;
    local_10 = &local_4c;
    local_4 = param_17;
    local_1c = param_11;
    local_14 = &local_54;
    local_8 = &param_3;
    local_4c = 0x14;
    local_38[0] = 0x38;
    local_c = 4;
    iVar4 = (**(code **)(*piVar2 + 0x48))(piVar2,param_22,local_38,piVar1,0);
    if (iVar4 < 0) {
      FUN_006ca3d0("ERROR: Failed to create constant effect on channel %d\n",param_2);
      return iVar4;
    }
  }
  iVar3 = -0x7fffbffb;
  if (*piVar1 != 0) {
    iVar3 = iVar4;
  }
  return iVar3;
}

