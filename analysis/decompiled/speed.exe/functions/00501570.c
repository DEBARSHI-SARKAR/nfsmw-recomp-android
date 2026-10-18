/* speed.exe 00501570 FUN_00501570; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00501570(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x30);
    uVar4 = *(undefined4 *)(iVar2 + 0x34);
    uVar1 = *(undefined4 *)(iVar2 + 0x28);
    uVar5 = *(undefined4 *)(iVar2 + 0x38);
    uVar6 = *(undefined4 *)(iVar2 + 0x20);
    param_2[1] = *(undefined4 *)(iVar2 + 0x24);
    *param_2 = uVar6;
    param_2[2] = uVar1;
    *param_3 = uVar3;
    param_3[1] = uVar4;
    param_3[2] = uVar5;
    return 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return 0;
}

