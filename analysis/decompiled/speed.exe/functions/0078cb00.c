/* speed.exe 0078cb00 FUN_0078cb00; analysis pseudocode, not buildable source.
 * calls 00837690 FUN_00837690
 * calls 00837220 FUN_00837220
 * calls 0078c9e0 FUN_0078c9e0
 * calls 00839770 FUN_00839770
 * calls 0078c730 FUN_0078c730
 */

void __thiscall FUN_0078cb00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0xf8) != 0) && (1 < *(int *)(DAT_0091cf90 + 0x19c))) &&
      (iVar1 = FUN_00837690(*(int *)(param_1 + 0xf8),param_2), iVar1 != 0)) &&
     (iVar1 = FUN_00837220(iVar1,param_3), iVar1 != 0)) {
    return;
  }
  FUN_0078c9e0();
  iVar1 = FUN_0078c730();
  FUN_00839770(*(undefined4 *)(iVar1 + 0xf8),param_2,param_3);
  return;
}

