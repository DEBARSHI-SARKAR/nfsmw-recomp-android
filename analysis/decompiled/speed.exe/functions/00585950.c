/* speed.exe 00585950 FUN_00585950; analysis pseudocode, not buildable source.
 * calls 00585820 FUN_00585820
 * calls 00585520 FUN_00585520
 */

void FUN_00585950(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00585820(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_00585520(param_1,*(undefined4 *)(iVar1 + 0x34));
  }
  return;
}

