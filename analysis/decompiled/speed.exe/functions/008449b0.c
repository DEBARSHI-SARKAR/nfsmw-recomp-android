/* speed.exe 008449b0 FUN_008449b0; analysis pseudocode, not buildable source.
 * calls 008448f0 FUN_008448f0
 * calls 0078af20 thunk_FUN_004655f0
 * calls 00852bf0 FUN_00852bf0
 * calls 0083e190 FUN_0083e190
 */

void FUN_008449b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x1834);
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    piVar2 = piVar1;
    do {
      if (*piVar2 != 0) {
        FUN_008448f0();
        FUN_00852bf0(*piVar2);
        FUN_0083e190(piVar2[1]);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar3 < 0x1d);
    thunk_FUN_004655f0(piVar1);
    *(undefined4 *)(param_1 + 0x1834) = 0;
  }
  return;
}

