/* speed.exe 004f2db0 FUN_004f2db0; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void FUN_004f2db0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((int **)DAT_009148bc != &DAT_009148bc) {
    do {
      piVar3 = DAT_009148bc;
      iVar1 = *DAT_009148bc;
      piVar2 = (int *)DAT_009148bc[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_00466440(piVar3);
    } while ((int **)DAT_009148bc != &DAT_009148bc);
  }
  if ((int **)DAT_0091494c != &DAT_0091494c) {
    do {
      piVar3 = DAT_0091494c;
      iVar1 = *DAT_0091494c;
      piVar2 = (int *)DAT_0091494c[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_00466440(piVar3);
    } while ((int **)DAT_0091494c != &DAT_0091494c);
  }
  if ((int **)DAT_009145b0 != &DAT_009145b0) {
    do {
      piVar3 = DAT_009145b0;
      iVar1 = *DAT_009145b0;
      piVar2 = (int *)DAT_009145b0[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_00466440(piVar3);
    } while ((int **)DAT_009145b0 != &DAT_009145b0);
  }
  return;
}

