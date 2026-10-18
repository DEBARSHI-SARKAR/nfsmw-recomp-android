/* speed.exe 00471cd0 FUN_00471cd0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004011c0 FUN_004011c0
 * calls 0045a430 FUN_0045a430
 * calls 004048c0 FUN_004048c0
 * calls 007854b0 FUN_007854b0
 * calls 0066bae0 FUN_0066bae0
 * calls 00403c30 FUN_00403c30
 * calls 00454810 FUN_00454810
 * calls 00402000 FUN_00402000
 * calls 0040e040 FUN_0040e040
 * calls 007c4b80 FUN_007c4b80
 * calls 00789cc0 FUN_00789cc0
 * calls 00768200 FUN_00768200
 * calls 005d59f0 FUN_005d59f0
 * calls 00407490 FUN_00407490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00471cd0(int *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  float10 fVar13;
  int *piStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int iStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_b4 [20];
  undefined4 auStack_a0 [12];
  byte bStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_64 [81];
  char cStack_13;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086a256;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)(**(code **)(*param_1 + 0x54))();
  if (piVar3 == (int *)0x0) {
    ExceptionList = pvStack_c;
    return (float10)_DAT_00890968;
  }
  piVar4 = (int *)FUN_005d59f0(&LAB_004039c0);
  if (piVar4 != (int *)0x0) {
    fVar13 = (float10)(**(code **)(*piVar3 + 0x2c))();
    fStack_150 = (float)fVar13;
    if (((float10)_DAT_0089481c <= fVar13) && (iStack_118 = FUN_007c4b80(), 0 < iStack_118)) {
      piVar5 = (int *)FUN_005d59f0(&LAB_00404040);
      fStack_130 = _DAT_00890968;
      if ((piVar5 != (int *)0x0) &&
         (cVar2 = FUN_0040e040(&piStack_158), fStack_130 = _DAT_00890968, cVar2 != '\0')) {
        fStack_13c = DAT_008a2fb4;
        fStack_138 = DAT_008a2fb8;
        fStack_134 = DAT_008a2fbc;
        uVar11 = 0;
        iVar6 = (**(code **)(*piVar5 + 8))();
        if (iVar6 != 0) {
          do {
            pfVar7 = (float *)(**(code **)(*piVar5 + 0xc))(uVar11);
            fStack_14c = *pfVar7;
            fStack_148 = pfVar7[1];
            fStack_144 = pfVar7[2];
            fVar13 = (float10)(**(code **)(*piVar5 + 0x68))(uVar11);
            fVar1 = (float)-fVar13;
            pfVar7 = (float *)(**(code **)(*piVar4 + 0xa0))();
            uVar11 = uVar11 + 1;
            fStack_148 = fVar1 * pfVar7[2] + fStack_148;
            fStack_144 = (fVar1 * *pfVar7 + fStack_150) * _DAT_008910f0 + fStack_144;
            fStack_140 = (fVar1 * pfVar7[1] + fStack_14c) * _DAT_008910f0 + fStack_140;
            fStack_13c = fStack_148 * _DAT_008910f0 + fStack_13c;
            uVar8 = (**(code **)(*piVar5 + 8))();
          } while (uVar11 < uVar8);
        }
        puVar9 = (undefined4 *)(**(code **)(*piVar4 + 0x80))();
        uStack_108 = *puVar9;
        fStack_104 = (float)puVar9[1];
        uStack_100 = puVar9[2];
        uStack_fc = puVar9[3];
        puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x4c))();
        puVar12 = auStack_a0;
        for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
        uStack_6c = 0x40800000;
        fVar13 = (float10)FUN_00768200(&fStack_13c);
        fVar13 = (float10)fStack_138 - fVar13;
        if (fVar13 < (float10)_DAT_00890968) {
          fVar13 = (float10)_DAT_00890968;
        }
        fStack_154 = (float)fVar13;
        fStack_120 = (float)fVar13;
        fStack_11c = param_2 / (float)iStack_118;
        fStack_14c = fStack_11c;
        if (fVar13 <= (float10)_DAT_00890968) {
          fStack_14c = 0.0;
        }
        if (fVar13 <= (float10)_DAT_00890968) {
          fStack_130 = 0.0;
        }
        else {
          fStack_130 = -fStack_11c;
        }
        uVar10 = (**(code **)(*piStack_158 + 0x48))();
        FUN_00403c30(uVar10);
        iStack_4 = 0;
        iVar6 = FUN_00454810(0xafa210f0,0);
        if (iVar6 == 0) {
          iVar6 = FUN_006269b0(0xc);
        }
        FUN_00407490(iVar6,0,0);
        iStack_4._0_1_ = 1;
        fVar13 = (float10)FUN_0066bae0(auStack_b4,fStack_150);
        piStack_158 = (int *)(float)-fVar13;
        fVar13 = (float10)(**(code **)(*piVar3 + 0x18))();
        piStack_158 = (int *)(float)((float10)(float)piStack_158 / fVar13);
        fVar13 = (float10)(**(code **)(*piVar4 + 0x94))();
        fStack_148 = 0.0;
        fStack_140 = 0.0;
        fStack_144 = (float)(fVar13 + (float10)(float)piStack_158);
        fStack_114 = 0.0;
        fStack_10c = 0.0;
        fStack_110 = fStack_144;
        pfVar7 = (float *)(**(code **)(*piVar3 + 0x24))();
        fStack_148 = *pfVar7;
        fStack_144 = pfVar7[1];
        fStack_140 = pfVar7[2];
        fStack_12c = fStack_148 * _DAT_00894594 + fStack_13c;
        fStack_128 = fStack_144 * _DAT_00894594 + fStack_138;
        fStack_124 = fStack_140 * _DAT_00894594 + fStack_134;
        puVar9 = (undefined4 *)FUN_004011c0(&uStack_f8,&fStack_13c,0x3f800000);
        uStack_e8 = *puVar9;
        uStack_e4 = puVar9[1];
        uStack_e0 = puVar9[2];
        uStack_dc = puVar9[3];
        puVar9 = (undefined4 *)FUN_004011c0(&uStack_f8,&fStack_12c,0x3f800000);
        uStack_d8 = *puVar9;
        uStack_d4 = puVar9[1];
        uStack_d0 = puVar9[2];
        uStack_cc = puVar9[3];
        FUN_004048c0();
        uStack_f8 = 0;
        uStack_f4 = 3;
        FUN_007854b0(&uStack_e8,auStack_64,2);
        iVar6 = iStack_118;
        if (cStack_13 == '\0') {
          piStack_158 = (int *)0x1;
          if (1 < iStack_118) {
            do {
              piVar3 = piStack_158;
              fStack_14c = (float)(int)piStack_158 * fStack_11c - fStack_130;
              fVar1 = fStack_14c * _DAT_00894594;
              fStack_12c = (fStack_114 * fVar1 + fStack_148) * fStack_14c + fStack_13c;
              fStack_128 = (fStack_110 * fVar1 + fStack_144) * fStack_14c + fStack_138;
              fStack_124 = (fStack_10c * fVar1 + fStack_140) * fStack_14c + fStack_134;
              cVar2 = FUN_00789cc0(&fStack_12c,&uStack_108,1,0,1);
              if (((cVar2 != '\0') && ((bStack_70 & 1) != 0)) && (_DAT_00894594 <= fStack_104)) {
                fVar13 = (float10)FUN_00768200(&fStack_12c);
                fStack_150 = (float)((float10)fStack_128 - fVar13);
                if (fStack_150 <= _DAT_00890968) break;
                fStack_154 = fStack_150 + fStack_154;
                fVar13 = (float10)FUN_00402000(fStack_120,fStack_150);
                fStack_120 = (float)fVar13;
              }
              piStack_158 = (int *)((int)piVar3 + 1);
            } while ((int)piStack_158 < iVar6);
          }
          if (param_3 != (float *)0x0) {
            *param_3 = fStack_120;
          }
          if (param_4 != (float *)0x0) {
            *param_4 = fStack_14c;
          }
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          fStack_130 = fStack_154 / (float)(int)piStack_158;
          FUN_0045a430();
          iStack_4 = 0xffffffff;
          FUN_0045a430();
        }
        else {
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_0045a430();
          iStack_4 = 0xffffffff;
          FUN_0045a430();
          fStack_130 = _DAT_00890968;
        }
      }
      ExceptionList = pvStack_c;
      return (float10)fStack_130;
    }
  }
  ExceptionList = pvStack_c;
  return (float10)_DAT_00890968;
}

