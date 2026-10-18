/* speed.exe 0083ac30 FUN_0083ac30; analysis pseudocode, not buildable source.
 * calls 007c5f30 __allmul
 */

void FUN_0083ac30(char *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  
  pcVar4 = param_1;
  uVar3 = 10;
  if (param_1 == (char *)0x0) {
    return;
  }
  cVar1 = *param_1;
  param_1 = (char *)0x1;
  if (cVar1 != '+') {
    if (cVar1 != '-') goto LAB_0083ac6c;
    param_1 = (char *)0xffffffff;
  }
  pcVar4 = pcVar4 + 1;
LAB_0083ac6c:
  if (*pcVar4 == '$') {
    pcVar4 = pcVar4 + 1;
    uVar3 = 0x10;
  }
  lVar5 = 0;
  bVar2 = (&DAT_008c6408)[*pcVar4];
  while (bVar2 < uVar3) {
    lVar5 = __allmul(uVar3,0,lVar5);
    lVar5 = lVar5 + (ulonglong)(uint)bVar2;
    pcVar4 = pcVar4 + 1;
    bVar2 = (&DAT_008c6408)[*pcVar4];
  }
  __allmul(param_1,(int)param_1 >> 0x1f,lVar5);
  return;
}

