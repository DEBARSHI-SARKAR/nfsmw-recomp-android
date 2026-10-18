/* speed.exe 00693b40 FUN_00693b40; analysis pseudocode, not buildable source.
 * calls 006eea10 FUN_006eea10
 */

void __fastcall FUN_00693b40(int *param_1)

{
  (**(code **)(*param_1 + 100))();
  if (param_1[0xc] != 0) {
    FUN_006eea10(param_1[0xc]);
    param_1[0xc] = 0;
  }
  return;
}

