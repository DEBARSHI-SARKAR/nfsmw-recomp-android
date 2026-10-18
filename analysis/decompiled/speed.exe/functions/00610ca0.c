/* speed.exe 00610ca0 FUN_00610ca0; analysis pseudocode, not buildable source.
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_00610ca0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + -4);
  if ((*(char *)(iVar1 + 7) != '\0') && ((int *)(iVar1 + 0x10) != (int *)0x0)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 2) {
      pcVar6 = *(code **)(iVar1 + 0x14);
      goto LAB_00610cd5;
    }
    if (iVar2 == 7) {
      pcVar6 = (code *)(*(int *)(iVar1 + 0x14) + 0x10);
      goto LAB_00610cd5;
    }
  }
  pcVar6 = (code *)0x0;
LAB_00610cd5:
  FUN_0060b060(param_1,1);
  uVar5 = FUN_007c4b80();
  cVar4 = (*pcVar6)(uVar5);
  puVar3 = *(undefined4 **)(param_1 + 8);
  *puVar3 = 1;
  puVar3[1] = (uint)(cVar4 != '\0');
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return 1;
}

