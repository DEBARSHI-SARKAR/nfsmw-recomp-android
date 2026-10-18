/* speed.exe 005b59c0 FUN_005b59c0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005af1c0 FUN_005af1c0
 * calls 00652b10 thunk_FUN_007c7250
 */

undefined1 __thiscall FUN_005b59c0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = _malloc((size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
    *(char **)(param_1 + 0xc) = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar4 = 1;
    }
  }
  uVar3 = FUN_005af1c0(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar4;
}

