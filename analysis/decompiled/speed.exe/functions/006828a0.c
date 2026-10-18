/* speed.exe 006828a0 FUN_006828a0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006813d0 FUN_006813d0
 */

int __thiscall FUN_006828a0(int param_1,byte param_2)

{
  FUN_006813d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1c,0);
  }
  return param_1;
}

