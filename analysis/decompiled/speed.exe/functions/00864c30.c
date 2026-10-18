/* speed.exe 00864c30 FUN_00864c30; analysis pseudocode, not buildable source.
 * calls 00866c50 FUN_00866c50
 * calls 00866350 FUN_00866350
 */

undefined4 FUN_00864c30(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x6d696372) {
    return param_1[6];
  }
  if ((param_2 != 0x69646576) && (param_2 != 0x6f646576)) {
    if (param_2 == 0x736f636b) {
      uVar1 = FUN_00866c50(*param_1);
      return uVar1;
    }
    return 0xffffffff;
  }
  uVar1 = FUN_00866350();
  return uVar1;
}

