/* speed.exe 00864f10 FUN_00864f10; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00866b30 FUN_00866b30
 */

void FUN_00864f10(int *param_1)

{
  int iVar1;
  
  thunk_FUN_004655f0(param_1[5]);
  if (*param_1 != 0) {
    FUN_00866b30(*param_1);
  }
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

