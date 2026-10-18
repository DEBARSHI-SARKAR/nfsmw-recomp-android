/* speed.exe 007893e0 FUN_007893e0; analysis pseudocode, not buildable source.
 * calls 00784ba0 FUN_00784ba0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_007893e0(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    FUN_00784ba0();
    FUN_005d0370(iVar1,0xc,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_005d0370(param_1,0x10,0);
  }
  return param_1;
}

