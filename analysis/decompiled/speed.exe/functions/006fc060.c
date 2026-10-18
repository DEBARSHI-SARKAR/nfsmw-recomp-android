/* speed.exe 006fc060 FUN_006fc060; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006fb9d0 FUN_006fb9d0
 * calls 005d0370 FUN_005d0370
 */

undefined4 __fastcall FUN_006fc060(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_005d59f0(&LAB_00402820);
  if (piVar3 != (int *)0x0) {
    for (piVar1 = (int *)**(int **)(param_1 + 8);
        (piVar1 != *(int **)(param_1 + 8) && ((int *)piVar1[2] != piVar3)); piVar1 = (int *)*piVar1)
    {
    }
    if (piVar1 != *(int **)(param_1 + 8)) {
      if (piVar1 != *(int **)(param_1 + 8)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        FUN_005d0370(piVar1,0xc,0);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
      cVar2 = (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x10));
      if ((cVar2 != '\0') &&
         (cVar2 = (**(code **)(*piVar3 + 8))(*(undefined4 *)(param_1 + 0x10)), cVar2 == '\0')) {
        FUN_006fb9d0(&stack0x00000000);
        return 0;
      }
      (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(piVar3);
      return 1;
    }
  }
  return 0;
}

