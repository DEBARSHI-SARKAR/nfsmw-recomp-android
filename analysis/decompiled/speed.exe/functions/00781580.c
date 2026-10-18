/* speed.exe 00781580 FUN_00781580; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0077d3b0 thunk_FUN_0077c740
 */

void __fastcall FUN_00781580(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != *(int **)(param_1 + 8)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        thunk_FUN_0077c740();
        FUN_005d0370(iVar1,0x10,0);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0xc) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

