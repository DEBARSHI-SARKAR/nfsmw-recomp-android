/* speed.exe 005c53c0 FUN_005c53c0; analysis pseudocode, not buildable source.
 * calls 005c20a0 FUN_005c20a0
 * calls 005ae960 FUN_005ae960
 * calls 005c1460 FUN_005c1460
 * calls 005c4f60 FUN_005c4f60
 * calls 005c1b30 FUN_005c1b30
 * calls 005b0b20 FUN_005b0b20
 * calls 005b01e0 FUN_005b01e0
 */

void __thiscall FUN_005c53c0(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uStack_c;
  int local_8 [2];
  
  if (param_1[0x524e] != '\0') {
    (**(code **)(**(int **)(param_1 + 0x108) + 0x5c))();
  }
  if (*param_1 != '\0') {
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    if (param_1[1] != '\0') {
      (**(code **)(**(int **)(param_1 + 0x108) + 0x44))(local_8);
      FUN_005b01e0(local_8,param_2);
    }
    bVar8 = 0;
    uStack_c = uStack_c & 0xffffff00;
    if (*(int *)(param_1 + 0xd0) != 0) {
      do {
        uVar11 = param_2;
        uVar4 = (**(code **)(**(int **)(param_1 + 0x108) + 0x40))(uStack_c,param_2);
        FUN_005ae960(uVar4,uVar11);
        bVar8 = bVar8 + 1;
        uStack_c = CONCAT31(uStack_c._1_3_,bVar8);
      } while ((uint)bVar8 < *(uint *)(param_1 + 0xd0));
    }
    for (iVar6 = *(int *)(param_1 + 0xe0); iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
      if ((*(char *)(iVar6 + 0x28) != '\0') &&
         (((param_1[0x524c] == '\0' || (*(char *)(iVar6 + 0x18) != '\0')) &&
          (FUN_005c20a0(iVar6), param_1[1] != '\0')))) {
        FUN_005b0b20(iVar6);
      }
    }
    uVar9 = 1;
    puVar10 = (uint *)(param_1 + 0x34);
    local_8[0] = 0x13;
    do {
      if (((*(uint *)(param_1 + 0x30) & uVar9) != 0) && (bVar8 = 0, *(int *)(param_1 + 0xd0) != 0))
      {
        uVar5 = 0;
        do {
          uVar2 = *puVar10;
          iVar6 = 0;
          puVar7 = (uint *)(uVar5 * 0x88 + *(int *)(param_1 + 4) + 8);
          do {
            if ((uVar9 & 1 << ((byte)iVar6 & 0x1f)) != 0) {
              if (uVar2 < *puVar7) {
                *puVar7 = *puVar7 - uVar2;
              }
              else {
                *puVar7 = 0;
              }
            }
            iVar6 = iVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar6 < 0x20);
          bVar8 = bVar8 + 1;
          uVar5 = (uint)bVar8;
        } while (uVar5 < *(uint *)(param_1 + 0xd0));
      }
      *puVar10 = 0;
      uVar9 = uVar9 << 1;
      puVar10 = puVar10 + 1;
      local_8[0] = local_8[0] + -1;
    } while (local_8[0] != 0);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
    local_8[0] = 0;
    if (*param_1 != '\0') {
      DAT_008f5798 = (param_1[0x524d] != '\0') - 1;
      local_8[0] = 0;
      iVar6 = *(int *)(param_1 + 0xe0);
      while (iVar6 != 0) {
        iVar3 = *(int *)(iVar6 + 4);
        if ((param_1[0x524c] == '\0') ||
           (pcVar1 = (char *)(iVar6 + 0x18), iVar6 = iVar3, *pcVar1 != '\0')) {
          FUN_005c1b30(param_1,param_2);
          iVar6 = iVar3;
        }
      }
      FUN_005c1460();
      if (param_1[0x524c] == '\0') {
        FUN_005c4f60();
      }
      if (*(int *)(param_1 + 0x4118) != 0) {
        FUN_005c1460();
      }
      param_1[0x524d] = '\0';
      goto LAB_005c55e7;
    }
  }
  for (iVar6 = *(int *)(param_1 + 0xe0); iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
    if ((param_1[0x524c] == '\0') || (*(char *)(iVar6 + 0x18) != '\0')) {
      FUN_005c1b30(param_1,param_2);
    }
  }
LAB_005c55e7:
  if (param_1[0x524e] != '\0') {
    (**(code **)(**(int **)(param_1 + 0x108) + 0x60))();
  }
  return;
}

