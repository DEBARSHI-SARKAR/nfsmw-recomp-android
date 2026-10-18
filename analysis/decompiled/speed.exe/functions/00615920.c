/* speed.exe 00615920 FUN_00615920; analysis pseudocode, not buildable source.
 * calls 00613130 FUN_00613130
 * calls 006130b0 FUN_006130b0
 * calls 006128d0 FUN_006128d0
 * calls 006158a0 FUN_006158a0
 */

void FUN_00615920(int param_1,undefined4 param_2)

{
  FUN_006158a0(param_1,1);
  FUN_00613130(param_1,param_2,&stack0x0000000c);
  FUN_006128d0(param_1,2,(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 3) + -1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
                    /* WARNING: Subroutine does not return */
  FUN_006130b0(param_1);
}

