/* speed.exe 00831d65 FUN_00831d65; analysis pseudocode, not buildable source.
 * calls 00831cd3 FUN_00831cd3
 */

bool FUN_00831d65(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_00831cd3(param_1,&local_8);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(local_8 + 4);
  }
  return iVar1 != 0;
}

