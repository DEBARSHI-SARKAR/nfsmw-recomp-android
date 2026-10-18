/* speed.exe 00600a20 FUN_00600a20; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 005fa780 FUN_005fa780
 */

uint __thiscall FUN_00600a20(uint *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *param_1;
  uVar3 = 0;
  if (param_1[1] + uVar5 != 0) {
    iVar4 = 0;
    do {
      if (uVar3 < uVar5) {
        uVar5 = param_1[3] + iVar4;
      }
      else {
        uVar5 = param_1[(uVar3 - uVar5) + 4];
      }
      if (*(int **)(uVar5 + 4) == (int *)0x0) {
        piVar1 = *(int **)(uVar5 + 0xc);
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
          FUN_005fa780(piVar1);
        }
        piVar1 = *(int **)(uVar5 + 0x10);
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
          FUN_005fa780(piVar1);
        }
        iVar2 = FUN_00452430();
      }
      else {
        iVar2 = **(int **)(uVar5 + 4);
      }
      if (iVar2 == param_2) {
        return uVar5;
      }
      uVar5 = *param_1;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (uVar3 < param_1[1] + uVar5);
  }
  return 0;
}

