/* speed.exe 004624d0 FUN_004624d0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_004624d0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar3 = param_1;
  if (cVar2 != '\0') {
    do {
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    while (cVar2 != '\0') {
      pcVar3 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar3;
    }
  }
  return 0;
}

