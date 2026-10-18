/* speed.exe 0083e190 FUN_0083e190; analysis pseudocode, not buildable source.
 * calls 0078af20 thunk_FUN_004655f0
 */

void FUN_0083e190(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = *puVar2;
    thunk_FUN_004655f0(puVar2);
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0x40));
  thunk_FUN_004655f0(param_1);
  return;
}

