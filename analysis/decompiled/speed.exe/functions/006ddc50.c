/* speed.exe 006ddc50 FUN_006ddc50; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void FUN_006ddc50(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = DAT_009877e8;
  for (iVar5 = 0; ((int **)piVar4 != &DAT_009877e8 && (iVar5 < 3)); iVar5 = iVar5 + 1) {
    piVar1 = (int *)piVar4[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    piVar3 = (int *)*piVar4;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    FUN_00466440(piVar4);
    piVar4 = piVar3;
  }
  return;
}

