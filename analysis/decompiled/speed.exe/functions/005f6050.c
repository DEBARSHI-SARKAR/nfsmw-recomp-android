/* speed.exe 005f6050 FUN_005f6050; analysis pseudocode, not buildable source.
 * calls 005ebf90 FUN_005ebf90
 * calls 0077ce50 FUN_0077ce50
 * calls 005e5a00 FUN_005e5a00
 * calls 00763860 FUN_00763860
 * calls 005dc970 FUN_005dc970
 * calls 005eed90 FUN_005eed90
 * calls 005e6020 FUN_005e6020
 * calls 005f5d40 FUN_005f5d40
 * calls 0073c970 FUN_0073c970
 */

void __fastcall FUN_005f6050(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_c;
  uint local_8;
  
  FUN_005eed90();
  FUN_005ebf90();
  local_8 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    local_c = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x24) + local_c;
      if (*(int *)(*(int *)(param_1 + 0x24) + local_c) != 0) {
        puVar1 = *(undefined4 **)(iVar3 + 0x38);
        puVar5 = (undefined4 *)puVar1[0x13];
        uVar4 = 0;
        if (puVar1[7] != 0) {
          do {
            (**(code **)*puVar5)(0);
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 0x34;
          } while (uVar4 < (uint)puVar1[7]);
        }
        puVar1[7] = 0;
        puVar1[0xd] = 0;
        puVar1[0x13] = 0;
        puVar5 = (undefined4 *)puVar1[0x11];
        uVar4 = 0;
        if (puVar1[5] != 0) {
          do {
            (**(code **)*puVar5)(0);
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 0x10;
          } while (uVar4 < (uint)puVar1[5]);
        }
        puVar1[5] = 0;
        puVar1[0xb] = 0;
        puVar1[0x11] = 0;
        puVar5 = (undefined4 *)puVar1[0xf];
        uVar4 = 0;
        if (puVar1[3] != 0) {
          do {
            (**(code **)*puVar5)(0);
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 0x20;
          } while (uVar4 < (uint)puVar1[3]);
        }
        puVar1[3] = 0;
        puVar1[9] = 0;
        puVar1[0xf] = 0;
        puVar5 = (undefined4 *)puVar1[0xe];
        uVar4 = 0;
        if (puVar1[2] != 0) {
          do {
            (**(code **)*puVar5)(0);
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 0x10;
          } while (uVar4 < (uint)puVar1[2]);
        }
        puVar1[2] = 0;
        puVar1[8] = 0;
        puVar1[0xe] = 0;
        puVar5 = (undefined4 *)puVar1[0x12];
        uVar4 = 0;
        if (puVar1[6] != 0) {
          do {
            (**(code **)*puVar5)(0);
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 0xc;
          } while (uVar4 < (uint)puVar1[6]);
        }
        puVar1[6] = 0;
        puVar1[0xc] = 0;
        puVar1[0x12] = 0;
        puVar5 = (undefined4 *)puVar1[0x10];
        uVar4 = 0;
        if (puVar1[4] != 0) {
          do {
            (**(code **)*puVar5)(0);
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 0xc;
          } while (uVar4 < (uint)puVar1[4]);
        }
        puVar1[4] = 0;
        puVar1[10] = 0;
        puVar1[0x10] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        if (DAT_009b3904 != 0) {
          FUN_0077ce50();
        }
        *(undefined4 *)(iVar3 + 0x38) = 0;
      }
      local_8 = local_8 + 1;
      local_c = local_c + 0x40;
    } while (local_8 < *(uint *)(param_1 + 0x20));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 700) != 0) {
    do {
      FUN_005e5a00();
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 700));
  }
  FUN_005e6020(*(undefined4 *)(*(int *)(param_1 + 0x13c) + 4));
  *(int *)(*(int *)(param_1 + 0x13c) + 4) = *(int *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(int *)(*(int *)(param_1 + 0x13c) + 8) = *(int *)(param_1 + 0x13c);
  FUN_005f5d40();
  FUN_00763860(&LAB_005eed60);
  iVar2 = DAT_0091e004;
  iVar3 = *(int *)(DAT_0091e004 + 0x2c);
  puVar1 = (undefined4 *)(DAT_0091e004 + 0x2c);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x1d) != '\0')) {
    FUN_005dc970(iVar3);
  }
  *puVar1 = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  FUN_0073c970(0);
  return;
}

