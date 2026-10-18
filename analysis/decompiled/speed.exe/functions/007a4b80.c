/* speed.exe 007a4b80 FUN_007a4b80; analysis pseudocode, not buildable source.
 * calls 0056f250 FUN_0056f250
 * calls 005816b0 FUN_005816b0
 * calls 0056f100 FUN_0056f100
 */

void __thiscall FUN_007a4b80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
  uVar1 = FUN_005816b0(param_2);
  FUN_0056f250(uVar1,param_2);
  return;
}

