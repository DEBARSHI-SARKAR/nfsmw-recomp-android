/* speed.exe 00445fa0 FUN_00445fa0; analysis pseudocode, not buildable source.
 * calls 0049fcf0 FUN_0049fcf0
 * calls 0045ecf0 FUN_0045ecf0
 */

undefined4 __thiscall FUN_00445fa0(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_2 == '\0') && (*(int *)(param_1 + 0x78) == DAT_00982b78)) {
    return 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x78) = DAT_00982b78;
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if ((DAT_008ec2b0 != 0) && (*(int **)(param_1 + 0x4c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))(uVar2,uVar3,0);
  }
  if ((DAT_008ec2b4 != 0) && (*(int **)(param_1 + 0x50) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x50) + 0x18))(uVar2,uVar3,0);
  }
  if ((DAT_008ec2ac != 0) && (*(int **)(param_1 + 0x48) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x18))(uVar2,uVar3,0);
  }
  FUN_0049fcf0(uVar3,uVar1,0);
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x20) + 0x24);
    iVar4 = *(int *)(iVar6 + 8);
    iVar5 = *(int *)(param_1 + 0x2c);
    if (0 < iVar4) {
      iVar6 = iVar6 + 0x40;
      do {
        FUN_0045ecf0(iVar5,iVar5,iVar6);
        iVar6 = iVar6 + 0x70;
        iVar5 = iVar5 + 0x40;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

