/* speed.exe 00613880 FUN_00613880; analysis pseudocode, not buildable source.
 * calls 00613130 FUN_00613130
 * calls 00613800 FUN_00613800
 * calls 006130b0 FUN_006130b0
 */

void FUN_00613880(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00613130(param_1,param_2,&stack0x0000000c);
  FUN_00613800(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_006130b0(param_1);
}

