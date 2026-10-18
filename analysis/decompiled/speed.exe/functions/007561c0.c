/* speed.exe 007561c0 FUN_007561c0; analysis pseudocode, not buildable source.
 * calls 00503c50 FUN_00503c50
 * calls 006269b0 FUN_006269b0
 * calls 00744980 FUN_00744980
 * calls 00454810 FUN_00454810
 * calls 00744a50 FUN_00744a50
 * calls 00744c00 FUN_00744c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007561c0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  fVar5 = _DAT_008f2260 * _DAT_008b2f7c;
  if (((DAT_009885c8 != 0) || (cVar6 = FUN_00744c00(), cVar6 != '\0')) ||
     ((*(uint *)(param_1 + 0x3c8) <= *(uint *)(param_1 + 0x3cc) &&
      ((*(uint *)(param_1 + 0x3cc) != 0 && (*(float *)(param_1 + 0x3d0) <= fVar5)))))) {
    iVar7 = FUN_00454810(0x30b2997b,0);
    if (iVar7 == 0) {
      iVar7 = FUN_006269b0(0xc);
    }
    iVar7 = *(int *)(iVar7 + 4);
    iVar8 = FUN_00454810(0xf7b59fc7,0);
    if (iVar8 == 0) {
      iVar8 = FUN_006269b0(0xc);
    }
    iVar8 = *(int *)(iVar8 + 4);
    iVar9 = FUN_00454810(0xd9cca9a3,0);
    if (iVar9 == 0) {
      iVar9 = FUN_006269b0(0xc);
    }
    uVar2 = *(undefined4 *)(iVar9 + 4);
    iVar9 = FUN_00454810(0xb699b7be,0);
    if (iVar9 == 0) {
      iVar9 = FUN_006269b0(0xc);
    }
    uVar3 = *(undefined4 *)(iVar9 + 4);
    iVar9 = FUN_00454810(0x60cec115,0);
    if (iVar9 == 0) {
      iVar9 = FUN_006269b0(0xc);
    }
    piVar11 = *(int **)(param_1 + 0x3e4);
    uVar4 = *(undefined4 *)(iVar9 + 4);
    if (piVar11 != (int *)(param_1 + 0x3e4)) {
      do {
        if (*(char *)(param_2 + 0x71) == '\0') {
          if ((*(uint *)(param_1 + 0x3f8) & 2) == 0) {
            if (((*(uint *)(param_1 + 0x3f8) & 0x10) == 0) ||
               (*(float *)(param_1 + 0x3d8) == _DAT_00890968)) {
              if (piVar11[0x14] != 0) {
                FUN_00503c50();
              }
            }
            else {
              FUN_00744a50(param_1 + 0x330,uVar4,param_3,0x3f800000,*(undefined4 *)(param_1 + 0x38))
              ;
            }
          }
          else {
            FUN_00744980(param_1 + 0x330,uVar3,0x3f800000,*(undefined4 *)(param_1 + 0x38));
          }
        }
        else {
          FUN_00744a50(param_1 + 0x330,uVar4,param_3,0x3f800000,*(undefined4 *)(param_1 + 0x38));
        }
        piVar11 = (int *)*piVar11;
      } while (piVar11 != (int *)(param_1 + 0x3e4));
    }
    for (puVar1 = *(undefined4 **)(param_1 + 0x3ec); puVar1 != (undefined4 *)(param_1 + 0x3ec);
        puVar1 = (undefined4 *)*puVar1) {
      if ((iVar8 == 0) ||
         (*(float *)(param_2 + 0x90) < _DAT_00890968 ==
          (*(float *)(param_2 + 0x90) == _DAT_00890968))) {
        if ((iVar7 == 0) ||
           (*(float *)(param_2 + 0x90) < _DAT_008933d4 ==
            (*(float *)(param_2 + 0x90) == _DAT_008933d4))) {
          if (*(char *)(param_2 + 0x72) == '\0') {
            if (puVar1[0x14] != 0) {
              FUN_00503c50();
            }
          }
          else {
            FUN_00744a50(param_1 + 0x330,uVar2,param_3,0x3f800000,*(undefined4 *)(param_1 + 0x38));
          }
        }
        else {
          FUN_00744a50(param_1 + 0x330,iVar7,param_3,0x3f800000,*(undefined4 *)(param_1 + 0x38));
        }
      }
      else {
        FUN_00744a50(param_1 + 0x330,iVar8,param_3,0x3f800000,*(undefined4 *)(param_1 + 0x38));
      }
    }
    *(uint *)(param_1 + 0x3f8) = *(uint *)(param_1 + 0x3f8) & 0xfffffffd;
  }
  else {
    for (puVar1 = *(undefined4 **)(param_1 + 0x3e4); puVar1 != (undefined4 *)(param_1 + 0x3e4);
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[0x14] != 0) {
        FUN_00503c50();
      }
    }
    piVar11 = (int *)(param_1 + 0x3ec);
    piVar10 = (int *)*piVar11;
    if (piVar10 != piVar11) {
      do {
        if (piVar10[0x14] != 0) {
          FUN_00503c50();
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != piVar11);
      return;
    }
  }
  return;
}

