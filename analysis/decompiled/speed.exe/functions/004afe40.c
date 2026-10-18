/* speed.exe 004afe40 FUN_004afe40; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

void __fastcall FUN_004afe40(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00454810(0xbec30f42,0);
  if (iVar2 == 0) {
    iVar2 = FUN_006269b0(0x10);
  }
  pcVar1 = *(char **)(iVar2 + 0xc);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    *(char **)(param_1 + 0xf8) = pcVar1;
    *(uint *)(param_1 + 0xec) = *(uint *)(param_1 + 0xec) | 0x200;
    *(undefined1 *)(param_1 + 0xfc) = 1;
  }
  return;
}

