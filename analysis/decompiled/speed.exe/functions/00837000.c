/* speed.exe 00837000 FUN_00837000; analysis pseudocode, not buildable source.
 * calls 00848630 FUN_00848630
 * calls 00847940 FUN_00847940
 * calls 00848640 FUN_00848640
 * calls 00847b60 FUN_00847b60
 */

void FUN_00837000(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  FUN_00847940(*(undefined4 *)(param_1 + 8),&LAB_00836be0,param_1);
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_00848640(*(undefined4 *)(param_1 + 8),0,*(undefined4 *)(param_1 + 0x14),0,1);
  }
  FUN_00848630(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xc) = 1;
  FUN_00847b60();
  return;
}

