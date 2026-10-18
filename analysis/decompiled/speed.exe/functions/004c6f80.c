/* speed.exe 004c6f80 FUN_004c6f80; analysis pseudocode, not buildable source.
 * calls 004c6e00 FUN_004c6e00
 */

void __fastcall FUN_004c6f80(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_004c6e00(param_1,uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return;
}

