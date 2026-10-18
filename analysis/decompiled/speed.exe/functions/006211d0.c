/* speed.exe 006211d0 FUN_006211d0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006211d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 2;
  for (iVar1 = 0x20; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
      iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)register0x00000010;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = 0x90;
  *param_1 = &PTR_FUN_008a6974;
  return;
}

