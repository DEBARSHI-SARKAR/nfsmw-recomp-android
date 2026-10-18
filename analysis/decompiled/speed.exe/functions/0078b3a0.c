/* speed.exe 0078b3a0 FUN_0078b3a0; analysis pseudocode, not buildable source.
 * calls 00835b40 FUN_00835b40
 * calls 00835b20 FUN_00835b20
 */

void __fastcall FUN_0078b3a0(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    FUN_00835b20(*param_1,0xffffffff);
    return;
  }
  uVar1 = FUN_00835b40(*param_1);
  FUN_00835b20(*param_1,uVar1);
  return;
}

