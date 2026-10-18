/* speed.exe 0045b1b0 FUN_0045b1b0; analysis pseudocode, not buildable source.
 * calls 0045b1e0 FUN_0045b1e0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0045b1b0(int param_1)

{
  FUN_0045b1e0();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0xc,&PTR_LAB_004c5452_1_00890f10);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

