/* speed.exe 00507b50 FUN_00507b50; analysis pseudocode, not buildable source.
 * calls 00463c70 FUN_00463c70
 * calls 005078e0 FUN_005078e0
 * calls 00502c40 FUN_00502c40
 * calls 004fcdb0 FUN_004fcdb0
 * calls 00502ff0 FUN_00502ff0
 * calls 00502f10 FUN_00502f10
 */

undefined4 FUN_00507b50(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  iVar6 = *param_1;
  if (iVar6 == -0x4cd00000) {
    iVar6 = param_1[1];
    iVar5 = 0;
    for (piVar8 = param_1 + 2; piVar8 != (int *)(iVar6 + 8 + (int)param_1);
        piVar8 = (int *)((int)piVar8 + piVar8[1] + 8)) {
      if (*piVar8 == -0x4ccf0000) {
        iVar5 = FUN_005078e0(piVar8);
        DAT_00916048 = *(undefined4 *)(iVar5 + 0x70);
      }
      else if (*piVar8 == -0x4cce0000) {
        iVar2 = *(int *)(piVar8[3] + 0x14 + (int)piVar8);
        piVar1 = piVar8 + 4;
        if (piVar8[8] == 0) {
          piVar8[8] = 1;
        }
        piVar8[9] = (int)piVar8 + iVar2 + piVar8[3] + 0x18;
        *DAT_0091c17c = (int)piVar1;
        piVar4 = piVar1;
        piVar8[5] = (int)DAT_0091c17c;
        DAT_0091c17c = piVar4;
        *piVar1 = (int)&DAT_0091c178;
      }
    }
    if ((int **)DAT_0091c178 != &DAT_0091c178) {
      piVar8 = DAT_0091c178;
      while (piVar8[3] != *(int *)(iVar5 + 0x60)) {
        piVar8 = (int *)*piVar8;
        if ((int **)piVar8 == &DAT_0091c178) {
          return 1;
        }
      }
      iVar5 = *(int *)(iVar5 + 0x70);
      iVar6 = piVar8[5];
      uVar7 = iVar6 + 0x87U & 0xffffff80;
      iVar6 = (*(int *)(iVar6 + 4) - uVar7) + 8 + iVar6;
      FUN_004fcdb0(uVar7,0,iVar6);
      *(int *)(iVar5 + 0x1c) = iVar6;
      iVar6 = *piVar8;
      piVar8 = (int *)piVar8[1];
      *piVar8 = iVar6;
      *(int **)(iVar6 + 4) = piVar8;
    }
    return 1;
  }
  if (iVar6 == -0x4cce0000) {
    FUN_00502c40(param_1);
    return 1;
  }
  if (iVar6 != -0x4fcfff00) {
    return 0;
  }
  iVar6 = param_1[3];
  uVar7 = *(uint *)(iVar6 + 0x14 + (int)param_1);
  if (param_1[4] == 1) {
    uVar3 = *(uint *)((int)param_1 + uVar7 + 0xc + iVar6 + 0x10);
    iVar5 = FUN_00463c70(DAT_00916044);
    if (iVar5 == 0) {
      param_1[5] = 0;
      FUN_00502ff0();
      param_1[6] = 1;
      return 1;
    }
    iVar6 = FUN_00502f10(DAT_00916048,(int)param_1 + iVar6 + 0x18,
                         (int)param_1 + uVar7 + 0x10 + iVar6 + 0x10,uVar7 / 0x34,uVar3 >> 4);
    param_1[5] = iVar6;
    FUN_00502ff0();
    param_1[6] = 1;
    return 1;
  }
  param_1[5] = 0;
  param_1[6] = 1;
  return 1;
}

