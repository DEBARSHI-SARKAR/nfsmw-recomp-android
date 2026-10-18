/* speed.exe 006c5da0 FUN_006c5da0; analysis pseudocode, not buildable source.
 */

void FUN_006c5da0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = &DAT_0093de78;
  do {
    iVar1 = *piVar3;
    piVar2 = *(int **)(iVar1 + 0x48);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x114))(piVar2);
      (**(code **)(**(int **)(iVar1 + 0x48) + 8))(*(int **)(iVar1 + 0x48));
      *(undefined4 *)(iVar1 + 0x48) = 0;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x93def1);
  if (DAT_00982c84 != (int *)0x0) {
    (**(code **)(*DAT_00982c84 + 8))(DAT_00982c84);
    DAT_00982c84 = (int *)0x0;
  }
  return;
}

