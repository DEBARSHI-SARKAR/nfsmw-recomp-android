/* speed.exe 00866430 FUN_00866430; analysis pseudocode, not buildable source.
 */

int FUN_00866430(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_009c5000 = 0;
  iVar2 = 300;
  do {
    iVar1 = iVar2 / 100;
    if (iVar1 != iVar3) {
      (&DAT_009c4f80)[DAT_009c5000] = (short)iVar1;
      DAT_009c5000 = DAT_009c5000 + 1;
      iVar3 = iVar1;
    }
    iVar1 = iVar2 * 0x66666688;
    iVar2 = (iVar2 * 0x78) / 100;
  } while (iVar2 < 0xc7f9c);
  return iVar1;
}

