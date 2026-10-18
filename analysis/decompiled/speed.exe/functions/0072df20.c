/* speed.exe 0072df20 FUN_0072df20; analysis pseudocode, not buildable source.
 * calls 0072db80 FUN_0072db80
 */

byte __thiscall FUN_0072df20(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  
  bVar2 = 0;
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0xe4);
  do {
    sVar3 = -1;
    if ((char)piVar4[-2] != '\0') {
      sVar3 = FUN_0072db80(piVar4 + -9);
    }
    if (sVar3 == (short)piVar4[-1]) {
      *piVar4 = *piVar4 + 1;
    }
    else {
      *(short *)(piVar4 + -1) = sVar3;
      if (*piVar4 == -1) {
        *piVar4 = 1000;
      }
      else {
        *piVar4 = 1;
      }
    }
    sVar1 = *(short *)((int)piVar4 + -6);
    if (sVar3 != sVar1) {
      if (*piVar4 < 0) {
        sVar3 = sVar1;
      }
      if (sVar3 != sVar1) {
        bVar2 = 1;
      }
    }
    *(short *)(param_2 + iVar5 * 2) = sVar3;
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 0x19;
  } while (iVar5 < 2);
  return *(byte *)(param_1 + 0x2b0) | bVar2;
}

