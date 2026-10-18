/* speed.exe 00831e32 FUN_00831e32; analysis pseudocode, not buildable source.
 * calls 00831cd3 FUN_00831cd3
 */

undefined4 FUN_00831e32(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *local_8;
  
  uVar2 = 0;
  iVar1 = FUN_00831cd3(param_1,&local_8);
  if ((iVar1 != 0) && (*(ushort *)(param_2 + 4) < *(ushort *)(*local_8 + 0x16))) {
    uVar2 = 1;
  }
  return uVar2;
}

