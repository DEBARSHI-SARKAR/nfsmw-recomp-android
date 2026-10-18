/* speed.exe 005a8c20 FUN_005a8c20; analysis pseudocode, not buildable source.
 * calls 005a8b00 FUN_005a8b00
 * calls 006c9d00 FUN_006c9d00
 */

void FUN_005a8c20(void)

{
  char cVar1;
  
  cVar1 = FUN_006c9d00();
  if (cVar1 != '\0') {
    FUN_005a8b00(0x9803f6e2);
  }
  FUN_005a8b00(0xc98356ba);
  return;
}

