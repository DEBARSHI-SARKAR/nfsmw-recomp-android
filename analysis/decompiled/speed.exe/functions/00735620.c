/* speed.exe 00735620 FUN_00735620; analysis pseudocode, not buildable source.
 * calls 0078eba0 FUN_0078eba0
 */

undefined4 __fastcall FUN_00735620(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    cVar1 = FUN_0078eba0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

