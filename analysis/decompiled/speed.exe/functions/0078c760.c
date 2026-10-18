/* speed.exe 0078c760 FUN_0078c760; analysis pseudocode, not buildable source.
 * calls 008376d0 FUN_008376d0
 */

undefined4 __thiscall FUN_0078c760(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xf8) != 0) && (1 < *(int *)(DAT_0091cf90 + 0x19c))) {
    uVar1 = FUN_008376d0(*(int *)(param_1 + 0xf8),param_2);
    return uVar1;
  }
  return 0;
}

