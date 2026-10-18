/* speed.exe 005dbd80 FUN_005dbd80; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005dbd80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int aiStack_40 [16];
  
  iVar5 = 0x78;
  do {
    iVar2 = *(int *)(param_1 + 0x1958);
    iVar1 = 0;
    if (0 < iVar2) {
      iVar3 = param_1 + 0x18;
      do {
        aiStack_40[iVar1] = iVar3;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x194;
      } while (iVar1 < iVar2);
    }
    iVar2 = iVar2 + -1;
    if (0 < iVar2) {
      piVar4 = aiStack_40 + iVar2;
      do {
        iVar1 = 0;
        if (3 < iVar2) {
          do {
            iVar3 = *piVar4;
            if (*(float *)(aiStack_40[iVar1] + iVar5) < *(float *)(iVar5 + iVar3)) {
              *piVar4 = aiStack_40[iVar1];
              aiStack_40[iVar1] = iVar3;
            }
            iVar3 = *piVar4;
            if (*(float *)(aiStack_40[iVar1 + 1] + iVar5) < *(float *)(iVar5 + iVar3)) {
              *piVar4 = aiStack_40[iVar1 + 1];
              aiStack_40[iVar1 + 1] = iVar3;
            }
            iVar3 = *piVar4;
            if (*(float *)(aiStack_40[iVar1 + 2] + iVar5) < *(float *)(iVar5 + iVar3)) {
              *piVar4 = aiStack_40[iVar1 + 2];
              aiStack_40[iVar1 + 2] = iVar3;
            }
            iVar3 = *piVar4;
            if (*(float *)(aiStack_40[iVar1 + 3] + iVar5) < *(float *)(iVar5 + iVar3)) {
              *piVar4 = aiStack_40[iVar1 + 3];
              aiStack_40[iVar1 + 3] = iVar3;
            }
            iVar1 = iVar1 + 4;
          } while (iVar1 < iVar2 + -3);
        }
        for (; iVar1 < iVar2; iVar1 = iVar1 + 1) {
          iVar3 = *piVar4;
          if (*(float *)(aiStack_40[iVar1] + iVar5) < *(float *)(iVar5 + iVar3)) {
            *piVar4 = aiStack_40[iVar1];
            aiStack_40[iVar1] = iVar3;
          }
        }
        iVar2 = iVar2 + -1;
        piVar4 = piVar4 + -1;
      } while (0 < iVar2);
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x1958)) {
      do {
        iVar1 = iVar2 + 1;
        *(int *)(iVar5 + 0x40 + aiStack_40[iVar2]) = iVar1;
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(param_1 + 0x1958));
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0xb8);
  return;
}

