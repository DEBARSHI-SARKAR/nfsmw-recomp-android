/* speed.exe 00783e50 FUN_00783e50; analysis pseudocode, not buildable source.
 * calls 00763f80 FUN_00763f80
 * calls 005c8cc0 FUN_005c8cc0
 * calls 0077a740 FUN_0077a740
 * calls 007632b0 FUN_007632b0
 * calls 007822c0 FUN_007822c0
 * calls 00763f10 FUN_00763f10
 */

void FUN_00783e50(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int local_8c;
  float local_88;
  float local_84;
  int *local_80;
  float local_7c;
  undefined4 local_78;
  int *local_74;
  uint local_70;
  int local_6c;
  bool local_68;
  undefined1 local_67;
  undefined4 local_64;
  int local_60;
  uint *local_5c;
  float local_58 [2];
  float local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  DAT_009b38a4 = DAT_009b38a4 + 1;
  local_60 = DAT_009b38a8;
  FUN_00763f10(param_3,param_3 + 0x10,&local_8c,local_4c);
  iVar2 = local_8c;
  if (*(float *)(param_3 + 0x14) <= *(float *)(param_3 + 4)) {
    local_84 = *(float *)(param_3 + 0x14);
  }
  else {
    local_84 = *(float *)(param_3 + 4);
  }
  if (*(float *)(param_3 + 4) <= *(float *)(param_3 + 0x14)) {
    local_88 = *(float *)(param_3 + 0x14);
  }
  else {
    local_88 = *(float *)(param_3 + 4);
  }
  piVar5 = *(int **)(param_1 + 4);
  if (piVar5 != piVar5 + *(int *)(param_1 + 0xc)) {
    do {
      local_74 = *(int **)(*(int *)(local_60 + 0x20) + *piVar5 * 4);
      if (local_74 != (int *)0x0) {
        local_70 = (uint)*(byte *)(local_74 + 2);
        local_78 = 0;
        local_6c = 0;
        local_67 = 0;
        local_64 = 0;
        if (local_70 != 0) {
          local_6c = *(ushort *)(local_74 + 3) + 0x14 + (int)local_74;
        }
        iVar4 = *local_74;
        if (iVar4 != 0) {
          local_64 = **(undefined4 **)(iVar4 + 4);
        }
        local_68 = iVar4 != 0 || local_70 != 0;
        local_80 = piVar5;
        puVar3 = (uint *)FUN_0077a740();
        while (puVar3 != (uint *)0x0) {
          uVar1 = *puVar3;
          if (((ushort)(uVar1 >> 0x10) < 0xa8c) &&
             (iVar4 = *(int *)(DAT_009b38a0 + (uVar1 >> 0x10) * 4), iVar4 != 0)) {
            iVar4 = (uVar1 & 0xffff) * 0x40 + *(int *)(iVar4 + 8);
          }
          else {
            iVar4 = 0;
          }
          local_8c = iVar4;
          if ((iVar4 != 0) &&
             ((((*(ushort *)(iVar4 + 0x18) == 0 ||
                (*(char *)((int)&DAT_00902160 + (uint)*(ushort *)(iVar4 + 0x18)) != '\0')) &&
               (*(int *)(iVar4 + 0x1c) != 0)) &&
              (((*local_5c & (uint)*(ushort *)(iVar4 + 0x12)) == 0 &&
               (*(short *)(iVar4 + 0x10) != DAT_009b38a4)))))) {
            *(short *)(iVar4 + 0x10) = DAT_009b38a4;
            local_7c = *(float *)(iVar4 + 0x3c);
            FUN_007632b0(local_40,1);
            FUN_005c8cc0(local_40);
            FUN_00763f80(&local_10,param_3,iVar2,local_4c,local_58);
            if (((local_10 - local_58[0]) * (local_10 - local_58[0]) +
                 (local_8 - local_50) * (local_8 - local_50) < local_7c * local_7c) &&
               (((*(byte *)(iVar4 + 0x12) & 3) != 0 ||
                ((local_84 < local_c + *(float *)(iVar4 + 0x14) &&
                 (local_c - *(float *)(iVar4 + 0x14) < local_88)))))) {
              FUN_007822c0(&local_8c);
            }
          }
          puVar3 = (uint *)FUN_0077a740();
          piVar5 = local_80;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return;
}

