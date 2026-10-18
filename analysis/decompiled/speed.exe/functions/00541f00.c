/* speed.exe 00541f00 FUN_00541f00; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 005252d0 FUN_005252d0
 */

void __thiscall FUN_00541f00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007c4b80();
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),param_2,&DAT_0089d764,uVar1);
  return;
}

