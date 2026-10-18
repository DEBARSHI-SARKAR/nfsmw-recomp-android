/* speed.exe 00503830 FUN_00503830; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00503830(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = DAT_00916054;
  iVar12 = DAT_00916018;
  if (DAT_00916054 != 0) {
    fVar1 = *(float *)(DAT_009b392c + 0x170);
    fVar2 = *(float *)(DAT_009b392c + 0x174);
    fVar3 = *(float *)(DAT_009b392c + 0x178);
    fVar4 = *(float *)(DAT_00919690 + 0x40);
    fVar5 = *(float *)(DAT_00919690 + 0x44);
    fVar6 = *(float *)(DAT_00919690 + 0x48);
    fVar7 = _DAT_0089096c / SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
    fVar8 = fVar7 * fVar1 * _DAT_00899c90;
    fVar1 = fVar7 * fVar2 * _DAT_00899c90;
    fVar2 = fVar7 * fVar3 * _DAT_00899c90;
    iVar10 = DAT_00916018;
    if (DAT_00916018 != 0x32) {
      iVar11 = DAT_00916018 * 0x30;
      (&DAT_00915aa8)[DAT_00916018] = 0xfe;
      iVar10 = DAT_00916018 + 1;
      DAT_00916018 = iVar10;
      if (iVar11 != -0x916a78) {
        *(float *)(&DAT_00916a90 + iVar11) = fVar2 + fVar6;
        (&DAT_00916a88)[iVar12 * 0xc] = fVar8 + fVar4;
        (&DAT_00916aa5)[iVar11] = 2;
        *(float *)(&DAT_00916a8c + iVar11) = fVar1 + fVar5;
        (&DAT_00916aa4)[iVar11] = 0x15;
      }
    }
    fVar3 = fVar7 * *(float *)(iVar9 + 0x20) * _DAT_00899c94;
    fVar1 = fVar7 * *(float *)(iVar9 + 0x24) * _DAT_00899c94;
    fVar2 = fVar7 * *(float *)(iVar9 + 0x28) * _DAT_00899c94;
    if (iVar10 != 0x32) {
      iVar12 = iVar10 * 0x30;
      (&DAT_00915aa8)[iVar10] = 0xfc00f6;
      DAT_00916018 = iVar10 + 1;
      if (iVar12 != -0x916a78) {
        *(float *)(&DAT_00916a90 + iVar12) = fVar2 + fVar6;
        (&DAT_00916aa5)[iVar12] = 2;
        (&DAT_00916a88)[iVar10 * 0xc] = fVar3 + fVar4;
        *(float *)(&DAT_00916a8c + iVar12) = fVar1 + fVar5;
        (&DAT_00916aa4)[iVar12] = 0x15;
        return;
      }
    }
  }
  return;
}

