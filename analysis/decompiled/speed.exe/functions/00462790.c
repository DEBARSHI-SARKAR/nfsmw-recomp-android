/* speed.exe 00462790 FUN_00462790; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00462790(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
  *param_1 = &PTR_FUN_00894274;
  pcVar5 = (char *)(param_1 + 4);
  if (pcVar5 != (char *)0x0) {
    cVar2 = *pcVar5;
    while (cVar2 != '\0') {
      pcVar1 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar1;
    }
  }
  *param_1 = &PTR_FUN_00894264;
  iVar3 = param_1[1];
  piVar4 = (int *)param_1[2];
  *piVar4 = iVar3;
  *(int **)(iVar3 + 4) = piVar4;
  return;
}

