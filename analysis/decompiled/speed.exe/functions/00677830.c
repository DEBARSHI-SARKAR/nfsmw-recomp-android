/* speed.exe 00677830 FUN_00677830; analysis pseudocode, not buildable source.
 * calls 00723c90 FUN_00723c90
 * calls 006269b0 FUN_006269b0
 * calls 006e9f20 FUN_006e9f20
 * calls 00454810 FUN_00454810
 * calls 00728920 FUN_00728920
 */

void __fastcall FUN_00677830(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_006e9f20(*(undefined4 *)(*(int *)(param_1 + 0xac) + 8));
  puVar1 = (undefined4 *)FUN_00454810(0xc141f7f8,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006269b0(4);
  }
  *(undefined4 *)(param_1 + 0xd4) = *puVar1;
  if ((*(int *)(param_1 + 0xf0) != 0) && (*(char *)(param_1 + 0xec) != '\0')) {
    iVar2 = FUN_00723c90(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x2c));
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) | 0x10;
      FUN_00728920();
    }
    *(undefined1 *)(param_1 + 0xec) = 0;
  }
  return;
}

