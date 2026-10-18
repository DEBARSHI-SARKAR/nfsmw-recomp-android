/* speed.exe 0060d040 FUN_0060d040; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0060d040(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  code *pcVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + -4);
  if ((*(char *)(iVar1 + 7) != '\0') && ((int *)(iVar1 + 0x10) != (int *)0x0)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 2) {
      pcVar5 = *(code **)(iVar1 + 0x14);
      goto LAB_0060d074;
    }
    if (iVar2 == 7) {
      pcVar5 = (code *)(*(int *)(iVar1 + 0x14) + 0x10);
      goto LAB_0060d074;
    }
  }
  pcVar5 = (code *)0x0;
LAB_0060d074:
  cVar4 = (*pcVar5)();
  puVar3 = *(undefined4 **)(param_1 + 8);
  *puVar3 = 1;
  puVar3[1] = (uint)(cVar4 != '\0');
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return 1;
}

