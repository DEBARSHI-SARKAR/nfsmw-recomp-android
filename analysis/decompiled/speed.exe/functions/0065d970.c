/* speed.exe 0065d970 FUN_0065d970; analysis pseudocode, not buildable source.
 * calls 007c66d0 _malloc
 */

void FUN_0065d970(void)

{
  undefined1 *puVar1;
  void *pvVar2;
  
  puVar1 = _malloc(0xc);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 1;
    pvVar2 = _malloc(0x400);
    *(void **)(puVar1 + 4) = pvVar2;
    *(undefined4 *)(puVar1 + 8) = 0;
    DAT_00925950 = puVar1;
    return;
  }
  DAT_00925950 = (undefined1 *)0x0;
  return;
}

