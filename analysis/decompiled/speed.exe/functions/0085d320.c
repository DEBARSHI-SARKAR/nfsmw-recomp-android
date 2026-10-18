/* speed.exe 0085d320 FUN_0085d320; analysis pseudocode, not buildable source.
 * calls 0085cd80 FUN_0085cd80
 * calls 0083fe80 FUN_0083fe80
 * calls 00864a60 FUN_00864a60
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0083ed90 FUN_0083ed90
 * calls 00864400 FUN_00864400
 */

void FUN_0085d320(int param_1)

{
  FUN_0085cd80(param_1);
  FUN_0083fe80(FUN_0085d110,param_1);
  if ((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(param_1 + 0x70) == 1)) {
    FUN_00864a60(*(int *)(param_1 + 0x6c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_0083ed90(*(int *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00864400(*(int *)(param_1 + 0x38));
  }
  thunk_FUN_004655f0(param_1);
  return;
}

