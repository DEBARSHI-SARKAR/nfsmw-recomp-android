/* speed.exe 0081b065 FUN_0081b065; analysis pseudocode, not buildable source.
 * calls 0081ab00 FUN_0081ab00
 * calls 00862ade FUN_00862ade
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081ad4d FUN_0081ad4d
 * calls 0081ba5d FUN_0081ba5d
 * calls 0081e9e7 FUN_0081e9e7
 */

int FUN_0081b065(char *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  if (DAT_009c2188 == '\0') {
    iVar4 = -10;
  }
  else {
    DAT_009c1af4 = param_5;
    DAT_009c1ac4 = param_6;
    DAT_009c1bf3 = '\x01';
    DAT_009c1ae0 = param_7;
    DAT_009c1ac0 = '\0';
    FUN_0081bccb();
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_0081e9e7(pcVar2 + (1 - (int)(param_1 + 1)));
    pcVar2 = param_1;
    DAT_009c1af0 = pcVar3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    DAT_009c1adc = param_2;
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      DAT_009c1aec = (char *)0x0;
    }
    else {
      pcVar2 = param_3;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = (char *)FUN_0081e9e7(pcVar2 + (1 - (int)(param_3 + 1)));
      DAT_009c1aec = pcVar2;
      do {
        cVar1 = *param_3;
        param_3 = param_3 + 1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    DAT_009c1ad4 = param_4;
    FUN_0081bcd9();
    DAT_009c1abc = 0xffffffff;
    DAT_009c1acc = 0xffffffff;
    DAT_009c1ac8 = 0;
    DAT_009c1ad0 = DAT_0090bce0;
    DAT_009c1ae8 = FUN_0081ab00();
    DAT_009c1ad8 = FUN_00862ade(param_1,1,DAT_009c1ad0,0);
    FUN_0081ba5d(FUN_0081ad4d);
    FUN_0081ad4d();
    iVar4 = (int)DAT_009c1ac0;
    if (DAT_009c1bf3 != '\0') {
      iVar4 = DAT_009c1ae8;
    }
  }
  return iVar4;
}

