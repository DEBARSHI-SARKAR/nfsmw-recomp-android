/* speed.exe 00831d8f FUN_00831d8f; analysis pseudocode, not buildable source.
 * calls 00831cd3 FUN_00831cd3
 */

bool FUN_00831d8f(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int *local_8;
  
  iVar1 = FUN_00831cd3(param_1,&local_8);
  if (iVar1 != 0) {
    *param_2 = (uint)*(byte *)(*local_8 + 9);
  }
  return iVar1 != 0;
}

