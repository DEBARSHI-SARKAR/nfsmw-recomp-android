/* speed.exe 007273c0 FUN_007273c0; analysis pseudocode, not buildable source.
 * calls 00722db0 FUN_00722db0
 */

undefined4 __thiscall FUN_007273c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*param_2 == -0x7ffcbeb9) {
    iVar1 = param_2[1];
    for (piVar4 = param_2 + 2; piVar4 != (int *)(iVar1 + 8 + (int)param_2);
        piVar4 = (int *)((int)piVar4 + piVar4[1] + 8)) {
      if (*piVar4 == 0x3414a) {
        piVar3 = piVar4 + 2;
        param_1[2] = (int)piVar3;
        iVar2 = piVar4[1];
        param_1[1] = iVar2;
        *param_1 = 0;
        if (piVar3 < (int *)(iVar2 + (int)piVar3)) {
          do {
            *param_1 = *param_1 + 1;
            piVar3 = (int *)((int)piVar3 + (int)*(short *)((int)piVar3 + 0x42));
          } while (piVar3 < (int *)(param_1[2] + param_1[1]));
        }
      }
    }
    FUN_00722db0();
    return 1;
  }
  if (*param_2 == 0x3414d) {
    param_1[0x122] = (int)(param_2 + 2);
    param_1[0x121] = (uint)param_2[1] / 0x18;
    return 1;
  }
  return 0;
}

