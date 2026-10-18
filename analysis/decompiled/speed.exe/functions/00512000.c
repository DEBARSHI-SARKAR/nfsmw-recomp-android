/* speed.exe 00512000 FUN_00512000; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_00512000(int *param_1)

{
  if (*param_1 != 0) {
    FUN_004655f0(*param_1);
    *param_1 = 0;
  }
  return;
}

