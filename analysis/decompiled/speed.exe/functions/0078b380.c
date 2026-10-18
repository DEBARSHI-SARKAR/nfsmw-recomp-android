/* speed.exe 0078b380 FUN_0078b380; analysis pseudocode, not buildable source.
 * calls 00835b40 FUN_00835b40
 */

undefined4 __fastcall FUN_0078b380(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00835b40(*param_1);
  return uVar1;
}

