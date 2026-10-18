/* speed.exe 0065c0d0 FUN_0065c0d0; analysis pseudocode, not buildable source.
 * calls 007c66d0 _malloc
 */

undefined1 * __fastcall FUN_0065c0d0(undefined1 *param_1)

{
  void *pvVar1;
  
  *param_1 = 1;
  pvVar1 = _malloc(0x400);
  *(void **)(param_1 + 4) = pvVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

