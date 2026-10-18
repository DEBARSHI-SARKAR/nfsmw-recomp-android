/* speed.exe 00610500 FUN_00610500; analysis pseudocode, not buildable source.
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_00610500(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + -4);
  if ((*(char *)(iVar4 + 7) != '\0') && ((int *)(iVar4 + 0x10) != (int *)0x0)) {
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar1 == 2) {
      pcVar5 = *(code **)(iVar4 + 0x14);
      goto LAB_00610535;
    }
    if (iVar1 == 7) {
      pcVar5 = (code *)(*(int *)(iVar4 + 0x14) + 0x10);
      goto LAB_00610535;
    }
  }
  pcVar5 = (code *)0x0;
LAB_00610535:
  FUN_0060b060(param_1,1);
  uVar3 = FUN_007c4b80();
  iVar4 = (*pcVar5)(uVar3);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = 3;
  puVar2[1] = (float)iVar4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return 1;
}

