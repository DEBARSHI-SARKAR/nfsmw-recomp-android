/* speed.exe 00785270 FUN_00785270; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0077c500 FUN_0077c500
 * calls 00783730 FUN_00783730
 * calls 0077fef0 FUN_0077fef0
 */

void FUN_00785270(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x8c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_0077c500(&param_1,param_1 + 0x90);
    if (param_1 != DAT_009b3a0c) {
      FUN_0077fef0(&param_1,param_1);
    }
    FUN_00783730();
    FUN_005d0370(iVar2,0x98,0);
  }
  return;
}

