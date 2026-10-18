/* speed.exe 007ecca9 FUN_007ecca9; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009c WaitForSingleObject
 * calls 007ecdbc FUN_007ecdbc
 */

bool FUN_007ecca9(int param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_007ecdbc();
  DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 4),(param_2 * 1000) / iVar1);
  return DVar2 == 0;
}

