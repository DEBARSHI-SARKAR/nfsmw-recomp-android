/* speed.exe 006b4560 FUN_006b4560; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_006b4560(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0x20);
  if (piVar2 != *(int **)(param_1 + 0x20)) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x20));
  }
  piVar2 = *(int **)(param_1 + 0x20);
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(int *)(*(int *)(param_1 + 0x20) + 4) = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (piVar1 != *(int **)(param_1 + 0x20)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_005d0370(piVar1,0xc,0);
      piVar1 = piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x20));
  }
  return;
}

