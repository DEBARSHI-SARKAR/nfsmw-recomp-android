/* speed.exe 00416af0 FUN_00416af0; analysis pseudocode, not buildable source.
 * calls 00414ce0 FUN_00414ce0
 */

void __fastcall FUN_00416af0(int param_1)

{
  undefined4 uVar1;
  
  FUN_00414ce0();
  *(undefined1 *)(param_1 + 0x760) = 0;
  *(undefined1 *)(param_1 + 0x761) = 0;
  *(undefined1 *)(param_1 + 0x762) = 0;
  *(undefined1 *)(param_1 + 0x763) = 0;
  *(undefined1 *)(param_1 + 0x778) = 0;
  *(undefined1 *)(param_1 + 0x779) = 0;
  *(undefined4 *)(param_1 + 0x77c) = DAT_008a2fb4;
  *(undefined4 *)(param_1 + 0x780) = DAT_008a2fb8;
  uVar1 = DAT_008a2fbc;
  *(undefined1 *)(param_1 + 0x77a) = 0;
  *(undefined4 *)(param_1 + 0x798) = 0x42c60000;
  *(undefined4 *)(param_1 + 0x79c) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x784) = uVar1;
  uVar1 = DAT_00925ae8;
  *(undefined4 *)(param_1 + 0x774) = DAT_00925ae8;
  *(undefined4 *)(param_1 + 0x770) = uVar1;
  *(undefined4 *)(param_1 + 0x76c) = uVar1;
  *(undefined4 *)(param_1 + 0x764) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x768) = 0;
  return;
}

