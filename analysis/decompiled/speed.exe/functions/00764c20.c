/* speed.exe 00764c20 FUN_00764c20; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00764c20(int param_1,float param_2)

{
  undefined2 uVar1;
  
  if (_DAT_00890968 < param_2) {
    uVar1 = FUN_007c4b80();
    *(undefined2 *)(param_1 + 0x3c) = uVar1;
    return;
  }
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x3c) = uVar1;
  return;
}

