/* speed.exe 007fb4ad FUN_007fb4ad; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fb4ad(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *unaff_ESI;
  int iVar12;
  
  piVar4 = DAT_00909e84;
  iVar11 = unaff_ESI[3] + unaff_ESI[5];
  iVar10 = unaff_ESI[7] + unaff_ESI[1];
  fVar2 = (float)(unaff_ESI[5] - unaff_ESI[3]);
  fVar3 = (float)(unaff_ESI[1] - unaff_ESI[7]);
  fVar1 = (fVar3 + fVar2) * _DAT_00909ea4;
  iVar8 = (int)((ulonglong)((longlong)(iVar10 - iVar11) * (longlong)DAT_00909e98) >> 0x20) * 2;
  _DAT_00909e90 = (double)((fVar3 * _DAT_00909ea0 - fVar1) + _DAT_00909ea8);
  _DAT_00909e88 = (double)(fVar2 * _DAT_00909e9c + fVar1 + _DAT_00909ea8);
  iVar5 = DAT_00909e88;
  iVar6 = DAT_00909e88 + iVar8;
  DAT_00909e94 = DAT_00909e90 + iVar11 + iVar10;
  _DAT_00909e88 = (double)CONCAT44(iVar6,DAT_00909e88);
  iVar11 = unaff_ESI[4] + *unaff_ESI;
  iVar7 = *unaff_ESI - unaff_ESI[4];
  iVar9 = (int)((ulonglong)((longlong)(unaff_ESI[2] - unaff_ESI[6]) * (longlong)DAT_00909e98) >>
               0x20);
  iVar10 = iVar9 * 2;
  iVar12 = unaff_ESI[6] + unaff_ESI[2] + iVar10;
  iVar10 = iVar10 + iVar7;
  iVar7 = iVar7 + iVar9 * -2;
  iVar9 = iVar12 + iVar11;
  iVar11 = iVar11 - iVar12;
  DAT_00909e90 = iVar8 + DAT_00909e90;
  DAT_00909e84[2] = iVar7 + iVar6;
  iVar8 = DAT_00909e90;
  piVar4[5] = iVar7 - iVar6;
  iVar6 = DAT_00909e94;
  piVar4[3] = iVar11 + iVar5;
  piVar4[4] = iVar11 - iVar5;
  *piVar4 = iVar9 + iVar6;
  piVar4[1] = iVar8 + iVar10;
  piVar4[6] = iVar10 - iVar8;
  piVar4[7] = iVar9 - iVar6;
  return;
}

