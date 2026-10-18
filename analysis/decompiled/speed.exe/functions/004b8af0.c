/* speed.exe 004b8af0 FUN_004b8af0; analysis pseudocode, not buildable source.
 * calls 004b8a90 FUN_004b8a90
 */

int __fastcall FUN_004b8af0(int param_1)

{
  FUN_004b8a90();
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}

