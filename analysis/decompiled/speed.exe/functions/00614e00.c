/* speed.exe 00614e00 FUN_00614e00; analysis pseudocode, not buildable source.
 * calls 00613eb0 FUN_00613eb0
 */

void FUN_00614e00(int param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (param_2 == (char *)0x0) {
    **(undefined4 **)(param_1 + 8) = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    return;
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = 4;
  uVar4 = FUN_00613eb0(param_1,param_2,(int)pcVar3 - (int)(param_2 + 1));
  puVar2[1] = uVar4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}

