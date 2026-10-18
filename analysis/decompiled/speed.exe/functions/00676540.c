/* speed.exe 00676540 FUN_00676540; analysis pseudocode, not buildable source.
 * calls 006749e0 FUN_006749e0
 */

uint __thiscall FUN_00676540(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)param_1[0x145];
  if (piVar3 != piVar3 + param_1[0x147] * 2) {
    piVar1 = piVar3 + param_1[0x147] * 2;
    do {
      if ((piVar3[1] != 0) && (*piVar3 == param_2)) {
        piVar3[1] = 0;
        if ((uint)param_1[2] <= (uint)param_1[3]) {
          uVar4 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
          FUN_006749e0(uVar4);
        }
        piVar3 = (int *)(param_1[1] + param_1[3] * 8);
        if (piVar3 != (int *)0x0) {
          *piVar3 = param_2;
          piVar3[1] = 1;
        }
        iVar2 = param_1[3];
        param_1[3] = iVar2 + 1;
        return CONCAT31((int3)((uint)(iVar2 + 1) >> 8),1);
      }
      piVar3 = piVar3 + 2;
    } while (piVar3 != piVar1);
  }
  return (uint)piVar3 & 0xffffff00;
}

