/* speed.exe 004741f0 FUN_004741f0; analysis pseudocode, not buildable source.
 * calls 0046fee0 FUN_0046fee0
 * calls 004011c0 FUN_004011c0
 * calls 00466520 FUN_00466520
 * calls 00401d10 FUN_00401d10
 * calls 004665b0 FUN_004665b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_004741f0(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  undefined2 extraout_var;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [2];
  float fStack_d4;
  undefined4 auStack_d0 [2];
  undefined4 uStack_c8;
  float fStack_b8;
  float fStack_b0;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [60];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  puVar12 = DAT_0092d084;
  puVar13 = DAT_0092d07c;
  if (DAT_0092d07c != DAT_0092d07c + (int)DAT_0092d084) {
    do {
      piVar1 = (int *)*puVar13;
      cVar7 = (**(code **)(*piVar1 + 0x88))();
      if ((((cVar7 != '\0') && (cVar7 = (**(code **)(*piVar1 + 0x5c))(), cVar7 == '\0')) &&
          (piVar8 = (int *)(**(code **)(*piVar1 + 4))(), piVar8 != (int *)0x0)) &&
         ((iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 0x94),
          iVar9 = (**(code **)(*piVar8 + 0x70))(), iVar9 != iVar2 &&
          (piVar8 = (int *)(**(code **)(*piVar8 + 0x54))(), piVar8 != (int *)0x0)))) {
        uVar10 = (**(code **)(*piVar1 + 0xc))(0x3f800000);
        pfVar11 = (float *)FUN_004011c0(auStack_a0,uVar10);
        fVar3 = *pfVar11;
        fVar4 = pfVar11[1];
        fVar5 = pfVar11[2];
        fVar6 = pfVar11[3];
        (**(code **)(*piVar8 + 0x48))(afStack_dc);
        (**(code **)(*piVar8 + 0x40))(auStack_94);
        FUN_004665b0(auStack_98,auStack_58);
        (**(code **)(*piVar8 + 0x34))(&fStack_f0);
        iVar2 = *(int *)(param_1 + 0x1c);
        if (ABS(fStack_e0 * *(float *)(iVar2 + 0x50) +
                -fStack_e8 * *(float *)(iVar2 + 0x54) + fStack_e4 * *(float *)(iVar2 + 0x58)) <
            _DAT_00891058) {
          pfVar11 = *(float **)(param_1 + 0x80);
          fStack_b8 = pfVar11[2] * _DAT_00890ea8;
          fStack_b0 = *pfVar11 * _DAT_00890ea8 + pfVar11[8];
          fStack_f8 = -(pfVar11[1] * _DAT_00890ea8 + pfVar11[9]) - fVar3;
          fStack_f4 = (fStack_b8 + pfVar11[10]) - fVar4;
          fStack_f0 = fStack_b0 - fVar5;
          fStack_ec = _DAT_0089096c - fVar6;
          fVar14 = (float10)FUN_0046fee0(&fStack_f8);
          fVar15 = (float10)(**(code **)(*piVar8 + 0x14))();
          if ((float10)(float)fVar14 < fVar15) {
            FUN_00466520(&fStack_f8,auStack_50,auStack_d0);
            fVar14 = (float10)FUN_00401d10(auStack_d0[0]);
            if (fVar14 < (float10)afStack_dc[0]) {
              fVar15 = (float10)FUN_00401d10(uStack_c8);
              fVar14 = (float10)fStack_d4;
              if (fVar15 < fVar14) {
                return CONCAT31((int3)(CONCAT22(extraout_var,
                                                (ushort)(fVar15 < fVar14) << 8 |
                                                (ushort)(NAN(fVar15) || NAN(fVar14)) << 10 |
                                                (ushort)(fVar15 == fVar14) << 0xe) >> 8),1);
              }
            }
          }
        }
      }
      puVar13 = puVar13 + 1;
      puVar12 = DAT_0092d07c;
    } while (puVar13 != DAT_0092d07c + (int)DAT_0092d084);
  }
  return (uint)puVar12 & 0xffffff00;
}

