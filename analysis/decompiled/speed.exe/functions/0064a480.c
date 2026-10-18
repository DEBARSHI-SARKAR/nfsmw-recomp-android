/* speed.exe 0064a480 FUN_0064a480; analysis pseudocode, not buildable source.
 * calls 00461970 FUN_00461970
 * calls 00461980 FUN_00461980
 */

void __thiscall FUN_0064a480(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_00461980(*(undefined4 *)(param_1 + 0x1c));
  uVar1 = FUN_00461970(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}

