/* speed.exe 00722db0 FUN_00722db0; analysis pseudocode, not buildable source.
 * calls 005f19c0 FUN_005f19c0
 */

void __fastcall FUN_00722db0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0xc);
  do {
    *piVar2 = 0;
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 < (int *)(*(int *)(param_1 + 4) + (int)piVar1)) {
      do {
        if (*piVar1 == iVar3) {
          if (*piVar2 == 0) {
            piVar2[1] = (int)piVar1;
          }
          piVar2[2] = (int)*(short *)((int)piVar1 + 0x42) + (int)piVar1;
          *piVar2 = *piVar2 + 1;
        }
        piVar1 = (int *)((int)piVar1 + (int)*(short *)((int)piVar1 + 0x42));
      } while (piVar1 < (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 4)));
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x13;
  } while (iVar3 < 0xf);
  FUN_005f19c0();
  return;
}

