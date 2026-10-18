/* speed.exe 006de040 FUN_006de040; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void FUN_006de040(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((int **)DAT_00987ec0 != &DAT_00987ec0) {
    do {
      piVar2 = DAT_00987ec0;
      iVar3 = *DAT_00987ec0;
      piVar1 = (int *)DAT_00987ec0[1];
      *piVar1 = iVar3;
      *(int **)(iVar3 + 4) = piVar1;
      piVar1 = (int *)piVar2[6];
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
        while (iVar3 != 0) {
          iVar3 = (**(code **)(*(int *)piVar2[6] + 8))((int *)piVar2[6]);
        }
        piVar2[6] = 0;
      }
    } while ((int **)DAT_00987ec0 != &DAT_00987ec0);
  }
  DAT_00987ec0 = (int *)&DAT_00987ec0;
  DAT_00987ec4 = &DAT_00987ec0;
  while ((int **)DAT_00987f08 != &DAT_00987f08) {
    piVar1 = (int *)DAT_00987f08[2];
    iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
    piVar2 = DAT_00987f08;
    while (DAT_00987f08 = piVar2, iVar3 != 0) {
      iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
      piVar2 = DAT_00987f08;
    }
    iVar3 = *piVar2;
    piVar1 = (int *)piVar2[1];
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
    FUN_00466440(piVar2);
  }
  return;
}

