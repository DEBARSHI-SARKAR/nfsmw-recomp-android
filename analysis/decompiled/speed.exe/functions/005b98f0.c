/* speed.exe 005b98f0 FUN_005b98f0; analysis pseudocode, not buildable source.
 * calls 005b40d0 FUN_005b40d0
 * calls 00652ad0 _malloc
 * calls 005af890 FUN_005af890
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005b4080 FUN_005b4080
 */

void __thiscall FUN_005b98f0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  
  puVar1 = *(undefined4 **)(param_1 + 0x8c);
  uVar2 = *(uint *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = param_2;
  param_2 = param_2 * param_3;
  uVar3 = *(uint *)(param_1 + 100);
  *(int *)(param_1 + 100) = param_3;
  pvVar5 = _malloc(param_2 * 0x30);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else if (-1 < param_2 + -1) {
    puVar6 = (undefined4 *)((int)pvVar5 + 0x10);
    do {
      puVar6[-4] = 0;
      puVar6[-3] = 0x3f800000;
      puVar6[-2] = 0x3f800000;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0xffffffff;
      puVar6 = puVar6 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(void **)(param_1 + 0x8c) = pvVar5;
  FUN_005af890(pvVar5,*(int *)(param_1 + 0x60) * *(int *)(param_1 + 100));
  FUN_005b4080(*(undefined4 *)(param_1 + 0x60));
  FUN_005b40d0(*(undefined4 *)(param_1 + 100));
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    uVar9 = uVar2;
    if (*(uint *)(param_1 + 0x60) < uVar2) {
      uVar9 = *(uint *)(param_1 + 0x60);
    }
    uVar7 = uVar3;
    if (*(uint *)(param_1 + 100) < uVar3) {
      uVar7 = *(uint *)(param_1 + 100);
    }
    if (puVar1 != (undefined4 *)0x0) {
      local_18 = 0;
      if (uVar7 != 0) {
        local_10 = puVar1 + uVar9 * 0xc + 8;
        local_14 = puVar1;
        do {
          puVar6 = local_14;
          puVar11 = (undefined4 *)
                    (*(int *)(param_1 + 0x60) * local_18 * 0x30 + *(int *)(param_1 + 0x8c));
          for (iVar8 = (*(int *)(param_1 + 0x60) * 3 & 0xfffffffU) << 2; iVar8 != 0;
              iVar8 = iVar8 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          if (uVar9 < uVar2) {
            iVar8 = uVar2 - uVar9;
            puVar6 = local_10;
            do {
              if (puVar6[-2] == 2) {
                uVar4 = *puVar6;
                iVar10 = *(int *)(param_1 + 0x98) + -1;
                *(int *)(param_1 + 0x98) = iVar10;
                *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar10 * 4) = uVar4;
              }
              puVar6 = puVar6 + 0xc;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          local_14 = local_14 + uVar2 * 0xc;
          local_10 = local_10 + uVar2 * 0xc;
          local_18 = local_18 + 1;
        } while (local_18 < uVar7);
      }
      if (uVar7 < uVar3) {
        puVar6 = puVar1 + uVar7 * uVar2 * 0xc + 8;
        param_3 = uVar3 - uVar7;
        uVar3 = uVar2;
        puVar11 = puVar6;
        do {
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            if (puVar6[-2] == 2) {
              uVar4 = *puVar6;
              iVar8 = *(int *)(param_1 + 0x98) + -1;
              *(int *)(param_1 + 0x98) = iVar8;
              *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar8 * 4) = uVar4;
            }
            puVar6 = puVar6 + 0xc;
          }
          puVar6 = puVar11 + uVar2 * 0xc;
          param_3 = param_3 + -1;
          uVar3 = uVar2;
          puVar11 = puVar6;
        } while (param_3 != 0);
      }
      thunk_FUN_007c7250(puVar1);
    }
  }
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1;
  return;
}

