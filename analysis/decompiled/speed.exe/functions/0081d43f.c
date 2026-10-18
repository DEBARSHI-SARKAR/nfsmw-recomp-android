/* speed.exe 0081d43f FUN_0081d43f; analysis pseudocode, not buildable source.
 * calls 0081ab00 FUN_0081ab00
 * calls 0081d2c7 FUN_0081d2c7
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081ba5d FUN_0081ba5d
 * calls 0081e9e7 FUN_0081e9e7
 * calls 00819670 FUN_00819670
 */

undefined4 FUN_0081d43f(int param_1,char *param_2,undefined4 param_3,code *param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (DAT_009c2188 != '\0') {
    DAT_009c1bf3 = 1;
    DAT_009c1c20 = param_1;
    DAT_009c1c1c = param_4;
    FUN_0081bccb();
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      DAT_009c1c34 = (char *)0x0;
    }
    else {
      pcVar2 = param_2;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = (char *)FUN_0081e9e7(pcVar2 + (1 - (int)(param_2 + 1)));
      DAT_009c1c34 = pcVar2;
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    DAT_009c1c18 = param_3;
    FUN_0081bcd9();
    DAT_009c1c38 = 0xffffffff;
    DAT_009c1c28 = 0xffffffff;
    DAT_009c1c24 = 0;
    DAT_009c1c2c = 0;
    DAT_009c1c30 = param_1;
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    DAT_009c1c30 = (*DAT_009c1c1c)(uVar3);
    FUN_00819670(DAT_009c1c30,param_1,uVar3);
    uVar3 = FUN_0081ab00();
    *(undefined4 *)(DAT_009c1c30 + 0x3c) = uVar3;
    FUN_0081ba5d(FUN_0081d2c7);
    FUN_0081d2c7();
    return *(undefined4 *)(DAT_009c1c30 + 0x3c);
  }
  return 0xfffffff6;
}

