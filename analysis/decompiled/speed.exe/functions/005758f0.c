/* speed.exe 005758f0 FUN_005758f0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

bool __thiscall FUN_005758f0(int param_1,size_t param_2)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(size_t *)(param_1 + 0x40) = param_2;
    pvVar1 = _malloc(param_2);
    *(void **)(param_1 + 0x3c) = pvVar1;
    return pvVar1 != (void *)0x0;
  }
  return false;
}

