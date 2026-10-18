/* speed.exe 006b06a0 FUN_006b06a0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006a43e0 FUN_006a43e0
 */

int __thiscall FUN_006b06a0(int param_1,byte param_2)

{
  FUN_006a43e0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xf8,0);
  }
  return param_1;
}

