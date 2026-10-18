/* speed.exe 0083ad80 FUN_0083ad80; analysis pseudocode, not buildable source.
 */

uint FUN_0083ad80(char *param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1 == (char *)0x0) {
    return param_2;
  }
  uVar3 = 0;
  bVar2 = (&DAT_008c6630)[*param_1];
  while (-1 < (char)bVar2) {
    pcVar1 = param_1 + 1;
    uVar3 = uVar3 | 1 << (bVar2 & 0x1f);
    param_1 = param_1 + 1;
    bVar2 = (&DAT_008c6630)[*pcVar1];
  }
  return uVar3;
}

