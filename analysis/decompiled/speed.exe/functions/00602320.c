/* speed.exe 00602320 FUN_00602320; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 * calls 005fab40 FUN_005fab40
 * calls 005eb4e0 FUN_005eb4e0
 * calls 00565f20 FUN_00565f20
 * calls 006022a0 FUN_006022a0
 * calls 00527d40 FUN_00527d40
 * calls 007c4b80 FUN_007c4b80
 * calls 005e3390 FUN_005e3390
 * calls 005fffd0 FUN_005fffd0
 */

void __thiscall FUN_00602320(uint *param_1,char param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  float10 fVar7;
  
  iVar2 = FUN_005fab40();
  iVar3 = FUN_005eb4e0();
  if (iVar3 != 0) {
    piVar6 = (int *)param_1[0xf];
    uVar5 = 0;
    if (*param_1 != 0) {
      do {
        if (*piVar6 == 0) break;
        if (*piVar6 == iVar2) goto LAB_00602379;
        piVar6 = piVar6 + 4;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *param_1);
    }
    *piVar6 = iVar2;
LAB_00602379:
    FUN_00527d40();
    FUN_00527d40();
    uVar1 = FUN_007c4b80();
    *(undefined2 *)(piVar6 + 3) = uVar1;
    FUN_00527d40();
    FUN_005e3390();
    FUN_00527d40();
    uVar1 = FUN_007c4b80();
    *(undefined2 *)((int)piVar6 + 0xe) = uVar1;
    uVar4 = FUN_005faa20();
    switch(uVar4) {
    case 0:
    case 2:
    case 4:
    case 9:
    case 10:
      if (((*(byte *)(piVar6 + 1) & 3) == 0) ||
         (fVar7 = (float10)FUN_00565f20(), fVar7 < (float10)(float)piVar6[2])) {
        fVar7 = (float10)FUN_00565f20();
        piVar6[2] = (int)(float)fVar7;
      }
      break;
    case 1:
    case 3:
      if (((*(byte *)(piVar6 + 1) & 3) == 0) ||
         (fVar7 = (float10)FUN_005fffd0(*(undefined4 *)(iVar3 + 0xc)),
         fVar7 < (float10)(float)piVar6[2])) {
        fVar7 = (float10)FUN_005fffd0(*(undefined4 *)(iVar3 + 0xc));
        piVar6[2] = (int)(float)fVar7;
      }
      break;
    case 5:
      if (((*(byte *)(piVar6 + 1) & 3) == 0) || ((float)piVar6[2] < *(float *)(iVar3 + 0x120))) {
        piVar6[2] = *(int *)(iVar3 + 0x120);
      }
      break;
    case 6:
      uVar5 = FUN_007c4b80();
      if (((*(byte *)(piVar6 + 1) & 3) == 0) || ((uint)piVar6[2] < uVar5)) {
        piVar6[2] = uVar5;
      }
      break;
    case 7:
      if (((*(byte *)(piVar6 + 1) & 3) == 0) || ((float)piVar6[2] < *(float *)(iVar3 + 0x120))) {
        piVar6[2] = *(int *)(iVar3 + 0x120);
      }
    }
    if (param_2 != '\0') {
      if (*(int *)(DAT_0091e000 + 0x1964) == 2) {
        piVar6[1] = piVar6[1] | 2;
        FUN_006022a0();
        return;
      }
      piVar6[1] = piVar6[1] | 1;
      FUN_006022a0();
    }
  }
  return;
}

