/* speed.exe 0064abe0 FUN_0064abe0; analysis pseudocode, not buildable source.
 * calls 00461970 FUN_00461970
 */

void __thiscall FUN_0064abe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x28) = param_2;
  uVar1 = FUN_00461970(param_3);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}

