/* speed.exe 0078b2c0 FUN_0078b2c0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000011 GetTickCount
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0078b2c0(void)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - _DAT_009b40d8;
}

