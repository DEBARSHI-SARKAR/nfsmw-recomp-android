/* speed.exe 006ede30 FUN_006ede30; analysis pseudocode, not buildable source.
 * calls 00401ce0 FUN_00401ce0
 * calls 0040e3d0 FUN_0040e3d0
 * calls 00410220 FUN_00410220
 * calls 005d59f0 FUN_005d59f0
 * calls 005ddac0 FUN_005ddac0
 * calls 005de550 FUN_005de550
 * calls 00404a70 FUN_00404a70
 * calls 005ddad0 FUN_005ddad0
 * calls 0040e180 FUN_0040e180
 * calls 00401d70 FUN_00401d70
 * calls 007c4410 FUN_007c4410
 * calls 005db5e0 FUN_005db5e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ede30(int param_1,undefined4 param_2)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int *unaff_EBX;
  float unaff_ESI;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  float10 fVar15;
  float fVar16;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  int *piStack_4;
  
  if ((DAT_0091e000 != 0) && (piVar4 = (int *)FUN_005d59f0(&LAB_00565a30), piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 8))(param_2);
    (**(code **)(*piVar4 + 0xc))(param_2);
    iVar5 = (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))();
    if (iVar5 == 0) {
      (**(code **)(*piVar4 + 4))(0,0,0);
      return;
    }
    iVar5 = FUN_005d59f0(&LAB_004040e0);
    if ((iVar5 == 0) || (cVar3 = FUN_0040e3d0(&piStack_4), cVar3 == '\0')) {
      (**(code **)(*piVar4 + 4))(0,0,0);
      return;
    }
    cVar3 = FUN_0040e180(&stack0xffffffb4);
    piVar2 = piStack_4;
    if (cVar3 != '\0') {
      fVar15 = (float10)fcos((float10)_DAT_00988e74 * (float10)_DAT_0089096c);
      fStack_48 = (float)fVar15;
      (**(code **)(*piStack_4 + 0x34))(&fStack_2c);
      FUN_00410220(&fStack_30);
      pfVar6 = (float *)(**(code **)(*piStack_4 + 0x20))();
      iVar5 = DAT_0091e000;
      fStack_24 = *pfVar6;
      fStack_20 = pfVar6[1];
      fStack_1c = pfVar6[2];
      piStack_4 = (int *)0x0;
      fStack_8 = 310.0;
      fVar16 = 1.0;
      if (*(int *)(DAT_0091e000 + 0x1960) == 0) {
        uVar7 = FUN_005ddac0();
        uVar12 = 0;
        if (uVar7 != 0) {
          do {
            pbVar8 = (byte *)FUN_005ddad0(uVar12);
            if ((((*pbVar8 >> 1 & 1) != 0) && (iVar5 = FUN_005de550(), iVar5 != 0)) &&
               (*(int *)(iVar5 + 0x74) != 0)) {
              FUN_005db5e0(&fStack_18);
              fStack_48 = fStack_18 - fStack_24;
              fStack_44 = fStack_14 - fStack_20;
              fStack_40 = fStack_10 - fStack_1c;
              fVar15 = (float10)FUN_00410220(&fStack_48);
              if (((fVar15 < (float10)_DAT_008b01c4 != (fVar15 == (float10)_DAT_008b01c4)) &&
                  (fVar1 = fStack_48 * fStack_30 + fStack_2c * fStack_44 + fStack_28 * fStack_40,
                  unaff_ESI <= fVar1)) && ((float)fVar15 < fStack_8)) {
                piStack_4 = (int *)0x2;
                fStack_3c = fStack_48;
                fStack_38 = fStack_44;
                fStack_34 = fStack_40;
                fVar16 = fVar1;
                fStack_8 = (float)fVar15;
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar7);
        }
      }
      else {
        iVar9 = FUN_00404a70();
        if (((iVar9 == 5) && (iVar9 = (**(code **)(*unaff_EBX + 0x50))(), iVar9 != 0)) &&
           (iVar9 = *(int *)(iVar5 + 0x4504), iVar9 != 0)) {
          piVar13 = (int *)(iVar5 + 0x4508);
          do {
            if ((*piVar13 != 0) && (*(int *)(*piVar13 + 0x74) != 0)) {
              FUN_005db5e0(&fStack_18);
              fStack_48 = fStack_18 - fStack_24;
              fStack_44 = fStack_14 - fStack_20;
              fStack_40 = fStack_10 - fStack_1c;
              fVar15 = (float10)FUN_00410220(&fStack_48);
              if ((fVar15 < (float10)_DAT_008b01c4 != (fVar15 == (float10)_DAT_008b01c4)) &&
                 ((fVar1 = fStack_48 * fStack_30 + fStack_2c * fStack_44 + fStack_28 * fStack_40,
                  unaff_ESI <= fVar1 && ((float)fVar15 < fStack_8)))) {
                piStack_4 = (int *)0x2;
                fStack_3c = fStack_48;
                fStack_38 = fStack_44;
                fStack_34 = fStack_40;
                fVar16 = fVar1;
                fStack_8 = (float)fVar15;
              }
            }
            piVar13 = piVar13 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      puVar14 = DAT_0092ce9c;
      if (DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4) {
        do {
          piVar13 = (int *)*puVar14;
          piVar10 = (int *)(**(code **)(*piVar13 + 0x44))();
          if (((*piVar10 != DAT_0092c4f4) &&
              (cVar3 = (**(code **)(*piVar13 + 0x88))(), cVar3 != '\0')) &&
             ((cVar3 = (**(code **)(*piVar13 + 0xbc))(), cVar3 == '\0' &&
              (cVar3 = (**(code **)(*piVar13 + 0x7c))(), cVar3 == '\0')))) {
            uVar11 = (**(code **)(*piVar13 + 0xc))();
            FUN_00401ce0(uVar11,&fStack_24,&fStack_48);
            fVar15 = (float10)FUN_00410220(&fStack_48);
            if (((fVar15 <= (float10)_DAT_008b01c4) &&
                (fVar1 = fStack_48 * fStack_30 + fStack_2c * fStack_44 + fStack_28 * fStack_40,
                unaff_ESI <= fVar1)) && ((float)fVar15 < fStack_8)) {
              piStack_4 = (int *)0x1;
              fStack_3c = fStack_48;
              fStack_38 = fStack_44;
              fStack_34 = fStack_40;
              fVar16 = fVar1;
              fStack_8 = (float)fVar15;
            }
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != DAT_0092ce9c + DAT_0092cea4);
      }
      piVar13 = piStack_4;
      if (piStack_4 != (int *)0x0) {
        FUN_00401d70(fVar16,0xbf800000,0x3f800000);
        fVar15 = (float10)FUN_007c4410();
        piStack_4 = (int *)(float)(fVar15 * (float10)_DAT_0089096c);
        (**(code **)(*piVar2 + 0x38))(&fStack_24);
        if (fStack_28 * fStack_40 + fStack_24 * fStack_3c + fStack_20 * fStack_38 < _DAT_00890968) {
          fStack_8 = -fStack_8;
        }
        iVar5 = *piVar4;
        fVar15 = (float10)FUN_00401d70(fStack_c * _DAT_008b058c,0,0x3f800000,fStack_8);
        (**(code **)(iVar5 + 4))(piVar13,(float)fVar15);
        return;
      }
      (**(code **)(*piVar4 + 4))(0,0,0);
    }
  }
  return;
}

