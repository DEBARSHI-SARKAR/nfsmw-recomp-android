/* speed.exe 00825270 FUN_00825270; analysis pseudocode, not buildable source.
 */

void FUN_00825270(uint param_1,float param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  
  while ((((param_1 & 0xf) != 0 || ((param_3 & 0xf) != 0)) || ((param_4 & 0xf) != 0))) {
    *(float *)((param_4 - 4) + param_1 * 4) =
         *(float *)((param_3 - 4) + param_1 * 4) * param_2 + *(float *)((param_4 - 4) + param_1 * 4)
    ;
    param_1 = param_1 - 1;
    if (param_1 == 0) {
      return;
    }
  }
  do {
    pfVar1 = (float *)((param_3 - 0x40) + param_1 * 4);
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
    fVar7 = pfVar1[3];
    pfVar2 = (float *)((param_3 - 0x30) + param_1 * 4);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
    fVar11 = pfVar2[3];
    pfVar2 = (float *)((param_3 - 0x20) + param_1 * 4);
    fVar12 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar14 = pfVar2[2];
    fVar15 = pfVar2[3];
    pfVar2 = (float *)((param_3 - 0x10) + param_1 * 4);
    fVar16 = *pfVar2;
    fVar17 = pfVar2[1];
    fVar18 = pfVar2[2];
    fVar19 = pfVar2[3];
    pfVar2 = (float *)((param_4 - 0x40) + param_1 * 4);
    fVar20 = pfVar2[1];
    fVar21 = pfVar2[2];
    fVar22 = pfVar2[3];
    pfVar3 = (float *)((param_4 - 0x30) + param_1 * 4);
    fVar23 = *pfVar3;
    fVar24 = pfVar3[1];
    fVar25 = pfVar3[2];
    fVar26 = pfVar3[3];
    pfVar3 = (float *)((param_4 - 0x20) + param_1 * 4);
    fVar27 = *pfVar3;
    fVar28 = pfVar3[1];
    fVar29 = pfVar3[2];
    fVar30 = pfVar3[3];
    pfVar3 = (float *)((param_4 - 0x10) + param_1 * 4);
    fVar31 = *pfVar3;
    fVar32 = pfVar3[1];
    fVar33 = pfVar3[2];
    fVar34 = pfVar3[3];
    pfVar3 = (float *)((param_4 - 0x40) + param_1 * 4);
    *pfVar3 = *pfVar1 * param_2 + *pfVar2;
    pfVar3[1] = fVar5 * param_2 + fVar20;
    pfVar3[2] = fVar6 * param_2 + fVar21;
    pfVar3[3] = fVar7 * param_2 + fVar22;
    pfVar1 = (float *)((param_4 - 0x30) + param_1 * 4);
    *pfVar1 = fVar8 * param_2 + fVar23;
    pfVar1[1] = fVar9 * param_2 + fVar24;
    pfVar1[2] = fVar10 * param_2 + fVar25;
    pfVar1[3] = fVar11 * param_2 + fVar26;
    pfVar1 = (float *)((param_4 - 0x20) + param_1 * 4);
    *pfVar1 = fVar12 * param_2 + fVar27;
    pfVar1[1] = fVar13 * param_2 + fVar28;
    pfVar1[2] = fVar14 * param_2 + fVar29;
    pfVar1[3] = fVar15 * param_2 + fVar30;
    pfVar1 = (float *)((param_4 - 0x10) + param_1 * 4);
    *pfVar1 = fVar16 * param_2 + fVar31;
    pfVar1[1] = fVar17 * param_2 + fVar32;
    pfVar1[2] = fVar18 * param_2 + fVar33;
    pfVar1[3] = fVar19 * param_2 + fVar34;
    uVar35 = param_1 - 0x10;
    bVar4 = 0xf < (int)param_1;
    param_1 = uVar35;
  } while (uVar35 != 0 && bVar4);
  return;
}

