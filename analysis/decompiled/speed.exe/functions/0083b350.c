/* speed.exe 0083b350 FUN_0083b350; analysis pseudocode, not buildable source.
 * calls 0083a330 FUN_0083a330
 */

int FUN_0083b350(int param_1,undefined4 param_2,int param_3,byte *param_4,int param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  
  if (param_5 < 0) {
    return -1;
  }
  puVar1 = (undefined1 *)FUN_0083a330(param_1,param_2,param_3,param_5 * 2 + 1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0x24;
    pcVar2 = puVar1 + 1;
    if (0 < param_5) {
      do {
        *pcVar2 = (&DAT_008c63f8)[*param_4 >> 4];
        pcVar2[1] = (&DAT_008c63f8)[*param_4 & 0xf];
        pcVar2 = pcVar2 + 2;
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    if ((DAT_0090d314 != 0) && (param_3 != 0)) {
      *pcVar2 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
      pcVar2 = pcVar2 + 1;
    }
    *pcVar2 = '\0';
    return (int)pcVar2 - param_1;
  }
  return -1;
}

