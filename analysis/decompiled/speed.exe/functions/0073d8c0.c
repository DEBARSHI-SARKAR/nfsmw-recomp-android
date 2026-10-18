/* speed.exe 0073d8c0 FUN_0073d8c0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_0073d8c0(int param_1)

{
  int iVar1;
  size_t _Size;
  void *pvVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (((*(int *)(param_1 + 0xc) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8), iVar1 != 0)
      ) && (_Size = *(size_t *)(iVar1 + 0x1c), 0 < (int)_Size)) {
    pvVar2 = _malloc(_Size);
    *(void **)(param_1 + 0x1c) = pvVar2;
  }
  return;
}

