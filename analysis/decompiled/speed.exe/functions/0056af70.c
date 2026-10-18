/* speed.exe 0056af70 FUN_0056af70; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 00516e10 FUN_00516e10
 */

void __fastcall FUN_0056af70(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
    FUN_00516c90(0x9938a38f,0,0);
    iVar1 = FUN_00516e10();
    *(undefined1 *)(iVar1 + 1) = 1;
    puVar2 = (undefined1 *)FUN_00516e10();
    *(undefined1 *)(param_1 + 0x39) = *puVar2;
    puVar2 = (undefined1 *)FUN_00516e10();
    *puVar2 = 0;
  }
  return;
}

