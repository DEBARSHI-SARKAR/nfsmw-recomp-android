/* speed.exe 00579780 FUN_00579780; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005671a0 FUN_005671a0
 */

void FUN_00579780(void)

{
  void *pvVar1;
  
  if (DAT_0091cefc == 0) {
    pvVar1 = _malloc(0x1b4);
    if (pvVar1 != (void *)0x0) {
      DAT_0091cefc = FUN_005671a0(9);
      return;
    }
    DAT_0091cefc = 0;
  }
  return;
}

