/* speed.exe 0050c7b0 FUN_0050c7b0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00509540 FUN_00509540
 * calls 0050c650 FUN_0050c650
 * calls 00466340 FUN_00466340
 * calls 004fd630 FUN_004fd630
 * calls 0045a430 FUN_0045a430
 * calls 00503c30 FUN_00503c30
 * calls 005094c0 FUN_005094c0
 * calls 004560d0 FUN_004560d0
 * calls 00503bc0 FUN_00503bc0
 * calls 00452430 FUN_00452430
 * calls 00452940 FUN_00452940
 * calls 006269b0 FUN_006269b0
 * calls 00503c00 FUN_00503c00
 */

int * __thiscall FUN_0050c7b0(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  cVar3 = DAT_0091606c;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086e113;
  local_1c = ExceptionList;
  if (DAT_008f86ec == '\0') {
    return (int *)0x0;
  }
  piVar9 = (int *)0x0;
  if (param_2 == 0) {
    return (int *)0x0;
  }
  ExceptionList = &local_1c;
  FUN_004fd630(param_2,0,0);
  local_14 = 0;
  iVar4 = FUN_00452430();
  if ((iVar4 != -0x113dd8e6) && (iVar4 = FUN_00452430(), iVar4 != 0)) {
    bVar2 = true;
    iVar4 = FUN_00452940();
    do {
      if (iVar4 <= (int)piVar9) {
        if (bVar2) {
          uVar8 = *(int *)(param_1 + 0x394) + iVar4;
          if ((uVar8 < 0x1f5) && (*(uint *)(param_1 + 0x390) < 200)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || ((param_3 >> 0x12 & 1) == 0)) goto LAB_0050c9ab;
          bVar2 = false;
          iVar6 = uVar8 - 500;
          local_5c = 1;
          puVar10 = *(undefined4 **)(param_1 + 0x378);
          goto LAB_0050c900;
        }
        break;
      }
      piVar5 = (int *)FUN_00452940();
      if (piVar5 <= piVar9) {
        FUN_006269b0(0xc);
      }
      iVar6 = FUN_004560d0();
      if (iVar6 == 0) {
        bVar2 = false;
      }
      piVar9 = (int *)((int)piVar9 + 1);
    } while (bVar2);
    goto LAB_0050c9e0;
  }
  goto LAB_0050cab8;
  while( true ) {
    uVar8 = puVar10[6];
    puVar1 = (undefined4 *)*puVar10;
    if ((((uVar8 & 0x8000000) != 0) && ((uVar8 & 0x40000) == 0)) && ((uVar8 & 0x4000000) == 0)) {
      iVar6 = iVar6 - (uint)*(ushort *)(puVar10 + 7);
      local_5c = local_5c + -1;
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,puVar10);
      if ((iVar6 < 1) && (local_5c < 1)) {
        bVar2 = true;
      }
    }
    puVar10 = puVar1;
    if (bVar2) break;
LAB_0050c900:
    if (puVar10 == (undefined4 *)(param_1 + 0x378)) {
      if (!bVar2) {
        bVar2 = false;
        puVar10 = *(undefined4 **)(param_1 + 0x378);
        goto LAB_0050c970;
      }
      break;
    }
  }
  goto LAB_0050c9ab;
  while( true ) {
    puVar1 = (undefined4 *)*puVar10;
    if ((puVar10[6] & 0x40000) == 0) {
      bVar2 = true;
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,puVar10);
    }
    puVar10 = puVar1;
    if (bVar2) break;
LAB_0050c970:
    if (puVar10 == (undefined4 *)(param_1 + 0x378)) break;
  }
LAB_0050c9ab:
  if ((cVar3 != '\0') ||
     (((uint)(*(int *)(param_1 + 0x394) + iVar4) < 0x1f5 && (*(uint *)(param_1 + 0x390) < 200)))) {
    iVar6 = FUN_00466340(DAT_00916068);
    local_14._0_1_ = 1;
    if (iVar6 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)FUN_0050c650(param_2,param_3);
    }
    local_14 = (uint)local_14._1_3_ << 8;
    if (piVar9 != (int *)0x0) {
      FUN_00503c30();
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      FUN_00503c00(&local_50);
      uVar7 = FUN_00452430();
      iVar6 = FUN_00509540(uVar7);
      if (iVar6 != 0) {
        FUN_00503bc0(iVar6 + 0x10);
      }
      *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + 1;
      *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + iVar4;
      puVar10 = *(undefined4 **)(param_1 + 0x37c);
      *puVar10 = piVar9;
      *(int **)(param_1 + 0x37c) = piVar9;
      piVar9[1] = (int)puVar10;
      *piVar9 = param_1 + 0x378;
LAB_0050cab8:
      local_14 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_1c;
      return piVar9;
    }
  }
  if (DAT_0091c1a1 == '\0') {
    DAT_0091c1a1 = '\x01';
  }
LAB_0050c9e0:
  local_14 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_1c;
  return (int *)0x0;
}

