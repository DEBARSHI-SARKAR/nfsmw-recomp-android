/* speed.exe 006cac50 FUN_006cac50; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

int __thiscall
FUN_006cac50(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10
            ,undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
            undefined4 param_19,undefined4 param_20,undefined4 param_21)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
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
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar1 = param_3 + 0x10 + param_2 * 8;
  iVar3 = 0;
  if (*(int *)(param_1 + iVar1 * 4) != 0) {
    local_78 = param_11;
    local_70 = param_13;
    local_74 = param_12;
    local_68 = param_15;
    local_6c = param_14;
    local_60 = param_17;
    local_64 = param_16;
    local_58 = param_19;
    local_5c = param_18;
    local_54 = param_20;
    local_4c = 8000;
    local_48 = 8000;
    local_44 = 8000;
    local_40 = 8000;
    puVar4 = local_38;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_38[1] = param_4;
    local_38[3] = param_6;
    local_24 = param_8;
    local_38[2] = param_5;
    local_1c = param_10;
    local_28 = param_7;
    local_20 = param_9;
    local_c = param_10 * 0x18;
    local_18 = &local_78;
    local_4 = param_21;
    piVar2 = *(int **)(param_1 + iVar1 * 4);
    local_14 = &local_70;
    local_8 = &local_68;
    local_50 = 0;
    local_3c = 500;
    local_38[0] = 0x38;
    local_10 = 0;
    iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,local_38,0x140);
    if (iVar3 < 0) {
      FUN_006ca3d0("ERROR: Failed to update condition force on channel %d\n",param_2);
    }
  }
  return iVar3;
}

