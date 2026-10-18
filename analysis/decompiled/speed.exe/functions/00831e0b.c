/* speed.exe 00831e0b FUN_00831e0b; analysis pseudocode, not buildable source.
 * calls 00831cd3 FUN_00831cd3
 */

undefined2 FUN_00831e0b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int *local_8;
  
  uVar2 = 0;
  iVar1 = FUN_00831cd3(param_1,&local_8);
  if (iVar1 != 0) {
    uVar2 = *(undefined2 *)(*local_8 + 0x14);
  }
  return uVar2;
}

