/* speed.exe 0061d250 FUN_0061d250; analysis pseudocode, not buildable source.
 * calls 0060e2e0 FUN_0060e2e0
 * calls 00613eb0 FUN_00613eb0
 * calls 006156a0 FUN_006156a0
 * calls 0060bf90 FUN_0060bf90
 * calls 00615230 FUN_00615230
 */

void __fastcall FUN_0061d250(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_006156a0();
  *param_1 = iVar2;
  *(undefined1 **)(*(int *)(iVar2 + 0x10) + 0x28) = &LAB_0061b960;
  FUN_0060e2e0(*param_1);
  iVar2 = *param_1;
  puVar1 = *(undefined4 **)(iVar2 + 8);
  *puVar1 = 4;
  uVar3 = FUN_00613eb0(iVar2,"__index",7);
  puVar1[1] = uVar3;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 8;
  iVar2 = *param_1;
  iVar4 = FUN_00615230(iVar2,0);
  *(code **)(iVar4 + 0xc) = FUN_0061b970;
  puVar1 = *(undefined4 **)(iVar2 + 8);
  puVar1[1] = iVar4;
  *puVar1 = 6;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 8;
  iVar2 = *param_1;
  iVar4 = *(int *)(iVar2 + 8);
  FUN_0060bf90(iVar2,iVar4 + -0x18,iVar4 + -0x10,iVar4 + -8);
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -0x10;
  iVar2 = *param_1;
  iVar4 = *(int *)(iVar2 + 8) + -8;
  if (*(int *)(*(int *)(iVar2 + 8) + -8) == 0) {
    iVar4 = *(int *)(iVar2 + 0x10) + 0x34;
  }
  if ((*(int *)(iVar2 + 0x40) == 5) || (*(int *)(iVar2 + 0x40) == 7)) {
    *(undefined4 *)(*(int *)(iVar2 + 0x44) + 8) = *(undefined4 *)(iVar4 + 4);
  }
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -8;
  *(undefined4 *)(*(int *)(*param_1 + 0x10) + 0x20) = 0x40000000;
  return;
}

