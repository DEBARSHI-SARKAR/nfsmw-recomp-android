/* speed.exe 005c41f0 FUN_005c41f0; analysis pseudocode, not buildable source.
 * calls 005c31a0 FUN_005c31a0
 * calls 005be270 FUN_005be270
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_005c41f0(undefined4 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  undefined4 *puVar11;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c31a0(param_2,0);
  *param_1 = &PTR_FUN_008a2e2c;
  uVar7 = *(uint *)(param_2 + 0x5c);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = uVar7 & 4;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0xbab60b61;
  local_4 = 0;
  FUN_005be270(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100));
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x20] = *(undefined4 *)(param_2 + 0x80);
  param_1[0x21] = *(undefined4 *)(param_2 + 0x84);
  if (param_1[0x19] != 0) {
    iVar4 = 0;
    uVar7 = 0;
    do {
      *(undefined4 *)(iVar4 + 4 + param_1[0x1f]) =
           *(undefined4 *)(iVar4 + 4 + *(int *)(param_2 + 0x7c));
      *(undefined4 *)(iVar4 + param_1[0x1f]) = *(undefined4 *)(iVar4 + *(int *)(param_2 + 0x7c));
      *(undefined4 *)(iVar4 + 8 + param_1[0x1f]) =
           *(undefined4 *)(iVar4 + 8 + *(int *)(param_2 + 0x7c));
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar7 < (uint)param_1[0x19]);
  }
  uVar7 = 0;
  if (param_1[0x18] != 0) {
    iVar4 = 0;
    do {
      *(undefined4 *)(iVar4 + 4 + param_1[0x1e]) =
           *(undefined4 *)(iVar4 + 4 + *(int *)(param_2 + 0x78));
      *(undefined4 *)(iVar4 + param_1[0x1e]) = *(undefined4 *)(iVar4 + *(int *)(param_2 + 0x78));
      *(undefined4 *)(iVar4 + 8 + param_1[0x1e]) =
           *(undefined4 *)(iVar4 + 8 + *(int *)(param_2 + 0x78));
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar7 < (uint)param_1[0x18]);
  }
  iVar4 = param_1[0x18];
  iVar2 = param_1[0x19];
  local_18 = 0;
  if (iVar4 * iVar2 != 0) {
    iVar9 = 0;
    do {
      *(undefined4 *)(param_1[0x24] + iVar9) = *(undefined4 *)(*(int *)(param_2 + 0x90) + iVar9);
      *(undefined4 *)(param_1[0x24] + 0x18 + iVar9) =
           *(undefined4 *)(*(int *)(param_2 + 0x90) + 0x18 + iVar9);
      iVar5 = *(int *)(param_2 + 0x90);
      iVar3 = param_1[0x24];
      *(undefined4 *)(iVar3 + 4 + iVar9) = *(undefined4 *)(iVar5 + 4 + iVar9);
      *(undefined4 *)(iVar3 + 8 + iVar9) = *(undefined4 *)(iVar5 + iVar9 + 8);
      *(undefined4 *)(param_1[0x24] + 0xc + iVar9) =
           *(undefined4 *)(*(int *)(param_2 + 0x90) + 0xc + iVar9);
      *(undefined4 *)(param_1[0x24] + 0x14 + iVar9) =
           *(undefined4 *)(*(int *)(param_2 + 0x90) + 0x14 + iVar9);
      *(undefined4 *)(param_1[0x24] + 0x10 + iVar9) =
           *(undefined4 *)(*(int *)(param_2 + 0x90) + 0x10 + iVar9);
      if (*(int *)(param_1[0x24] + 0x18 + iVar9) == 2) {
        psVar10 = *(short **)(*(int *)(param_2 + 0x90) + 0x20 + iVar9);
        if (psVar10 == (short *)0x0) {
          ExceptionList = local_c;
          return param_1;
        }
        iVar5 = 0;
        sVar1 = *psVar10;
        while (sVar1 != 0) {
          iVar5 = iVar5 + 1;
          sVar1 = psVar10[iVar5];
        }
        uVar7 = iVar5 * 2 + 2;
        pvVar6 = _malloc(uVar7);
        *(void **)(param_1[0x24] + 0x20 + iVar9) = pvVar6;
        puVar11 = *(undefined4 **)(param_1[0x24] + 0x20 + iVar9);
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *(undefined4 *)psVar10;
          psVar10 = psVar10 + 2;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar11 = (char)*psVar10;
          psVar10 = (short *)((int)psVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
      }
      iVar5 = param_1[0x24] + iVar9;
      if (*(int *)(iVar5 + 0x18) == 1) {
        puVar11 = (undefined4 *)(*(int *)(param_2 + 0x90) + 0x20 + iVar9);
        *(undefined4 *)(iVar5 + 0x20) = *puVar11;
        *(undefined4 *)(iVar5 + 0x24) = puVar11[1];
        *(undefined4 *)(iVar5 + 0x28) = puVar11[2];
        *(undefined4 *)(iVar5 + 0x2c) = puVar11[3];
      }
      local_18 = local_18 + 1;
      iVar9 = iVar9 + 0x30;
    } while (local_18 < (uint)(iVar4 * iVar2));
  }
  ExceptionList = local_c;
  return param_1;
}

