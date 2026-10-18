/* speed.exe 007f0c6b FUN_007f0c6b; analysis pseudocode, not buildable source.
 * calls 007f0b24 FUN_007f0b24
 */

int FUN_007f0c6b(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_007f0b24(param_1,0,param_2,&local_8,0);
  if (iVar1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = local_8 + param_1;
  }
  return local_8;
}

