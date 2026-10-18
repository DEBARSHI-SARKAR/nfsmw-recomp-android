/* speed.exe 00819875 FUN_00819875; analysis pseudocode, not buildable source.
 * calls 008311c6 FUN_008311c6
 * calls 00831714 FUN_00831714
 * calls 008311aa FUN_008311aa
 * calls 00831782 FUN_00831782
 */

int FUN_00819875(int param_1)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  
  iVar6 = param_1;
  cVar3 = *(char *)(param_1 + 0xc);
  iVar7 = 0;
  if (cVar3 == '\0') {
    piVar9 = (int *)(param_1 + 0x10);
  }
  else {
    iVar7 = param_1 + 0x10;
    piVar9 = (int *)(iVar7 + (uint)*(byte *)(param_1 + 0xd) * 8);
  }
  piVar1 = (int *)(param_1 + 8);
  if (piVar9[1] == 0) {
    if (*piVar9 == 0) {
      if (*piVar1 != 0) {
        if ((cVar3 != '\0') && (pcVar2 = (char *)(param_1 + 0xd), param_1 = 0, *pcVar2 != '\0')) {
          piVar8 = piVar9 + 2;
          do {
            iVar4 = *(int *)(param_1 * 8 + 4 + iVar7);
            iVar10 = *(int *)(param_1 * 8 + iVar7);
            iVar5 = *piVar8;
            if ((iVar10 <= iVar5) && (iVar10 = iVar5, iVar4 < iVar5)) {
              iVar10 = iVar4;
            }
            param_1 = param_1 + 1;
            *piVar8 = iVar10;
            piVar8 = piVar8 + 1;
          } while (param_1 < (int)(uint)*(byte *)(iVar6 + 0xd));
        }
        FUN_008311c6(piVar9 + 2);
      }
      goto LAB_00819978;
    }
    if (*piVar1 != 0) goto LAB_00819978;
    if ((cVar3 != '\0') && (pcVar2 = (char *)(param_1 + 0xd), param_1 = 0, *pcVar2 != '\0')) {
      piVar8 = piVar9 + 2;
      do {
        iVar4 = *(int *)(param_1 * 8 + 4 + iVar7);
        iVar10 = *(int *)(param_1 * 8 + iVar7);
        iVar5 = *piVar8;
        if ((iVar10 <= iVar5) && (iVar10 = iVar5, iVar4 < iVar5)) {
          iVar10 = iVar4;
        }
        param_1 = param_1 + 1;
        *piVar8 = iVar10;
        piVar8 = piVar8 + 1;
      } while (param_1 < (int)(uint)*(byte *)(iVar6 + 0xd));
    }
    iVar7 = FUN_00831714(iVar6,piVar9 + 2,piVar1);
    if (-1 < iVar7) goto LAB_00819978;
  }
  else {
    if (*piVar1 == 0) goto LAB_00819978;
    FUN_00831782();
  }
  *piVar1 = 0;
LAB_00819978:
  if (*piVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_008311aa(&param_1);
  }
  return param_1;
}

