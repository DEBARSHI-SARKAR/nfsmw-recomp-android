/* speed.exe 006d9610 FUN_006d9610; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

int __thiscall
FUN_006d9610(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23)

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
  
  iVar2 = param_3 + 0x10 + param_2 * 8;
  iVar3 = 0;
  if (*(int *)(param_1 + iVar2 * 4) != 0) {
    local_68 = param_12;
    local_6c = param_11;
    local_60 = param_14;
    local_64 = param_13;
    local_58 = param_16;
    local_5c = param_15;
    local_50 = param_18;
    local_54 = param_17;
    local_44 = param_21;
    local_48 = param_20;
    local_3c = param_23;
    piVar1 = *(int **)(param_1 + iVar2 * 4);
    local_40 = param_22;
    puVar4 = local_38;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_38[2] = param_5;
    local_28 = param_7;
    local_38[1] = param_4;
    local_20 = param_9;
    local_38[3] = param_6;
    local_24 = param_8;
    local_18 = &local_6c;
    local_10 = &local_4c;
    local_1c = param_10;
    local_14 = &local_64;
    local_4 = param_19;
    local_8 = &local_5c;
    local_4c = 0x14;
    local_38[0] = 0x38;
    local_c = 0x10;
    iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,local_38,0x140);
    if (iVar3 < 0) {
      FUN_006ca3d0("ERROR: Failed to update periodic force on channel %d\n",param_2);
    }
  }
  return iVar3;
}

