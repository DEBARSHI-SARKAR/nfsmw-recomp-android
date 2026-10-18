/* speed.exe 0083abc0 FUN_0083abc0; analysis pseudocode, not buildable source.
 */

int FUN_0083abc0(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 1;
  uVar5 = 10;
  if (param_1 == (char *)0x0) {
    return param_2;
  }
  cVar2 = *param_1;
  if (cVar2 == '-') {
    param_1 = param_1 + 1;
    iVar6 = -1;
  }
  else {
    if (cVar2 == '$') {
      uVar5 = 0x10;
    }
    else if (cVar2 != '+') goto LAB_0083abf7;
    param_1 = param_1 + 1;
  }
LAB_0083abf7:
  iVar4 = 0;
  bVar3 = (&DAT_008c6408)[*param_1];
  while (bVar3 < uVar5) {
    iVar4 = iVar4 * uVar5 + (uint)bVar3;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar3 = (&DAT_008c6408)[*pcVar1];
  }
  return iVar4 * iVar6;
}

