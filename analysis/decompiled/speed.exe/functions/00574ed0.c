/* speed.exe 00574ed0 FUN_00574ed0; analysis pseudocode, not buildable source.
 * calls 0064a020 FUN_0064a020
 * calls 00515d70 FUN_00515d70
 */

void __fastcall FUN_00574ed0(int param_1)

{
  char cVar1;
  
  if (DAT_008f41c0 == 0) {
    cVar1 = FUN_0064a020();
    if (cVar1 == '\0') {
      FUN_00515d70(*(undefined4 *)(param_1 + 0x30),"%d/%d/%d",*(undefined4 *)(param_1 + 0x4c),
                   *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
      return;
    }
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0x30),"%02d/%02d/%02d",*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  return;
}

