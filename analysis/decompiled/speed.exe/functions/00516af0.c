/* speed.exe 00516af0 FUN_00516af0; analysis pseudocode, not buildable source.
 * calls 005b5b70 FUN_005b5b70
 * calls 00591d90 FUN_00591d90
 * calls 005b7580 FUN_005b7580
 * calls 00572070 FUN_00572070
 */

int FUN_00516af0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != param_1 + 1) {
      if (0 < DAT_0091d218) {
        FUN_00572070();
        iVar3 = FUN_00591d90(param_1);
        return iVar3;
      }
      iVar3 = FUN_005b5b70(param_1);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_005b7580(param_1);
      return iVar3;
    }
  }
  return 0;
}

