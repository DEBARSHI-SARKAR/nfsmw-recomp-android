/* speed.exe 0043a200 FUN_0043a200; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 0041ba80 FUN_0041ba80
 * calls 0070e570 FUN_0070e570
 * calls 005d59f0 FUN_005d59f0
 * calls 00434240 FUN_00434240
 * calls 004342e0 FUN_004342e0
 * calls 005cc240 FUN_005cc240
 * calls 005dca00 FUN_005dca00
 * calls 0071cb10 FUN_0071cb10
 * calls 0041c510 FUN_0041c510
 * calls 005d0370 FUN_005d0370
 * calls 006269b0 FUN_006269b0
 * calls 0041ba30 FUN_0041ba30
 * calls 00405600 FUN_00405600
 * calls 00402db0 FUN_00402db0
 * calls 005faa20 FUN_005faa20
 * calls 0041c4e0 FUN_0041c4e0
 * calls 0065faf0 FUN_0065faf0
 * calls 006ff2d0 FUN_006ff2d0
 * calls 0045a430 FUN_0045a430
 */

void __thiscall FUN_0043a200(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piStack_4c;
  int *apiStack_48 [2];
  int *piStack_40;
  undefined4 uStack_3c;
  int *local_34;
  undefined4 uStack_30;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868db8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x58) = 0x42700000;
  if (((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) &&
     (iVar2 = FUN_005faa20(), iVar2 == 8)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar2 = DAT_00993cc8;
  if (*(int *)(param_1 + 0xec) != 0) {
    if (((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1960) == 0)) ||
       ((DAT_0091e004 != 0 && (iVar3 = FUN_005dca00(), iVar3 == 0)))) {
      FUN_00402db0(iVar2 + 400);
      local_4 = 0;
      if (local_34 != (int *)0x0) {
        puVar4 = (undefined4 *)FUN_00454810(0x6cb70d5,0);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)FUN_006269b0(4);
        }
        *(undefined4 *)(param_1 + 0x58) = *puVar4;
      }
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
    FUN_0071cb10(1);
    FUN_0070e570();
    piVar5 = (int *)FUN_006ff2d0(1);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x48))();
    }
  }
  piStack_40 = (int *)FUN_0041ba30();
  uStack_3c = 0;
  local_4 = 1;
  local_34 = (int *)FUN_0041ba80();
  uStack_30 = 0;
  piVar5 = (int *)**(int **)(param_1 + 0xe0);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (piVar5 != *(int **)(param_1 + 0xe0)) {
    do {
      piStack_4c = (int *)piVar5[2];
      piVar7 = local_34 + 1;
      iVar2 = FUN_0041c510(local_34,local_34[1],&piStack_4c);
      FUN_004342e0(1);
      *piVar7 = iVar2;
      **(int **)(iVar2 + 4) = iVar2;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0xe0));
  }
  piVar7 = local_34;
  piVar5 = (int *)*local_34;
  if (piVar5 != local_34) {
    do {
      piVar8 = (int *)piVar5[2];
      (**(code **)(*piVar8 + 0x10))();
      piVar6 = (int *)FUN_005d59f0(&LAB_004028f0);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      (**(code **)(*(int *)(param_1 + -0x28) + 0xc))(piVar8);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != piVar7);
  }
  piVar5 = (int *)**(int **)(param_1 + 0xd4);
  if (piVar5 != *(int **)(param_1 + 0xd4)) {
    do {
      piStack_4c = (int *)piVar5[2];
      piVar7 = piStack_40 + 1;
      iVar2 = FUN_0041c4e0(piStack_40,piStack_40[1],&piStack_4c);
      FUN_00434240(1);
      *piVar7 = iVar2;
      **(int **)(iVar2 + 4) = iVar2;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0xd4));
  }
  piStack_4c = (int *)*piStack_40;
  if (piStack_4c != piStack_40) {
    apiStack_48[0] = (int *)(param_1 + -0x28);
    do {
      piVar5 = (int *)piStack_4c[2];
      (**(code **)(*apiStack_48[0] + 0xc))(piVar5);
      iVar2 = (**(code **)(*piVar5 + 8))();
      if ((iVar2 != 0) && (iVar2 = (**(code **)(*piVar5 + 8))(), *(int *)(iVar2 + 0x1c) != 0)) {
        (**(code **)(*piVar5 + 8))();
        piVar7 = (int *)FUN_005d59f0(&LAB_00402820);
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))();
          piVar8 = (int *)FUN_005d59f0(&LAB_004037e0);
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0x48))();
          }
          (**(code **)(*piVar7 + 8))(piVar5);
        }
      }
      puVar4 = *(undefined4 **)(param_1 + 0x74);
      if (puVar4 != (undefined4 *)(*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x7c) * 4)) {
        do {
          piVar7 = (int *)*puVar4;
          piVar8 = (int *)(**(code **)(*piVar7 + 0xac))();
          iVar2 = (**(code **)(*piVar8 + 0xa0))();
          if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == piVar5[1])) {
            (**(code **)(*piVar5 + 0x7c))(piVar7);
          }
          puVar4 = puVar4 + 1;
        } while (puVar4 != (undefined4 *)(*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x7c) * 4));
      }
      piVar5 = (int *)FUN_005d59f0(&LAB_004028f0);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
      }
      piStack_4c = (int *)*piStack_4c;
    } while (piStack_4c != piStack_40);
  }
  puVar4 = *(undefined4 **)(param_1 + 0x74);
  if (puVar4 != (undefined4 *)(*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x7c) * 4)) {
    do {
      piVar5 = (int *)*puVar4;
      cVar1 = (**(code **)(*piVar5 + 0x88))();
      if (cVar1 != '\0') {
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))();
        if (*piVar7 == DAT_0092c4f4) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        }
        else {
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        }
        piVar7 = (int *)(**(code **)(*piVar5 + 0xac))();
        (**(code **)(*piVar7 + 0x8c))();
        piVar5 = (int *)(**(code **)(*piVar5 + 4))();
        uVar9 = FUN_005cc240("SoundAI");
        uVar10 = (**(code **)(*piVar5 + 0x34))();
        FUN_00405600(apiStack_48);
        piStack_24 = apiStack_48[0];
        uStack_1c = 0x18;
        uStack_18 = 0;
        uStack_10 = 0;
        uStack_20 = uVar9;
        uStack_14 = uVar10;
        FUN_0065faf0();
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined4 *)(*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x7c) * 4));
  }
  if (param_2 != '\0') {
    iVar2 = *(int *)(param_1 + 0x7c);
    iVar3 = *(int *)(param_1 + 0x74);
    for (iVar11 = *(int *)(param_1 + 0x74); iVar11 != iVar3 + iVar2 * 4; iVar11 = iVar11 + 4) {
      piVar5 = (int *)FUN_005d59f0(&LAB_00402830);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))();
      }
    }
    iVar2 = *(int *)(param_1 + 0x7c);
    iVar3 = iVar2;
    if (0 < iVar2) {
      do {
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(int *)(param_1 + 0x7c) = iVar3;
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 8))
                (*(int *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
  }
  piVar7 = local_34;
  *(undefined1 *)(param_1 + 0x60) = 0;
  piVar5 = (int *)*local_34;
  *local_34 = (int)local_34;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_34[1] = (int)local_34;
  while (piVar5 != piVar7) {
    piVar8 = (int *)*piVar5;
    FUN_005d0370(piVar5,0xc,0);
    piVar5 = piVar8;
  }
  FUN_005d0370(piVar7,0xc,0);
  piVar7 = piStack_40;
  piVar5 = (int *)*piStack_40;
  *piStack_40 = (int)piStack_40;
  local_4 = 0xffffffff;
  piStack_40[1] = (int)piStack_40;
  while (piVar5 != piVar7) {
    piVar8 = (int *)*piVar5;
    FUN_005d0370(piVar5,0xc,0);
    piVar5 = piVar8;
  }
  FUN_005d0370(piVar7,0xc,0);
  ExceptionList = pvStack_c;
  return;
}

