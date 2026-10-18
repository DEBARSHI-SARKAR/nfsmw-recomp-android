/* speed.exe 0047a850 FUN_0047a850; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00473cd0 FUN_00473cd0
 */

int __thiscall FUN_0047a850(int param_1,byte param_2)

{
  FUN_00473cd0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x2f0,0);
  }
  return param_1;
}

