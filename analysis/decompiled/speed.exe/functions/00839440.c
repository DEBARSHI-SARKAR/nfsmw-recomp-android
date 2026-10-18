/* speed.exe 00839440 FUN_00839440; analysis pseudocode, not buildable source.
 * calls 00848620 FUN_00848620
 * calls 00838930 FUN_00838930
 * calls 00848640 FUN_00848640
 * calls 008368f0 FUN_008368f0
 */

undefined4 FUN_00839440(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 5;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_00848640(*(undefined4 *)(param_1 + 8),&DAT_00890978,5,0,0);
  }
  FUN_00848620(*(undefined4 *)(param_1 + 8));
  FUN_00838930(param_1);
  FUN_008368f0(param_1);
  *(undefined4 *)(param_1 + 0xc) = 5;
  return 0;
}

