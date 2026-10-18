/* speed.exe 00505050 FUN_00505050; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 005018f0 FUN_005018f0
 * calls 0045ce70 FUN_0045ce70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00505050(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (DAT_00925860 == 0) {
    uVar5 = FUN_0045ce40();
    piVar8 = DAT_00917400;
    if ((int **)DAT_00917400 != &DAT_00917400) {
      do {
        piVar2 = (int *)*piVar8;
        if (((piVar8[2] != 0) && (iVar6 = FUN_005018f0(piVar8[2],param_1), piVar8[2] != 0)) &&
           (iVar6 != piVar8[3])) {
          iVar3 = *piVar8;
          piVar4 = (int *)piVar8[1];
          *piVar4 = iVar3;
          *(int **)(iVar3 + 4) = piVar4;
          if (iVar6 == 0) {
            *DAT_00917404 = (int)piVar8;
            piVar4 = piVar8;
            piVar8[1] = (int)DAT_00917404;
            DAT_00917404 = piVar4;
            *piVar8 = (int)&DAT_00917400;
          }
          else {
            puVar1 = *(undefined4 **)(iVar6 + 0x8c);
            *puVar1 = piVar8;
            *(int **)(iVar6 + 0x8c) = piVar8;
            piVar8[1] = (int)puVar1;
            *piVar8 = iVar6 + 0x88;
          }
          piVar8[3] = iVar6;
        }
        piVar8 = piVar2;
      } while ((int **)piVar2 != &DAT_00917400);
    }
    uVar7 = FUN_0045ce40();
    fVar9 = (float10)FUN_0045ce70(uVar5,uVar7);
    fVar10 = fVar9;
    if (fVar9 < (float10)_DAT_00915fbc) {
      fVar10 = (float10)_DAT_00915fbc;
    }
    _DAT_00915fbc = (float)fVar10;
    DAT_00915fd0 = DAT_00915fd0 + 1;
    _DAT_00915fc4 = (float)((float10)_DAT_00915fc4 + fVar9);
    _DAT_00915fcc = _DAT_00915fc8 + _DAT_00915fc4;
  }
  else if ((int **)DAT_009175d0 != &DAT_009175d0) {
    do {
      piVar2 = DAT_009175d0;
      iVar6 = *DAT_009175d0;
      piVar8 = (int *)DAT_009175d0[1];
      *piVar8 = iVar6;
      *(int **)(iVar6 + 4) = piVar8;
      iVar6 = piVar2[3];
      puVar1 = *(undefined4 **)(iVar6 + 0x8c);
      *puVar1 = piVar2;
      *(int **)(iVar6 + 0x8c) = piVar2;
      piVar2[1] = (int)puVar1;
      *piVar2 = iVar6 + 0x88;
    } while ((int **)DAT_009175d0 != &DAT_009175d0);
    return;
  }
  return;
}

