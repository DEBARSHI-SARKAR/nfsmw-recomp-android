/* speed.exe 00779430 FUN_00779430; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00779430(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = DAT_00913be4;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == *(int *)(param_1 + 0x34)) break;
    piVar1 = (int *)piVar1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x00779452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)piVar1[1])();
  return uVar2;
}

