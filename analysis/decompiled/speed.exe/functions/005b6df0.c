/* speed.exe 005b6df0 FUN_005b6df0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b6df0(uint *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  
  uVar2 = *param_1;
  if (((0x1ff < uVar2) && (uVar2 < 0x205)) && (uVar2 != 0x203)) {
    thunk_FUN_007c7250(param_1[1]);
  }
  param_1[1] = 0;
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pvVar4 = _malloc((size_t)(pcVar3 + (1 - (int)(param_2 + 1))));
    iVar5 = (int)pvVar4 - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[iVar5] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    param_1[1] = (uint)pvVar4;
  }
  return;
}

