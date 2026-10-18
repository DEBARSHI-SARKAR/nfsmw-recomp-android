/* speed.exe 00833562 FUN_00833562; analysis pseudocode, not buildable source.
 * calls 008349fa FUN_008349fa
 */

int FUN_00833562(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  short *psVar3;
  int unaff_EDI;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_8 = 0;
  uVar1 = (uint)(*(byte *)(in_EAX + 2) >> 2);
  if (uVar1 != 0) {
    psVar3 = (short *)(unaff_EDI + 4);
    do {
      iVar2 = FUN_008349fa(*(undefined4 *)(DAT_009c2c10 + 4 + *psVar3 * 8),
                           *(undefined1 *)(*(byte *)(psVar3 + 3) + 0x92 + unaff_EDI),local_10,
                           &local_c);
      if (iVar2 != 0) {
        local_8 = local_8 + local_c;
      }
      psVar3 = psVar3 + 6;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  iVar2 = 0;
  if (DAT_009c29f4 != 0) {
    iVar2 = (local_8 * 100) / DAT_009c29f4;
  }
  return iVar2;
}

