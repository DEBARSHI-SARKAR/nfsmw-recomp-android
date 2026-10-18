/* speed.exe 004b0010 FUN_004b0010; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004b0010(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[0x1d] = 0;
  *param_1 = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  iVar2 = 0;
  puVar1 = param_1 + 0xd;
  do {
    puVar1[-6] = 0;
    *puVar1 = 0;
    puVar1[-0xc] = 0;
    *(undefined1 *)((int)param_1 + iVar2 + 0x4c) = 0;
    puVar1[8] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 6);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}

