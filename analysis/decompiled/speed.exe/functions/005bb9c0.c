/* speed.exe 005bb9c0 FUN_005bb9c0; analysis pseudocode, not buildable source.
 * calls 005b7690 FUN_005b7690
 * calls 005aff50 FUN_005aff50
 * calls 005b0080 FUN_005b0080
 * calls 005b6a30 FUN_005b6a30
 * calls 005bb9c0 FUN_005bb9c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005bb9c0(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_80 [48];
  float local_50;
  float local_4c;
  float local_48 [2];
  undefined1 local_40 [64];
  
  local_84 = 0.0;
  local_88 = 0.0;
  local_8c = 0.0;
  local_90 = 0.0;
  local_94 = 0.0;
  local_98 = 0.0;
  if ((*(int *)(*(int *)(param_2 + 0x2c) + 0xc) != 0) &&
     ((*param_1 != '\0' || (-1 < *(int *)(param_2 + 0x1c))))) {
    FUN_005aff50(local_80);
    local_98 = *(float *)(extraout_EDX + 0x10) * _DAT_00890da8;
    local_94 = *(float *)(extraout_EDX + 0x14) * _DAT_00890da8;
    local_90 = *(float *)(extraout_EDX + 0x18) * _DAT_00890da8;
    FUN_005b0080(&local_8c,local_80,&local_98);
    local_50 = local_8c + *(float *)(extraout_EDX_00 + 0x1c) + *(float *)(extraout_EDX_00 + 0x10);
    local_4c = *(float *)(extraout_EDX_00 + 0x20) + *(float *)(extraout_EDX_00 + 0x14) + local_88;
    local_48[0] = *(float *)(extraout_EDX_00 + 0x24) + *(float *)(extraout_EDX_00 + 0x18) + local_84
    ;
    FUN_005b6a30(local_40,local_80,param_3);
    FUN_005b6a30(local_80,local_40,param_4);
    *(short *)(param_1 + 0xd4) = *(short *)(param_1 + 0xd4) + 1;
    uVar1 = *(undefined2 *)(param_1 + 0xd4);
    *(undefined2 *)(param_2 + 0x20) = param_5;
    (**(code **)(**(int **)(param_1 + 0x108) + 0x28))(uVar1,param_2);
    for (iVar2 = *(int *)(param_2 + 100); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (*(int *)(iVar2 + 0x18) == 5) {
        FUN_005bb9c0(iVar2,local_48,param_4,uVar1);
      }
      else {
        FUN_005b7690(iVar2,&local_88,uVar1);
      }
    }
  }
  return;
}

