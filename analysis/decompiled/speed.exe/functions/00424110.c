/* speed.exe 00424110 FUN_00424110; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 00419910 FUN_00419910
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_00424110(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iStack_8;
  uint uStack_4;
  
  *param_3 = 0;
  iVar4 = FUN_00419910();
  if (iVar4 != 0) {
    cVar3 = (**(code **)(*(int *)(param_1 + 0x48) + 0x8c))();
    if (cVar3 == '\0') {
      (**(code **)(*DAT_0092c67c + 0x28))();
    }
    if (*(int *)(param_1 + 0x260) == 2) {
      (**(code **)(*(int *)(param_1 + 0x48) + 0x140))();
      iVar5 = FUN_00454810(0x24f7a1bc,0);
      if (iVar5 == 0) {
        FUN_006269b0(4);
      }
    }
    uVar8 = 0;
    iVar5 = FUN_00452940();
    if (iVar5 != 0) {
      do {
        uVar6 = FUN_00452940();
        if (uVar6 <= uVar8) {
          FUN_006269b0(0x18);
        }
        uVar8 = uVar8 + 1;
        uVar6 = FUN_00452940();
      } while (uVar8 < uVar6);
    }
    uStack_4 = 0;
    iVar5 = FUN_00452940();
    if (iVar5 != 0) {
      iStack_8 = 0;
      do {
        iVar5 = *(int *)(iVar4 + 8);
        uVar8 = FUN_00452940();
        if (uStack_4 < uVar8) {
          puVar7 = (undefined4 *)(iStack_8 + 8 + iVar5);
        }
        else {
          puVar7 = (undefined4 *)FUN_006269b0(0x18);
        }
        if (puVar7[2] == DAT_0090d8c8) {
          puVar1 = (undefined4 *)(param_2 + *param_3 * 0x18);
          puVar1[3] = puVar7[3];
          *puVar1 = *puVar7;
          puVar1[1] = puVar7[1];
          puVar1[2] = puVar7[2];
          puVar1[4] = puVar7[4];
          puVar1[5] = puVar7[5];
          *param_3 = *param_3 + 1;
        }
        else {
          iVar5 = FUN_007c4b80();
          if (iVar5 != 0) {
            iVar2 = *param_3;
            *(undefined4 *)(param_2 + 0xc + iVar2 * 0x18) = puVar7[3];
            puVar1 = (undefined4 *)(param_2 + iVar2 * 0x18);
            *puVar1 = *puVar7;
            puVar1[1] = puVar7[1];
            puVar1[2] = puVar7[2];
            puVar1[4] = puVar7[4];
            puVar1[5] = puVar7[5];
            *(int *)(param_2 + 0x10 + *param_3 * 0x18) = iVar5;
            *param_3 = *param_3 + 1;
          }
        }
        iStack_8 = iStack_8 + 0x18;
        uStack_4 = uStack_4 + 1;
        uVar8 = FUN_00452940();
      } while (uStack_4 < uVar8);
    }
  }
  return;
}

