/* speed.exe 006c25a0 FUN_006c25a0; analysis pseudocode, not buildable source.
 * calls 0065f7a0 FUN_0065f7a0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 */

bool FUN_006c25a0(undefined1 param_1)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  
  puVar3 = _malloc(0x400);
  uVar1 = DAT_008f945c;
  if (puVar3 == (undefined1 *)0x0) {
    return false;
  }
  DAT_008f945c = 0;
  *puVar3 = param_1;
  puVar3[1] = 0x3a;
  puVar3[2] = 0x5c;
  puVar3[3] = 0;
  pcVar2 = puVar3 + -1;
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (pcVar5[1] != '\0');
  *(undefined4 *)(pcVar5 + 1) = s_bin_dat_008aebb8._0_4_;
  *(undefined4 *)(pcVar5 + 5) = s_bin_dat_008aebb8._4_4_;
  iVar4 = FUN_0065f7a0(puVar3);
  DAT_008f945c = uVar1;
  thunk_FUN_007c7250(puVar3);
  return iVar4 != 0;
}

