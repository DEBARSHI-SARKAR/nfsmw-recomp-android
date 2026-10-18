/* speed.exe 004b9fb0 FUN_004b9fb0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004afc30 FUN_004afc30
 */

int __thiscall FUN_004b9fb0(int param_1,byte param_2)

{
  FUN_004afc30();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

