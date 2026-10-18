/* speed.exe 00595170 FUN_00595170; analysis pseudocode, not buildable source.
 * calls 00515d70 FUN_00515d70
 * calls 006547a0 FUN_006547a0
 * calls 00515c00 FUN_00515c00
 */

void __fastcall FUN_00595170(int param_1)

{
  undefined1 local_20 [32];
  
  FUN_00515c00(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x50));
  FUN_006547a0(local_20,0);
  FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_008941f8,local_20);
  return;
}

