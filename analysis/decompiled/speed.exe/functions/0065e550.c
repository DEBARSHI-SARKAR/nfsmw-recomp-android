/* speed.exe 0065e550 FUN_0065e550; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

undefined4 FUN_0065e550(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (*param_1 != -0x7ffc5000) {
    return 0;
  }
  piVar4 = param_1 + 2;
  if (piVar4 < (int *)((int)param_1 + param_1[1] + 8)) {
    do {
      piVar3 = DAT_00925b08;
      if ((int **)DAT_00925b08 != &DAT_00925b08) {
        do {
          if (*(int *)((int)piVar4 + 0x1fU & 0xfffffff0) == *(int *)piVar3[2]) {
            iVar1 = *piVar3;
            piVar2 = (int *)piVar3[1];
            *piVar2 = iVar1;
            *(int **)(iVar1 + 4) = piVar2;
            FUN_00466440(piVar3);
            break;
          }
          piVar3 = (int *)*piVar3;
        } while ((int **)piVar3 != &DAT_00925b08);
      }
      piVar4 = (int *)((int)piVar4 + piVar4[1] + 8);
    } while (piVar4 < (int *)((int)param_1 + param_1[1] + 8));
  }
  return 1;
}

