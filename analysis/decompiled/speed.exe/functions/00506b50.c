/* speed.exe 00506b50 FUN_00506b50; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 005018f0 FUN_005018f0
 * calls 0045ce70 FUN_0045ce70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00506b50(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (DAT_00925860 == 0) {
    uVar6 = FUN_0045ce40();
    puVar1 = (undefined4 *)(param_1 + 0x88);
    if ((undefined4 *)*puVar1 != puVar1) {
      iVar7 = 0;
      if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
        iVar7 = FUN_005018f0(*(undefined4 *)(param_1 + 0x10),0);
      }
      puVar4 = (undefined4 *)*puVar1;
      while (puVar4 != puVar1) {
        piVar2 = (int *)*puVar1;
        if ((piVar2[2] != 0) && (iVar7 != piVar2[3])) {
          iVar5 = *piVar2;
          piVar3 = (int *)piVar2[1];
          *piVar3 = iVar5;
          *(int **)(iVar5 + 4) = piVar3;
          if (iVar7 == 0) {
            *DAT_00917404 = (int)piVar2;
            piVar3 = piVar2;
            piVar2[1] = (int)DAT_00917404;
            DAT_00917404 = piVar3;
            *piVar2 = (int)&DAT_00917400;
          }
          else {
            puVar4 = *(undefined4 **)(iVar7 + 0x8c);
            *puVar4 = piVar2;
            *(int **)(iVar7 + 0x8c) = piVar2;
            piVar2[1] = (int)puVar4;
            *piVar2 = iVar7 + 0x88;
          }
          piVar2[3] = iVar7;
        }
        puVar4 = (undefined4 *)*puVar1;
      }
    }
    uVar8 = FUN_0045ce40();
    fVar9 = (float10)FUN_0045ce70(uVar6,uVar8);
    fVar10 = fVar9;
    if (fVar9 < (float10)_DAT_00915fc0) {
      fVar10 = (float10)_DAT_00915fc0;
    }
    _DAT_00915fc0 = (float)fVar10;
    DAT_00915fd4 = DAT_00915fd4 + 1;
    _DAT_00915fc8 = (float)((float10)_DAT_00915fc8 + fVar9);
    _DAT_00915fcc = _DAT_00915fc4 + _DAT_00915fc8;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x88);
    if (*(undefined4 **)(param_1 + 0x88) != puVar1) {
      do {
        piVar2 = (int *)*puVar1;
        iVar7 = *piVar2;
        piVar3 = (int *)piVar2[1];
        *piVar3 = iVar7;
        *(int **)(iVar7 + 4) = piVar3;
        *DAT_009175d4 = (int)piVar2;
        piVar3 = piVar2;
        piVar2[1] = (int)DAT_009175d4;
        DAT_009175d4 = piVar3;
        *piVar2 = (int)&DAT_009175d0;
        piVar2[3] = DAT_00925860 + param_1;
      } while ((undefined4 *)*puVar1 != puVar1);
      return;
    }
  }
  return;
}

