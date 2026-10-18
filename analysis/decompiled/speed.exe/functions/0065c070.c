/* speed.exe 0065c070 FUN_0065c070; analysis pseudocode, not buildable source.
 * calls 00652d70 FUN_00652d70
 */

void __fastcall FUN_0065c070(undefined1 *param_1)

{
  if ((0 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 7)) {
    FUN_00652d70(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  return;
}

