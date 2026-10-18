/* speed.exe 00831dbc FUN_00831dbc; analysis pseudocode, not buildable source.
 * calls 00831cd3 FUN_00831cd3
 */

bool FUN_00831dbc(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *local_8;
  
  iVar1 = FUN_00831cd3(param_1,&local_8);
  if (iVar1 != 0) {
    *param_2 = ((uint)*(ushort *)(*local_8 + 0x10) * 2 + 3 & 0xfffffffc) + 0x18 + *local_8;
  }
  return iVar1 != 0;
}

