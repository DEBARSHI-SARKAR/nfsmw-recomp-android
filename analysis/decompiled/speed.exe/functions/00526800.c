/* speed.exe 00526800 FUN_00526800; analysis pseudocode, not buildable source.
 * calls 0056db00 FUN_0056db00
 * calls 007f3ca0 FUN_007f3ca0
 * calls 00518600 FUN_00518600
 * calls 005188f0 FUN_005188f0
 */

void __fastcall FUN_00526800(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (((byte)DAT_0091cbac & 0xf0) == 0xb0) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    FUN_007f3ca0(0,0xffffffff);
    FUN_007f3ca0(1,0x100);
  }
  else {
    FUN_00518600();
  }
  uVar1 = FUN_0056db00();
  FUN_005188f0(uVar1);
  return;
}

