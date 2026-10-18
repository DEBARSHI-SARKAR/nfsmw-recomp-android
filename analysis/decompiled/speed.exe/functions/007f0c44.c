/* speed.exe 007f0c44 FUN_007f0c44; analysis pseudocode, not buildable source.
 * calls 007f0b24 FUN_007f0b24
 */

undefined4 FUN_007f0c44(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 != 0) {
    FUN_007f0b24(param_1,param_2,0,&local_8,0);
  }
  return local_8;
}

