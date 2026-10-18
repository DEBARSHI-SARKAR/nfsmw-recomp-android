/* speed.exe 005b2810 FUN_005b2810; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005af1c0 FUN_005af1c0
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b2810(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = _malloc((size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
    *(char **)(param_1 + 0x2c) = pcVar2;
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = FUN_005af1c0(*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  return;
}

