/* speed.exe 006fc110 FUN_006fc110; analysis pseudocode, not buildable source.
 * calls 006fc060 FUN_006fc060
 */

void __fastcall FUN_006fc110(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 != 0) {
    FUN_006fc060(*(undefined4 *)(**(int **)(param_1 + 8) + 8));
    iVar1 = *(int *)(param_1 + 0xc);
  }
  return;
}

