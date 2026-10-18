/* speed.exe 005b6cc0 FUN_005b6cc0; analysis pseudocode, not buildable source.
 */

int * FUN_005b6cc0(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)(param_2 + 1);
    if (uVar3 != 0) {
      if ((*param_1 != 0) && (param_1[2] + uVar3 < (uint)param_1[1])) {
        pcVar2 = (char *)(param_1[2] + *param_1);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)param_2;
          param_2 = param_2 + 4;
          pcVar2 = pcVar2 + 4;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar2 = *param_2;
          param_2 = param_2 + 1;
          pcVar2 = pcVar2 + 1;
        }
      }
      param_1[2] = param_1[2] + uVar3;
      return param_1;
    }
  }
  return param_1;
}

