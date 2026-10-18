/* speed.exe 007ecc4a FUN_007ecc4a; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004d CreateEventA
 */

undefined4 FUN_007ecc4a(int param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (pvVar1 != (HANDLE)0x0) {
    *(HANDLE *)(param_1 + 4) = pvVar1;
    return 1;
  }
  return 0;
}

