/* speed.exe 0083fcf0 FUN_0083fcf0; analysis pseudocode, not buildable source.
 * calls 0083cd40 FUN_0083cd40
 */

undefined1 * FUN_0083fcf0(void)

{
  int iVar1;
  
  if (DAT_009c36d4 == '\0') {
    iVar1 = FUN_0083cd40(0x6d616378,&DAT_009c36c0,0x10);
    if (0 < iVar1) {
      DAT_009c36d6 = "0123456789abcdef$%08x"[DAT_009c36c0 & 0xf];
      DAT_009c36d5 = "0123456789abcdef$%08x"[DAT_009c36c0 >> 4];
      DAT_009c36d8 = "0123456789abcdef$%08x"[DAT_009c36c1 & 0xf];
      DAT_009c36d7 = "0123456789abcdef$%08x"[DAT_009c36c1 >> 4];
      DAT_009c36da = "0123456789abcdef$%08x"[DAT_009c36c2 & 0xf];
      DAT_009c36d9 = "0123456789abcdef$%08x"[DAT_009c36c2 >> 4];
      DAT_009c36dc = "0123456789abcdef$%08x"[DAT_009c36c3 & 0xf];
      DAT_009c36db = "0123456789abcdef$%08x"[DAT_009c36c3 >> 4];
      DAT_009c36de = "0123456789abcdef$%08x"[DAT_009c36c4 & 0xf];
      DAT_009c36dd = "0123456789abcdef$%08x"[DAT_009c36c4 >> 4];
      DAT_009c36e0 = "0123456789abcdef$%08x"[DAT_009c36c5 & 0xf];
      DAT_009c36df = "0123456789abcdef$%08x"[DAT_009c36c5 >> 4];
      DAT_009c36d4 = '$';
      DAT_009c36e1 = 0;
    }
  }
  return &DAT_009c36d4;
}

