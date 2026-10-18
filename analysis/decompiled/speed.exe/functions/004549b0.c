/* speed.exe 004549b0 FUN_004549b0; analysis pseudocode, not buildable source.
 * calls 007c5f80 _tolower
 * calls 004517c0 FUN_004517c0
 */

undefined4 FUN_004549b0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char local_100 [256];
  
  pcVar5 = local_100;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    iVar3 = _tolower((int)cVar2);
    *pcVar5 = (char)iVar3;
    pcVar1 = param_1 + 1;
    pcVar5 = pcVar5 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar5 = '\0';
  pcVar5 = local_100;
  if (local_100[0] != '\0') {
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    uVar4 = FUN_004517c0((int)pcVar5 - (int)(local_100 + 1));
    return uVar4;
  }
  return 0;
}

