/* speed.exe 007f7bba FUN_007f7bba; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 007f9aad FUN_007f9aad
 * calls 007f9ad3 FUN_007f9ad3
 */

undefined4 __thiscall FUN_007f7bba(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  uVar1 = FUN_007c4b80();
  uVar1 = FUN_007f9ad3(uVar1);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = FUN_007f9aad();
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return *(undefined4 *)(param_1 + 0x74);
}

