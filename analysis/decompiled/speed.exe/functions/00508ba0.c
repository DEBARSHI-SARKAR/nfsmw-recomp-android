/* speed.exe 00508ba0 FUN_00508ba0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00508b40 FUN_00508b40
 * calls 00507e90 FUN_00507e90
 */

void __thiscall FUN_00508ba0(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 8);
  piVar2 = *(int **)(param_1 + 8);
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    if (param_2 == '\0') {
      if (((uint)piVar2[6] >> 3 & 1) == 0) {
        for (piVar4 = (int *)piVar2[0x20]; piVar4 != piVar2 + 0x20; piVar4 = (int *)*piVar4) {
          piVar4[0x17] = piVar4[0x17] | 1;
        }
        piVar2[6] = piVar2[6] | 8;
      }
    }
    else {
      FUN_00508b40(piVar2);
    }
    FUN_00507e90();
    FUN_00463ca0(DAT_00916064,piVar2);
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
    DAT_00916a54 = DAT_00916a54 + -1;
    piVar2 = (int *)*piVar1;
  }
  return;
}

