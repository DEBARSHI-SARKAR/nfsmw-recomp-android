/* speed.exe 00568180 FUN_00568180; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00524a10 FUN_00524a10
 */

void __fastcall FUN_00568180(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00524a10(*(undefined4 *)(param_1 + -0x20),0xe0ba07ec,0xe1c034fc);
  if (cVar1 == '\0') {
    FUN_00524920(*(undefined4 *)(param_1 + -0x20),0xe0ba07ec,0xe1c034fc,1);
  }
  return;
}

