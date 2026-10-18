/* speed.exe 005e8e20 FUN_005e8e20; analysis pseudocode, not buildable source.
 * calls 005e8cc0 FUN_005e8cc0
 */

void __thiscall FUN_005e8e20(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005e8cc0(param_2,param_1 + 0x44a8,0xb);
  *(undefined4 *)(param_1 + 0x44a4) = uVar1;
  uVar1 = FUN_005e8cc0(param_3,param_1 + 0x44d8,0xb);
  *(undefined4 *)(param_1 + 0x44d4) = uVar1;
  return;
}

