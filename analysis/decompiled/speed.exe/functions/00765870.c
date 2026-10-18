/* speed.exe 00765870 FUN_00765870; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_00765870(int param_1)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 0x2e4) == 0) {
    pvVar1 = _malloc(0x3fc);
    *(void **)(param_1 + 0x2e4) = pvVar1;
  }
  return;
}

