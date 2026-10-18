/* speed.exe 005afe00 FUN_005afe00; analysis pseudocode, not buildable source.
 */

bool FUN_005afe00(short *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  short sVar5;
  
  pcVar3 = (char *)*param_3;
  bVar2 = false;
  sVar5 = 0;
  if (pcVar3 < param_4) {
    pcVar4 = pcVar3 + param_2;
    do {
      cVar1 = *pcVar4;
      if ((cVar1 == '\r') || (cVar1 == '\n')) break;
      if (bVar2) {
        if (cVar1 == '\\') {
          *param_1 = sVar5;
          param_1 = param_1 + 1;
          bVar2 = false;
        }
        else if (('/' < cVar1) && (cVar1 < ':')) {
          sVar5 = cVar1 + -0x30 + sVar5 * 10;
        }
      }
      else {
        if (cVar1 == '\\') {
          if ((param_4 <= pcVar4 + (1 - param_2)) || (pcVar3[param_2 + 1] != '\\')) {
            bVar2 = true;
            sVar5 = 0;
            goto LAB_005afe9f;
          }
          *param_1 = 0x5c;
        }
        else {
          *param_1 = (short)cVar1;
        }
        param_1 = param_1 + 1;
      }
LAB_005afe9f:
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar3 < param_4);
  }
  *param_1 = 0;
  for (; (pcVar3 < param_4 && ((pcVar3[param_2] == '\r' || (pcVar3[param_2] == '\n'))));
      pcVar3 = pcVar3 + 1) {
  }
  *param_3 = pcVar3;
  return pcVar3 < param_4;
}

