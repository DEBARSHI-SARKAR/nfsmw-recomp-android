/* speed.exe 007ecc7e FUN_007ecc7e; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000009c WaitForSingleObject
 */

bool FUN_007ecc7e(int param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 4),0);
  return DVar1 == 0;
}

