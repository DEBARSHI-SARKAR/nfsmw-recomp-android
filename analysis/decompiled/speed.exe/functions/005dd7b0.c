/* speed.exe 005dd7b0 FUN_005dd7b0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_005dd7b0(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  pvVar1 = _malloc(800);
  *(void **)(param_1 + 0x2c4) = pvVar1;
  return;
}

