/* speed.exe 007356a0 FUN_007356a0; analysis pseudocode, not buildable source.
 * calls 0078eba0 FUN_0078eba0
 * calls 00794160 FUN_00794160
 */

void FUN_007356a0(void)

{
  char cVar1;
  
  cVar1 = FUN_0078eba0();
  if (cVar1 != '\0') {
    FUN_00794160();
    return;
  }
  return;
}

