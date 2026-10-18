/* speed.exe 005fde80 FUN_005fde80; analysis pseudocode, not buildable source.
 * calls 005e31d0 FUN_005e31d0
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005fde80(int param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_40 [16];
  
  iVar9 = *(int *)(param_1 + 0x1958);
  iVar6 = 0;
  if (0 < iVar9) {
    iVar8 = param_1 + 0x18;
    do {
      local_40[iVar6] = iVar8;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x194;
    } while (iVar6 < iVar9);
  }
  iVar9 = *(int *)(param_1 + 0x1968);
  if (*(int *)(iVar9 + 4) == 0) {
    piVar10 = *(int **)(iVar9 + 0xc);
    if ((piVar10 != (int *)0x0) && (*piVar10 == 0)) {
      FUN_005fa780(piVar10);
    }
    piVar10 = *(int **)(iVar9 + 0x10);
    if ((piVar10 != (int *)0x0) && (*piVar10 == 0)) {
      FUN_005fa780(piVar10);
    }
    pbVar7 = (byte *)FUN_00454810(0x5ec1880f,0);
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = (byte *)FUN_006269b0(1);
    }
    bVar4 = *pbVar7;
  }
  else {
    bVar4 = (byte)(*(uint *)(*(int *)(iVar9 + 4) + 0x18) >> 9) & 1;
  }
  iVar9 = *(int *)(param_1 + 0x1958) + -1;
  if (0 < iVar9) {
    piVar10 = local_40 + iVar9;
    do {
      iVar6 = 0;
      if (0 < iVar9) {
        do {
          iVar8 = local_40[iVar6];
          iVar2 = *piVar10;
          if (bVar4 == 0) {
LAB_005fdf73:
            cVar5 = FUN_005e31d0(iVar2);
            if (cVar5 != '\0') {
LAB_005fdf83:
              *piVar10 = iVar8;
              local_40[iVar6] = iVar2;
            }
          }
          else {
            fVar1 = *(float *)(iVar8 + 0x120);
            if (fVar1 + *(float *)(iVar2 + 0x120) <= _DAT_0089096c) goto LAB_005fdf73;
            if (fVar1 < *(float *)(iVar2 + 0x120)) goto LAB_005fdf83;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar9);
      }
      iVar9 = iVar9 + -1;
      piVar10 = piVar10 + -1;
    } while (0 < iVar9);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x1958)) {
    piVar10 = local_40;
    iVar6 = 1;
    do {
      iVar8 = *piVar10;
      *(int *)(iVar8 + 0x10) = iVar6;
      if (*(int *)(iVar8 + 4) == 0) {
        *(undefined4 *)(iVar8 + 0x14) = 0;
        iVar9 = iVar9 + 1;
      }
      else {
        *(int *)(iVar8 + 0x14) = iVar6 - iVar9;
      }
      piVar10 = piVar10 + 1;
      bVar3 = iVar6 < *(int *)(param_1 + 0x1958);
      iVar6 = iVar6 + 1;
    } while (bVar3);
  }
  return;
}

