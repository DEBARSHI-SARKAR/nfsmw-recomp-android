/* speed.exe 0066fcc0 FUN_0066fcc0; analysis pseudocode, not buildable source.
 * calls 006685d0 FUN_006685d0
 */

int __fastcall FUN_0066fcc0(int param_1)

{
  FUN_006685d0(param_1);
  *(undefined4 *)(param_1 + 4) = 0xa6b47fac;
  *(int *)(param_1 + 8) = param_1;
  return param_1;
}

