/* speed.exe 00835038 FUN_00835038; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000080 InitializeCriticalSection
 */

undefined4 * __fastcall FUN_00835038(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return param_1;
}

