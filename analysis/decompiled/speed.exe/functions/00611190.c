/* speed.exe 00611190 FUN_00611190; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_00611190(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0x60);
  if (piVar2 != *(int **)(param_1 + 0x60)) {
    do {
      FUN_004655f0(piVar2[2]);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x60));
  }
  piVar2 = *(int **)(param_1 + 0x60);
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(int *)(*(int *)(param_1 + 0x60) + 4) = *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 100) = 0;
  if (piVar1 != *(int **)(param_1 + 0x60)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_005d0370(piVar1,0xc,0);
      piVar1 = piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x60));
  }
  return;
}

