/* speed.exe 0060d180 FUN_0060d180; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0060d180(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + -4);
  if ((*(char *)(iVar4 + 7) != '\0') && ((int *)(iVar4 + 0x10) != (int *)0x0)) {
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar1 == 2) {
      pcVar3 = *(code **)(iVar4 + 0x14);
      goto LAB_0060d1b4;
    }
    if (iVar1 == 7) {
      pcVar3 = (code *)(*(int *)(iVar4 + 0x14) + 0x10);
      goto LAB_0060d1b4;
    }
  }
  pcVar3 = (code *)0x0;
LAB_0060d1b4:
  iVar4 = (*pcVar3)();
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = 3;
  puVar2[1] = (float)iVar4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return 1;
}

