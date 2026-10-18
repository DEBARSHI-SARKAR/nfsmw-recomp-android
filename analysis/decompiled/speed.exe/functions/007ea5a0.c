/* speed.exe 007ea5a0 FUN_007ea5a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ea5a0(uint *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  *(uint *)(param_2 + 8) = *param_1 >> 10 & 1;
  *(uint *)(param_2 + 0xc) = *param_1 >> 0xb & 1;
  *(uint *)(param_2 + 0x10) = *param_1 >> 9 & 1;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x20;
  pcVar3 = (char *)param_1[2];
  if (pcVar3 != (char *)0x0) {
    pcVar3 = pcVar3 + (int)param_1;
  }
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  *(int *)(param_2 + 0x90) = (int)pcVar3 - (int)pcVar1;
  return;
}

