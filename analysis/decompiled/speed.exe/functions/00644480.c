/* speed.exe 00644480 FUN_00644480; analysis pseudocode, not buildable source.
 * calls 00643950 FUN_00643950
 * calls 0063ff30 FUN_0063ff30
 */

void __thiscall FUN_00644480(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar4 = 0;
    if (DAT_009203a4 != 0) {
      do {
        if ((&DAT_0091e148)[uVar4] == param_1) goto LAB_006444b1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_009203a4);
    }
    uVar4 = 0xffffffff;
LAB_006444b1:
    if (uVar4 < DAT_009203a4) {
      uVar1 = DAT_009203a4 - 1;
      if (uVar4 < uVar1) {
        puVar8 = &DAT_0091e14c + uVar4;
        puVar9 = &DAT_0091e148 + uVar4;
        for (iVar7 = uVar1 - uVar4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      (&DAT_0091e144)[DAT_009203a4] = 0;
      DAT_009203a4 = uVar1;
    }
  }
  piVar3 = *(int **)(param_1 + 4);
  *(int *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_3 = *piVar3;
  iVar7 = piVar3[2];
  piVar2 = piVar3 + 3;
  piVar5 = (int *)FUN_0063ff30(piVar2,piVar2 + iVar7,&param_3,0);
  if ((piVar5 < piVar2 + iVar7) && (*piVar5 == param_3)) {
    iVar7 = piVar3[((int)piVar5 - (int)piVar2 >> 2) + piVar3[2] + 3];
  }
  else {
    iVar7 = 0;
  }
  *(int *)(param_1 + 8) = iVar7;
  if (iVar7 != 0) {
    *(int *)(param_1 + 0x20) = *piVar3;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  uVar6 = FUN_00643950(piVar3[1]);
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(int *)(param_1 + 0x20) = piVar3[1];
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

