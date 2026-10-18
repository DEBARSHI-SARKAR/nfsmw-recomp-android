/* speed.exe 00506a60 FUN_00506a60; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 004655f0 FUN_004655f0
 * calls 00663f00 FUN_00663f00
 * calls 00461980 FUN_00461980
 * calls 00500b00 FUN_00500b00
 * calls 00501050 FUN_00501050
 */

undefined4 __thiscall FUN_00506a60(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_00500b00(param_2);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  piVar2 = piVar3 + 0xe;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined1 *)((int)piVar3 + 0xe) = 0;
    FUN_00501050(param_2);
    (**(code **)(param_1 + 0x14))(piVar3);
    iVar1 = *piVar3;
    piVar2 = (int *)piVar3[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    if (piVar3[7] != 0) {
      FUN_004655f0(piVar3[7]);
    }
    if (piVar3[8] != 0) {
      FUN_00663f00(piVar3[8]);
    }
    FUN_00461980(piVar3[2]);
    FUN_00463ca0(DAT_00915fb0,piVar3);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  return 1;
}

