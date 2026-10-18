/* speed.exe 0081ec4d FUN_0081ec4d; analysis pseudocode, not buildable source.
 * calls 0082261b FUN_0082261b
 * calls 008205c5 FUN_008205c5
 */

int FUN_0081ec4d(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_009c2018 == 0) {
    DAT_009c2000 = 0;
    DAT_009c2004 = 0;
    DAT_009c2018 = 1;
    DAT_009c2008 = 0;
    iVar2 = FUN_008205c5(0x9c2025,&DAT_009c2000);
    if (iVar2 < 0) {
      return iVar2;
    }
    if (param_1 != (undefined1 *)0x0) {
      iVar1 = (int)&DAT_009c2000 - (int)param_1;
      iVar2 = 9;
      do {
        *param_1 = param_1[iVar1];
        param_1 = param_1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    DAT_009c2024._2_1_ = 0xff;
    DAT_009c2020._0_2_ = 0x2b11;
    DAT_009c2020._2_2_ = 48000;
    DAT_009c2024._0_1_ = 1;
    DAT_009c2055 = 1;
    DAT_009c2064 = 1;
    DAT_009c2066 = 0x24;
    DAT_009c204a = 0x20;
    DAT_009c205e = 0x10;
    DAT_009c2046 = 0xac44;
    DAT_009c205f = 2;
    DAT_009c2058 = 0x19;
    DAT_009c218f = FUN_0082261b();
  }
  else {
    iVar1 = (int)&DAT_009c2000 - (int)param_1;
    iVar2 = 9;
    do {
      *param_1 = param_1[iVar1];
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

