/* speed.exe 005b2bb0 FUN_005b2bb0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005af1c0 FUN_005af1c0
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b2bb0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  thunk_FUN_007c7250(*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = _malloc((size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
    *(char **)(param_1 + 0x5c) = pcVar2;
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  uVar3 = FUN_005af1c0(*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
  if (DAT_0091dd08 != (undefined4 *)0x0) {
    (**(code **)*DAT_0091dd08)(param_1);
  }
  return;
}

