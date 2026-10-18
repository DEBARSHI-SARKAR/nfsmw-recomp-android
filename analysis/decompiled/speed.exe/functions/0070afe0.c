/* speed.exe 0070afe0 FUN_0070afe0; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 */

void __thiscall FUN_0070afe0(int param_1,undefined4 *param_2,void *param_3,void *param_4)

{
  size_t _Size;
  void *pvVar1;
  
  if (param_3 != param_4) {
    _Size = (*(int *)(param_1 + 8) - (int)param_4 >> 2) * 4;
    pvVar1 = FID_conflict__memcpy(param_3,param_4,_Size);
    *(void **)(param_1 + 8) = (void *)((int)pvVar1 + _Size);
  }
  *param_2 = param_3;
  return;
}

