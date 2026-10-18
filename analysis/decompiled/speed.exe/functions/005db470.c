/* speed.exe 005db470 FUN_005db470; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005db470(int param_1,float param_2)

{
  undefined2 uVar1;
  
  if (_DAT_00890da8 < param_2) {
    uVar1 = FUN_007c4b80();
    *(undefined2 *)(param_1 + 0x10) = uVar1;
    return;
  }
  uVar1 = FUN_007c4b80();
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  return;
}

