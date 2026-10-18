/* speed.exe 004d19c0 FUN_004d19c0; analysis pseudocode, not buildable source.
 * calls 004d1330 FUN_004d1330
 */

void FUN_004d19c0(code *param_1,undefined4 param_2)

{
  if (DAT_008f86f8 == 1) {
    FUN_004d1330(param_1,param_2);
    return;
  }
  (*param_1)(param_2);
  return;
}

