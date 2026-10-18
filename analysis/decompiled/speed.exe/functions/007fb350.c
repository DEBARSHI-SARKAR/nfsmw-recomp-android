/* speed.exe 007fb350 FUN_007fb350; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fb350(void)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_ESI;
  int iVar10;
  
  piVar2 = DAT_00909e84;
  iVar9 = unaff_ESI[5];
  iVar8 = unaff_ESI[3];
  iVar7 = unaff_ESI[1];
  iVar10 = unaff_ESI[7];
  if (((((unaff_ESI[2] != 0 || iVar9 != 0) || (unaff_ESI[6] != 0 || iVar8 != 0)) ||
       unaff_ESI[4] != 0) || iVar7 != 0) || iVar10 != 0) {
    fVar1 = ((float)(iVar7 - iVar10) + (float)(iVar9 - iVar8)) * _DAT_00909ea4;
    iVar6 = (int)((ulonglong)
                  ((longlong)((iVar10 + iVar7) - (iVar8 + iVar9)) * (longlong)DAT_00909e98) >> 0x20)
            * 2;
    _DAT_00909e90 = (double)(((float)(iVar7 - iVar10) * _DAT_00909ea0 - fVar1) + _DAT_00909ea8);
    _DAT_00909e88 = (double)((float)(iVar9 - iVar8) * _DAT_00909e9c + fVar1 + _DAT_00909ea8);
    iVar3 = DAT_00909e88;
    iVar4 = DAT_00909e88 + iVar6;
    DAT_00909e94 = DAT_00909e90 + iVar8 + iVar9 + iVar10 + iVar7;
    _DAT_00909e88 = (double)CONCAT44(iVar4,DAT_00909e88);
    iVar9 = unaff_ESI[4] + *unaff_ESI;
    iVar5 = *unaff_ESI - unaff_ESI[4];
    iVar7 = (int)((ulonglong)((longlong)(unaff_ESI[2] - unaff_ESI[6]) * (longlong)DAT_00909e98) >>
                 0x20);
    iVar8 = iVar7 * 2;
    iVar10 = unaff_ESI[6] + unaff_ESI[2] + iVar8;
    iVar8 = iVar8 + iVar5;
    iVar5 = iVar5 + iVar7 * -2;
    iVar7 = iVar10 + iVar9;
    iVar9 = iVar9 - iVar10;
    DAT_00909e90 = iVar6 + DAT_00909e90;
    DAT_00909e84[0x12] = iVar5 + iVar4;
    iVar10 = DAT_00909e90;
    piVar2[0x2d] = iVar5 - iVar4;
    iVar4 = DAT_00909e94;
    piVar2[0x1b] = iVar9 + iVar3;
    piVar2[0x24] = iVar9 - iVar3;
    *piVar2 = iVar7 + iVar4;
    piVar2[9] = iVar10 + iVar8;
    piVar2[0x36] = iVar8 - iVar10;
    piVar2[0x3f] = iVar7 - iVar4;
    return;
  }
  iVar9 = *unaff_ESI;
  *DAT_00909e84 = iVar9;
  piVar2[9] = iVar9;
  piVar2[0x12] = iVar9;
  piVar2[0x1b] = iVar9;
  piVar2[0x24] = iVar9;
  piVar2[0x2d] = iVar9;
  piVar2[0x36] = iVar9;
  piVar2[0x3f] = iVar9;
  return;
}

