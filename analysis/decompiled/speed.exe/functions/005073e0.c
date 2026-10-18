/* speed.exe 005073e0 FUN_005073e0; analysis pseudocode, not buildable source.
 * calls 00506c90 FUN_00506c90
 * calls 006be490 FUN_006be490
 */

int * FUN_005073e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (*param_1 == -0x7fecbfff) {
    iVar2 = param_1[1];
    piVar5 = (int *)0x0;
    for (piVar1 = param_1 + 2; piVar1 < (int *)(iVar2 + 8 + (int)param_1);
        piVar1 = (int *)((int)piVar1 + piVar1[1] + 8)) {
      iVar3 = *piVar1;
      if (iVar3 == 0x134002) {
        iVar3 = piVar1[2];
        piVar4 = (int *)piVar1[3];
        piVar5 = piVar1 + 2;
        *piVar4 = iVar3;
        *(int **)(iVar3 + 4) = piVar4;
        FUN_00506c90(piVar5);
        DAT_00915180 = DAT_00915180 + -1;
      }
      else if (((iVar3 != 0x134003) && (iVar3 != 0x134004)) && (iVar3 == -0x7fecbff8)) {
        FUN_006be490(piVar1);
      }
    }
    return piVar5;
  }
  return (int *)0x0;
}

