/* speed.exe 00519120 FUN_00519120; analysis pseudocode, not buildable source.
 * calls 00660270 FUN_00660270
 * calls 00660200 FUN_00660200
 * calls 0064c9a0 FUN_0064c9a0
 */

void FUN_00519120(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(0xc,8,9);
  }
  FUN_00660270(param_1,0x10,9);
  return;
}

