/* speed.exe 00615180 FUN_00615180; analysis pseudocode, not buildable source.
 * calls 006069c0 FUN_006069c0
 * calls 0060b9d0 FUN_0060b9d0
 * calls 00615000 FUN_00615000
 * calls 0060b730 FUN_0060b730
 */

int FUN_00615180(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar2 = *(undefined2 *)(param_1 + 0x2e);
  uVar1 = *(undefined1 *)(param_1 + 0x31);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = param_5;
  iVar6 = FUN_006069c0(param_1,param_2,param_3);
  if (iVar6 != 0) {
    FUN_0060b9d0(param_1,*(int *)(param_1 + 0x1c) + param_4);
    FUN_00615000();
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0x28) + (iVar4 - iVar3));
    *(undefined2 *)(param_1 + 0x2e) = uVar2;
    *(undefined4 **)(param_1 + 0x14) = puVar7;
    *(undefined4 *)(param_1 + 0xc) = *puVar7;
    *(undefined1 *)(param_1 + 0x31) = uVar1;
    FUN_0060b730();
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    return iVar6;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  return 0;
}

