/* speed.exe 005854e0 FUN_005854e0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_005854e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008a129c;
  if ((*(int *)param_1[6] != 0x30203) && (*(int *)param_1[6] == 0x30210)) {
    FUN_004655f0(param_1[5]);
  }
  param_1[5] = 0;
  return;
}

