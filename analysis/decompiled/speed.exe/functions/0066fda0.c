/* speed.exe 0066fda0 FUN_0066fda0; analysis pseudocode, not buildable source.
 * calls 00668750 FUN_00668750
 */

int __fastcall FUN_0066fda0(int param_1)

{
  FUN_00668750(param_1);
  *(undefined4 *)(param_1 + 4) = 0xa6b47fac;
  *(int *)(param_1 + 8) = param_1;
  return param_1;
}

