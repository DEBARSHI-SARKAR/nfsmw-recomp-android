/* speed.exe 00829480 FUN_00829480; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00829480(void)

{
  undefined4 uVar1;
  
  if (DAT_009c2988 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0082948d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_009c2988)();
    return uVar1;
  }
  return 0;
}

