/* speed.exe 006a8570 FUN_006a8570; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006a85a0 FUN_006a85a0
 */

int __thiscall FUN_006a8570(int param_1,byte param_2)

{
  FUN_006a85a0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xec,0);
  }
  return param_1;
}

