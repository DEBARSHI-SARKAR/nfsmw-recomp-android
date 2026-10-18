/* speed.exe 00848850 FUN_00848850; analysis pseudocode, not buildable source.
 * calls 00846d50 FUN_00846d50
 */

undefined4
FUN_00848850(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_3 == 2) {
    FUN_00846d50(param_4,param_5);
  }
  else {
    FUN_00846d50(param_4,param_5);
    if (3 < param_3) {
      return 0xfffffffd;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x008488bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&PTR_LAB_00848978)[param_3])();
  return uVar1;
}

