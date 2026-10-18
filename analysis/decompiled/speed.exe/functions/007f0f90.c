/* speed.exe 007f0f90 FUN_007f0f90; analysis pseudocode, not buildable source.
 * calls 007f0f1b FUN_007f0f1b
 * calls 007f0eac FUN_007f0eac
 */

int FUN_007f0f90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_007f0eac(param_1,3);
  if (iVar1 != 0) {
    param_2 = FUN_007f0f1b(param_2);
  }
  param_1 = *(int *)(param_1 + 0x10 + (uint)*(ushort *)(param_1 + 0xe) * 4) + param_1;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xc))) {
    return *(int *)(param_1 + 0x10 + param_2 * 4) + param_1;
  }
  return 0;
}

