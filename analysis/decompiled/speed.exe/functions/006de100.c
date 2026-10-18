/* speed.exe 006de100 FUN_006de100; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void FUN_006de100(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_00982ae8 == '\0') {
    for (; ((int **)DAT_00987f08 != &DAT_00987f08 && (iVar4 < 3)); iVar4 = iVar4 + 1) {
      (**(code **)(*(int *)DAT_00987f08[2] + 8))((int *)DAT_00987f08[2]);
      piVar3 = DAT_00987f08;
      iVar1 = *DAT_00987f08;
      piVar2 = (int *)DAT_00987f08[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_00466440(piVar3);
    }
  }
  return;
}

