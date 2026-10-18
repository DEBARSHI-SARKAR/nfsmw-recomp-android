/* speed.exe 00766930 FUN_00766930; analysis pseudocode, not buildable source.
 * calls 00627380 FUN_00627380
 */

undefined4 __thiscall FUN_00766930(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_00627380(*(int *)(param_1 + 0x18),param_2,param_3);
    return uVar1;
  }
  return 0;
}

