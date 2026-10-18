/* speed.exe 00731750 FUN_00731750; analysis pseudocode, not buildable source.
 * calls 00730460 FUN_00730460
 * calls 0072df20 FUN_0072df20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00731750(void)

{
  char cVar1;
  undefined1 local_4 [4];
  
  _DAT_009aaab4 = 0xffffffff;
  _DAT_009aab18 = 0xffffffff;
  DAT_009aac80 = 1;
  if ((DAT_009aac81 == '\0') && (DAT_009ab208 != 0)) {
    cVar1 = FUN_0072df20(local_4);
    if (cVar1 != '\0') {
      FUN_00730460(local_4);
    }
  }
  return;
}

