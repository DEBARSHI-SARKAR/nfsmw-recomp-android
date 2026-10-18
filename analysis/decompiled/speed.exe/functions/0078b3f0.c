/* speed.exe 0078b3f0 FUN_0078b3f0; analysis pseudocode, not buildable source.
 * calls 00835b50 FUN_00835b50
 */

void __fastcall FUN_0078b3f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00835b50(*param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    for (iVar2 = 0x21; param_1 = param_1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}

