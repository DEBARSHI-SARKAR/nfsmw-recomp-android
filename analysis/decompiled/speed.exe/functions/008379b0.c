/* speed.exe 008379b0 FUN_008379b0; analysis pseudocode, not buildable source.
 * calls 008485e0 FUN_008485e0
 * calls 00848560 FUN_00848560
 * calls 00848640 FUN_00848640
 */

undefined4
FUN_008379b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 2)) {
    FUN_00848560(*(undefined4 *)(param_1 + 8),param_4);
    if (param_3 != -1) {
      FUN_008485e0(*(undefined4 *)(param_1 + 8),param_3);
    }
    *(undefined4 *)(param_1 + 0x14) = param_2;
    if (*(int *)(param_1 + 0xb8) == 0) {
      FUN_00848640(*(undefined4 *)(param_1 + 8),0,param_2,param_5,0);
    }
    return 0;
  }
  return 0xfffffffc;
}

