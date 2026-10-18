/* speed.exe 006c88d0 FUN_006c88d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_006c88d0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  float *in_EAX;
  uint uVar17;
  float *unaff_EDI;
  
  fVar1 = *param_2;
  fVar10 = *in_EAX;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar11 = in_EAX[1];
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar12 = in_EAX[2];
  fVar6 = param_1[2];
  fVar16 = fVar12 * fVar5 - fVar11 * fVar6;
  fVar15 = fVar10 * fVar6 - fVar12 * fVar4;
  fVar14 = fVar11 * fVar4 - fVar5 * fVar10;
  fVar13 = fVar1 * fVar16 + fVar15 * fVar2 + fVar14 * fVar3;
  uVar17 = (uint)fVar13 & 0x7f800000;
  if ((uVar17 != 0) && (uVar17 != 0x7f800000)) {
    fVar13 = _DAT_0089096c / fVar13;
    fVar7 = param_2[3];
    fVar8 = param_1[3];
    fVar9 = in_EAX[3];
    *unaff_EDI = -((fVar11 * fVar3 - fVar12 * fVar2) * fVar8 + fVar16 * fVar7 +
                  (fVar6 * fVar2 - fVar5 * fVar3) * fVar9) * fVar13;
    unaff_EDI[1] = -((fVar12 * fVar1 - fVar3 * fVar10) * fVar8 + fVar15 * fVar7 +
                    (fVar3 * fVar4 - fVar6 * fVar1) * fVar9) * fVar13;
    unaff_EDI[2] = -((fVar2 * fVar10 - fVar11 * fVar1) * fVar8 + fVar14 * fVar7 +
                    (fVar5 * fVar1 - fVar2 * fVar4) * fVar9) * fVar13;
    return 1;
  }
  return 0;
}

