/* speed.exe 004f4bb0 FUN_004f4bb0; analysis pseudocode, not buildable source.
 * calls 004f4af0 FUN_004f4af0
 */

undefined1 __fastcall FUN_004f4bb0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_004f4af0();
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  return 1;
}

