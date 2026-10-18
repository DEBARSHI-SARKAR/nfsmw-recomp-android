/* speed.exe 00731000 FUN_00731000; analysis pseudocode, not buildable source.
 * calls 00730bf0 FUN_00730bf0
 */

void FUN_00731000(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00730bf0(*(undefined4 *)(param_1 + 0x868),1);
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x860);
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
                    /* WARNING: Could not recover jumptable at 0x0073103a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

