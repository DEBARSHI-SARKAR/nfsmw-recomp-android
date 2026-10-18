/* speed.exe 0082af20 FUN_0082af20; analysis pseudocode, not buildable source.
 * calls 0082a310 FUN_0082a310
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0082af20(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  FUN_0082a310(param_2);
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xfc) + 0xc);
  uVar2 = *(ushort *)(*(int *)(param_1 + 0xfc) + 0xe);
  if (uVar1 == 0x1000) {
    if (uVar2 == 0x1000) {
      return 1;
    }
    dVar3 = _DAT_008c5fd0 / 4096.0;
  }
  else {
    dVar3 = _DAT_008942e0;
    if (uVar1 != 0) {
      dVar3 = _DAT_008c5fd0 / (double)uVar1;
    }
  }
  dVar4 = _DAT_008942e0;
  if (uVar2 != 0) {
    dVar4 = (double)uVar2 * _DAT_008c5fc8;
  }
  if (dVar4 * dVar3 == _DAT_008942e0) {
    uVar5 = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x58) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x54) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x50) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x48) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x44) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x40) = 0x7fffffff;
  }
  else {
    uVar5 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x40) = uVar5;
    uVar5 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x44) = uVar5;
    uVar5 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x48) = uVar5;
    uVar5 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x4c) = uVar5;
    uVar5 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    uVar5 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    uVar5 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    uVar5 = FUN_007c4b80();
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  puVar7 = (undefined4 *)(param_1 + 0x28);
  for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}

