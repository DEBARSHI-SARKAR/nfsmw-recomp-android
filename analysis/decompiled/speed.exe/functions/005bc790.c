/* speed.exe 005bc790 FUN_005bc790; analysis pseudocode, not buildable source.
 * calls 005af4f0 FUN_005af4f0
 * calls 005af460 FUN_005af460
 * calls 005b3f30 FUN_005b3f30
 * calls 005ba7e0 FUN_005ba7e0
 * calls 005b2d50 FUN_005b2d50
 * calls 005b3f60 FUN_005b3f60
 * calls 005ba5d0 FUN_005ba5d0
 * calls 005adb20 FUN_005adb20
 * calls 005b5f10 FUN_005b5f10
 * calls 005af870 FUN_005af870
 * calls 005b3fe0 FUN_005b3fe0
 * calls 005adaf0 FUN_005adaf0
 * calls 005b3fa0 FUN_005b3fa0
 */

void __thiscall FUN_005bc790(int param_1,ushort *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = *param_2;
  iVar5 = *(int *)(param_1 + 0xc);
  if (uVar4 < 0x724d) {
    if (uVar4 == 0x724c) {
      iVar6 = *(int *)(param_1 + 0x28) + 1;
      *(int *)(param_1 + 0x28) = iVar6;
      puVar2 = (undefined4 *)(*(int *)(iVar5 + 0x7c) + iVar6 * 0xc);
      *puVar2 = *(undefined4 *)(param_2 + 2);
      puVar2[2] = *(undefined4 *)(param_2 + 4);
      return;
    }
    if (uVar4 < 0x644d) {
      if (uVar4 == 0x644c) {
        FUN_005ba5d0(*(undefined4 *)(param_2 + 2));
        FUN_005ba7e0(*(undefined4 *)(param_2 + 4));
        *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
        FUN_005adaf0(0);
        FUN_005adb20(0);
        return;
      }
      if (uVar4 == 0x5443) {
        FUN_005af460(*(undefined4 *)(param_2 + 2));
        return;
      }
      if (uVar4 == 0x6343) {
        piVar1 = (int *)(param_1 + 0x2c);
        *piVar1 = *piVar1 + 1;
        if (*piVar1 != 0) {
          FUN_005af4f0();
        }
        FUN_005b2d50(*(undefined4 *)(param_2 + 2));
        FUN_005b3f30(&local_10);
        return;
      }
      if (uVar4 == 0x634c) {
        iVar6 = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x24) = iVar6;
        puVar2 = (undefined4 *)(*(int *)(iVar5 + 0x78) + iVar6 * 0xc);
        *puVar2 = *(undefined4 *)(param_2 + 2);
        puVar2[2] = *(undefined4 *)(param_2 + 4);
        return;
      }
    }
    else {
      if (uVar4 == 0x6943) {
        local_c = *(undefined4 *)(param_2 + 4);
        local_10 = *(undefined4 *)(param_2 + 2);
        local_8 = *(undefined4 *)(param_2 + 6);
        local_4 = *(undefined4 *)(param_2 + 8);
        FUN_005b3fe0(&local_10);
        return;
      }
      if (uVar4 == 0x7243) {
        FUN_005b3fa0(0,0,*(undefined4 *)(param_2 + 2));
        return;
      }
    }
  }
  else if (uVar4 < 0x7444) {
    if (uVar4 == 0x7443) {
      FUN_005b5f10(param_2 + 2);
      return;
    }
    if (uVar4 == 0x7343) {
      local_c = *(undefined4 *)(param_2 + 4);
      local_10 = *(undefined4 *)(param_2 + 2);
      FUN_005b3f60(&local_10);
      return;
    }
    if (uVar4 == 0x734c) {
      uVar3 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(iVar5 + 0x84) = uVar3;
      return;
    }
  }
  else if (uVar4 == 0x764c) {
    uVar3 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(iVar5 + 0x68) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(iVar5 + 0x6c) = uVar3;
  }
  else if (uVar4 == 0x774c) {
    FUN_005af870(CONCAT11(0x77,*(int *)(param_2 + 2) != 0));
    return;
  }
  return;
}

