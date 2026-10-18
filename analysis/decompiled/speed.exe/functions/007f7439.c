/* speed.exe 007f7439 FUN_007f7439; analysis pseudocode, not buildable source.
 * calls 007cbb10 _strrchr
 */

char * FUN_007f7439(char *param_1)

{
  char *in_EAX;
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  for (; *in_EAX != '\0'; in_EAX = in_EAX + 1) {
    pcVar1 = _strrchr(param_1,(int)*in_EAX);
    if (pcVar2 < pcVar1) {
      pcVar2 = pcVar1;
    }
  }
  return pcVar2;
}

