/* speed.exe 0078c790 FUN_0078c790; analysis pseudocode, not buildable source.
 * calls 00837690 FUN_00837690
 */

undefined4 __thiscall FUN_0078c790(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xf8) != 0) && (1 < *(int *)(DAT_0091cf90 + 0x19c))) {
    uVar1 = FUN_00837690(*(int *)(param_1 + 0xf8),param_2);
    return uVar1;
  }
  return 0;
}

