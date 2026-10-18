/* speed.exe 006459e0 FUN_006459e0; analysis pseudocode, not buildable source.
 * calls 00645940 FUN_00645940
 * calls 00643600 FUN_00643600
 */

undefined4
FUN_006459e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int local_4;
  
  FUN_00643600(&local_4,&param_3);
  if ((local_4 != DAT_0092041c) && (*(int *)(local_4 + 0x10) != 0)) {
    uVar1 = FUN_00645940(param_1,param_2,*(int *)(local_4 + 0x10),param_4,param_5);
    return uVar1;
  }
  return 0;
}

