/* speed.exe 007f0cf5 FUN_007f0cf5; analysis pseudocode, not buildable source.
 * calls 007f0b24 FUN_007f0b24
 */

undefined1 * FUN_007f0cf5(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)FUN_007f0b24(param_1,0,param_2,0,0);
  if (pcVar2 != (char *)0x0) {
    iVar3 = (int)param_3 - (int)pcVar2;
    do {
      cVar1 = *pcVar2;
      pcVar2[iVar3] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return param_3;
  }
  *param_3 = 0;
  return (undefined1 *)0x0;
}

