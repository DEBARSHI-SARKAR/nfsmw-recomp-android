/* speed.exe 00577640 FUN_00577640; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

undefined4 FUN_00577640(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00460d20(param_1,(&PTR_s_brakes_008f5580)[uVar2 * 2]);
    if (iVar1 == 0) {
      return (&DAT_008f5584)[uVar2 * 2];
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x12);
  return 0;
}

