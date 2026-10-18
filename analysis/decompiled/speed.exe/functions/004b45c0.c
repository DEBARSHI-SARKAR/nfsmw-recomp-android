/* speed.exe 004b45c0 FUN_004b45c0; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 005cc240 FUN_005cc240
 * calls 004655f0 FUN_004655f0
 * calls 004b0ee0 FUN_004b0ee0
 */

void __fastcall FUN_004b45c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_004655f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = FUN_005cc240("RevOFF");
  iVar2 = FUN_004b0ee0(0,0,0,0);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  FUN_0065faf0();
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}

