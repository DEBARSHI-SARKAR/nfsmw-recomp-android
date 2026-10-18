/* speed.exe 0073ccf0 FUN_0073ccf0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_0073ccf0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x33ec + param_2 * 4) = param_3;
  *(undefined4 *)(param_1 + 0x33e4 + param_2 * 4) = uVar1;
  return;
}

