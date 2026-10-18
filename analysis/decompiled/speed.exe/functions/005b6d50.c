/* speed.exe 005b6d50 FUN_005b6d50; analysis pseudocode, not buildable source.
 * calls 005b6cc0 FUN_005b6cc0
 */

undefined4 FUN_005b6d50(undefined4 param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  char local_c [12];
  
  uVar2 = 1;
  pcVar3 = local_c;
  if (param_2 != 0) {
    do {
      uVar2 = uVar2 * 10;
    } while (uVar2 < param_2 || uVar2 - param_2 == 0);
  }
  while (uVar2 = uVar2 / 10, uVar2 != 0) {
    uVar1 = (ulonglong)param_2;
    param_2 = param_2 - (int)(uVar1 / uVar2) * uVar2;
    *pcVar3 = (char)(uVar1 / uVar2) + '0';
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  FUN_005b6cc0(param_1,local_c);
  return param_1;
}

