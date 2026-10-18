/* speed.exe 00765350 FUN_00765350; analysis pseudocode, not buildable source.
 */

undefined1 __fastcall FUN_00765350(int param_1)

{
  ushort *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x78) == 3) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x2e0)) {
      puVar1 = *(ushort **)(param_1 + 0x2e4);
      do {
        if (*(char *)((uint)*puVar1 * 0x16 + 10 + DAT_009b38c0) < '\0') {
          return *(undefined1 *)
                  (DAT_009b38c8 + 4 + *(short *)((uint)*puVar1 * 0x16 + DAT_009b38c0 + 6) * 8);
        }
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x2e0));
    }
  }
  return 0xff;
}

