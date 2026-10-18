/* speed.exe 006b6f20 FUN_006b6f20; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_006b6f20(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    while (((undefined4 *)piVar2[2])[0x16] != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == piVar1) {
        return;
      }
    }
    (*(code *)**(undefined4 **)piVar2[2])(1);
    if (piVar2 != *(int **)(param_1 + 0x20)) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      FUN_005d0370(piVar2,0xc,0);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
  }
  return;
}

