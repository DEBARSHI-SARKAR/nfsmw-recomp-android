/* speed.exe 00847e10 FUN_00847e10; analysis pseudocode, not buildable source.
 * calls 00847bd0 FUN_00847bd0
 */

void FUN_00847e10(undefined4 param_1,int param_2)

{
  *(uint *)(param_2 + 0xf8) = *(uint *)(param_2 + 0xf8) | 0x80000;
  FUN_00847bd0();
  return;
}

