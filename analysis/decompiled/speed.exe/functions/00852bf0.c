/* speed.exe 00852bf0 FUN_00852bf0; analysis pseudocode, not buildable source.
 * calls 0078af20 thunk_FUN_004655f0
 */

void FUN_00852bf0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *puVar2;
    thunk_FUN_004655f0(puVar2);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0x14));
  thunk_FUN_004655f0(param_1);
  return;
}

