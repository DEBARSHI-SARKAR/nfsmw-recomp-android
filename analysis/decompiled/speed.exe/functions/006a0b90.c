/* speed.exe 006a0b90 FUN_006a0b90; analysis pseudocode, not buildable source.
 * calls 006a06e0 FUN_006a06e0
 */

undefined1 __fastcall FUN_006a0b90(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_006a06e0();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x154) = 0x3f800000;
    return 1;
  }
  return 0;
}

