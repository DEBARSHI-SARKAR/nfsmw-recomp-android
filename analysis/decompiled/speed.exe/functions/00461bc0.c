/* speed.exe 00461bc0 FUN_00461bc0; analysis pseudocode, not buildable source.
 * calls 00461b40 FUN_00461b40
 */

void __fastcall FUN_00461bc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x154) == *(int *)(param_1 + 0x158)) {
    FUN_00461b40((*(int *)(param_1 + 0x158) * 4) / 3 + 1);
  }
  iVar2 = *(int *)(param_1 + 0x154);
  *(int *)(param_1 + 0x154) = iVar2 + 1;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x15c) + iVar2 * 0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}

