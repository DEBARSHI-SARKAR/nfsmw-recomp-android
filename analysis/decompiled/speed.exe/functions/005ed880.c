/* speed.exe 005ed880 FUN_005ed880; analysis pseudocode, not buildable source.
 * calls 005e95f0 FUN_005e95f0
 * calls 005e9660 FUN_005e9660
 * calls 005ebf30 FUN_005ebf30
 */

undefined4 FUN_005ed880(void)

{
  char cVar1;
  
  cVar1 = FUN_005e95f0();
  if (cVar1 == '\0') {
    cVar1 = FUN_005e9660();
    if (cVar1 == '\0') {
      cVar1 = FUN_005ebf30();
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  return 1;
}

