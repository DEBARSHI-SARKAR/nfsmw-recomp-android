/* speed.exe 004d1a10 FUN_004d1a10; analysis pseudocode, not buildable source.
 * calls 004d1630 FUN_004d1630
 */

void FUN_004d1a10(code *param_1,undefined4 param_2)

{
  if (DAT_008f86f8 == 1) {
    FUN_004d1630(param_1,param_2);
    return;
  }
  (*param_1)(param_2);
  return;
}

