/* speed.exe 0042c850 FUN_0042c850; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0042c850(int param_1)

{
  if ((0xf < *(uint *)(param_1 + 0x18)) && (*(int *)(param_1 + 4) != 0)) {
    FUN_005d0370(*(int *)(param_1 + 4),*(uint *)(param_1 + 0x18) + 1,&PTR_LAB_004c5452_1_00890f10);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

