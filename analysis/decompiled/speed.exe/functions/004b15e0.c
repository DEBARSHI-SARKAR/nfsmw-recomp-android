/* speed.exe 004b15e0 FUN_004b15e0; analysis pseudocode, not buildable source.
 * calls 004ab150 FUN_004ab150
 * calls 004ae3f0 FUN_004ae3f0
 * calls 004ae660 FUN_004ae660
 * calls 0045a760 FUN_0045a760
 * calls 006e9e40 FUN_006e9e40
 * calls 00402240 FUN_00402240
 * calls 00402270 FUN_00402270
 * calls 007c4b80 FUN_007c4b80
 * calls 004021e0 FUN_004021e0
 * calls 00445090 FUN_00445090
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b15e0(int param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined4 *local_124;
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  int local_108;
  float afStack_104 [4];
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined4 local_d8 [20];
  undefined4 auStack_88 [8];
  undefined4 auStack_68 [4];
  undefined4 auStack_58 [4];
  char acStack_48 [4];
  undefined4 local_44;
  byte local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086b42b;
  local_1c = ExceptionList;
  iVar8 = 0;
  if ((((DAT_00911fa8 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (*(char *)(param_1 + 0x11) != '\0')) &&
     ((iVar7 = *(int *)(param_1 + 0x14), iVar7 != 0 && (*(char *)(iVar7 + 0x22d) != '\0')))) {
    ExceptionList = &local_1c;
    FUN_004ae3f0(*(undefined4 *)(iVar7 + 0x248));
    local_14 = 0;
    FUN_00445090(*(undefined4 *)(param_1 + 0x1c));
    cVar5 = FUN_006e9e40(local_120);
    if (cVar5 == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x22c) = 0;
      iVar8 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(iVar8 + 0x90) = 0;
      *(undefined4 *)(iVar8 + 0x94) = 0;
      *(undefined4 *)(iVar8 + 0x98) = 0;
      iVar8 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(iVar8 + 0x70) = 0;
      *(undefined4 *)(iVar8 + 0x74) = 0;
      *(undefined4 *)(iVar8 + 0x78) = 0;
      iVar8 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(iVar8 + 0x50) = 0;
      *(undefined4 *)(iVar8 + 0x54) = 0;
      *(undefined4 *)(iVar8 + 0x58) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xa4) = 0;
      FUN_004ab150();
      FUN_004ab150();
      FUN_004ab150();
      FUN_004ab150();
      iVar8 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(iVar8 + 0x1d0) = 0;
      *(undefined4 *)(iVar8 + 0x1d4) = 0;
      *(undefined4 *)(iVar8 + 0x1d8) = 0;
      *(undefined4 *)(iVar8 + 0x1dc) = 0;
      *(undefined4 *)(iVar8 + 0x1e0) = 0;
      *(undefined4 *)(iVar8 + 0x1e4) = 0;
      *(undefined4 *)(iVar8 + 0x1e8) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x22c) = 1;
      iVar7 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(iVar7 + 0x78) = *(undefined4 *)(iVar7 + 0x58);
      *(undefined4 *)(iVar7 + 0x70) = *(undefined4 *)(iVar7 + 0x50);
      *(undefined4 *)(iVar7 + 0x74) = *(undefined4 *)(iVar7 + 0x54);
      puVar2 = *(undefined4 **)(param_1 + 0x20);
      iVar7 = *(int *)(param_1 + 0x14);
      uVar1 = puVar2[1];
      uVar3 = puVar2[2];
      *(undefined4 *)(iVar7 + 0x50) = *puVar2;
      *(undefined4 *)(iVar7 + 0x58) = uVar3;
      *(undefined4 *)(iVar7 + 0x54) = uVar1;
      iVar7 = *(int *)(param_1 + 0x14);
      FUN_004021e0(iVar7 + 0x90,iVar7 + 0x50,iVar7 + 0x70);
      iVar7 = *(int *)(param_1 + 0x14) + 0x90;
      FUN_00402270(iVar7,iVar7,_DAT_0089096c / param_2);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1dc) = local_11c;
      *(uint *)(*(int *)(param_1 + 0x14) + 0x1d4) = (uint)local_40;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1d8) = local_3c;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1e0) = local_118;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1e8) = local_44;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x80) = local_114;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xa0) = local_110;
      uVar6 = FUN_007c4b80();
      *(undefined2 *)(*(int *)(param_1 + 0x14) + 0x1cc) = uVar6;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 500) = local_f4;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x1f8) = local_f0;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x23c) = local_ec;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x240) = local_e8;
      *(float *)(*(int *)(param_1 + 0x14) + 0x244) = -local_e4;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xac) = local_e0;
      fVar9 = (float10)FUN_00402240(*(undefined4 *)(param_1 + 0x20));
      *(float *)(*(int *)(param_1 + 0x14) + 0xa4) = (float)fVar9;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x238) = local_38;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24c) = local_30;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x254) = local_2c;
      local_124 = local_d8;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 600) = local_28;
      iVar7 = 0;
      do {
        *(uint *)(iVar8 + 0xcc + *(int *)(param_1 + 0x14)) = (uint)(acStack_48[iVar7] != '\0');
        uVar1 = auStack_88[iVar7 * 2 + 1];
        iVar4 = *(int *)(param_1 + 0x14);
        *(undefined4 *)(iVar8 + 0xbc + iVar4) = auStack_88[iVar7 * 2];
        *(undefined4 *)(iVar8 + iVar4 + 0xc0) = uVar1;
        *(float *)(iVar8 + 200 + *(int *)(param_1 + 0x14)) = _DAT_0089096c - afStack_104[iVar7];
        FUN_0045a760(*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar8 + 0xd4));
        FUN_0045a760(*local_124);
        *(undefined4 *)(iVar8 + 0xf8 + *(int *)(param_1 + 0x14)) = auStack_68[iVar7];
        *(undefined1 *)(iVar8 + *(int *)(param_1 + 0x14) + 0xfd) =
             *(undefined1 *)(iVar8 + 0xfc + *(int *)(param_1 + 0x14));
        *(undefined1 *)(iVar8 + 0xfc + *(int *)(param_1 + 0x14)) = auStack_34[iVar7];
        *(undefined4 *)(iVar8 + 0xc4 + *(int *)(param_1 + 0x14)) = auStack_58[iVar7];
        local_124 = local_124 + 5;
        iVar8 = iVar8 + 0x44;
        iVar7 = iVar7 + 1;
      } while (iVar8 < 0x110);
      iVar8 = *(int *)(param_1 + 0x14);
      if (*(int *)(iVar8 + 0x1f0) == local_108) {
        *(undefined4 *)(iVar8 + 0x1ec) = 0;
      }
      else {
        *(int *)(iVar8 + 0x1f0) = local_108;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1ec) = 1;
      }
    }
    local_14 = 0xffffffff;
    FUN_004ae660();
  }
  ExceptionList = local_1c;
  return;
}

