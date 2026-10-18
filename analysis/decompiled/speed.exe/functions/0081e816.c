/* speed.exe 0081e816 FUN_0081e816; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0081e816(int param_1)

{
  bool bVar1;
  
  if (DAT_009c1b2c == 1) {
    DAT_0090bce4 = DAT_009c1b28;
    DAT_009c1b2c = 0;
  }
  bVar1 = false;
  while (!bVar1) {
    if (DAT_009c1b0c != 0) {
      *(undefined1 *)(param_1 + 0x2a) = DAT_009c1b08;
      DAT_009c1b0c = 0;
    }
    if (DAT_009c1b34 != 0) {
      *(undefined2 *)(param_1 + 0x26) = DAT_009c1b30;
      DAT_009c1b34 = 0;
    }
    bVar1 = true;
  }
  return 0xfffffffb;
}

