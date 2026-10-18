/* speed.exe 00426d50 FUN_00426d50; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00405680 FUN_00405680
 * calls 00410220 FUN_00410220
 * calls 005cc240 FUN_005cc240
 * calls 0065faf0 FUN_0065faf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00426d50(int param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (*(int *)(param_1 + 0x8c) < param_2) {
    iVar9 = 0;
    if (DAT_0092d884 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*DAT_0092d87c;
    }
    piVar4 = (int *)(**(code **)(*piVar4 + 4))();
    pfVar5 = (float *)(**(code **)(*piVar4 + 0x60))();
    fStack_24 = *pfVar5;
    fStack_20 = pfVar5[1];
    fStack_1c = pfVar5[2];
    if (DAT_0092d884 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*DAT_0092d87c;
    }
    piVar4 = (int *)(**(code **)(*piVar4 + 4))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
    (**(code **)(*piVar4 + 0x34))(&fStack_c);
    puVar10 = *(undefined4 **)(param_1 + 200);
    fStack_3c = 0.0;
    bVar2 = false;
    iStack_38 = 0;
    if (puVar10 != puVar10 + *(int *)(param_1 + 0xd0)) {
      do {
        piVar4 = (int *)*puVar10;
        cVar3 = (**(code **)(*piVar4 + 0x88))();
        if (cVar3 != '\0') {
          pfVar5 = (float *)(**(code **)(*piVar4 + 0xc))();
          fStack_34 = *pfVar5 - fStack_28;
          fStack_30 = pfVar5[1] - fStack_24;
          fStack_2c = pfVar5[2] - fStack_20;
          FUN_00410220(&fStack_34);
          fVar1 = fStack_34 * fStack_10 + fStack_c * fStack_30 + fStack_8 * fStack_2c;
          piVar4 = (int *)FUN_005d59f0(&LAB_00404ff0);
          if ((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 4))(), cVar3 != '\0')) {
            fVar1 = fVar1 + _DAT_0089096c;
          }
          if ((!bVar2) || (fVar1 < fStack_3c)) {
            bVar2 = true;
            fStack_3c = fVar1;
            iStack_38 = iVar9;
          }
        }
        puVar10 = puVar10 + 1;
        iVar9 = iVar9 + 1;
      } while (puVar10 != (undefined4 *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0) * 4));
    }
    puVar10 = *(undefined4 **)(param_1 + 200);
    iVar9 = 0;
    if (puVar10 != puVar10 + *(int *)(param_1 + 0xd0)) {
      while( true ) {
        piVar4 = (int *)*puVar10;
        cVar3 = (**(code **)(*piVar4 + 0x88))();
        if ((cVar3 != '\0') && (iStack_38 == iVar9)) break;
        puVar10 = puVar10 + 1;
        iVar9 = iVar9 + 1;
        if (puVar10 == (undefined4 *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0) * 4)) {
          return;
        }
      }
      piVar6 = (int *)(**(code **)(*piVar4 + 0xac))();
      piVar6 = (int *)(**(code **)(*piVar6 + 0xa0))();
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)(**(code **)(*piVar4 + 0xac))();
        iVar9 = (**(code **)(*piVar6 + 0xa4))();
        if (iVar9 != 0) {
          piVar6 = (int *)(**(code **)(*piVar4 + 0xac))();
          piVar6 = (int *)(**(code **)(*piVar6 + 0xa4))();
          (**(code **)(*piVar6 + 0xc))(piVar4);
        }
      }
      else {
        (**(code **)(*piVar6 + 0x7c))(piVar4);
      }
      piVar6 = (int *)(**(code **)(*piVar4 + 0xac))();
      (**(code **)(*piVar6 + 0x8c))();
      piVar6 = (int *)(**(code **)(*piVar4 + 4))();
      uVar7 = FUN_005cc240("SoundAI");
      uVar11 = 1;
      uVar8 = (**(code **)(*piVar6 + 0x34))(1);
      iVar9 = FUN_00405680(uVar8,uVar11);
      *(undefined4 *)(iVar9 + 4) = uVar7;
      FUN_0065faf0();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x44))();
      if (*piVar4 == DAT_0092c4f4) {
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
        return;
      }
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
    }
  }
  return;
}

