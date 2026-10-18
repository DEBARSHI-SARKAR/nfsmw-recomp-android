/* speed.exe 00849530 FUN_00849530; analysis pseudocode, not buildable source.
 * calls 00849200 FUN_00849200
 * calls 00852430 GetTickCount
 */

undefined4 FUN_00849530(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  DWORD DVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1a8) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1ac);
  *(uint *)(param_1 + 0x1ac) = uVar1 * 0x19660d + 0x3c6ef35f;
  iVar4 = (uVar1 & 0xffff) % 0x55 + 0xf;
  if (param_2 != 0) {
    uVar2 = FUN_00849200(param_1,param_1 + 0x24,*(undefined4 *)(param_1 + 0x18),
                         *(int *)(param_1 + 0xa4) / 2 + iVar4,param_1 + 0xa8,param_1 + 0x128,
                         *(undefined4 *)(param_1 + 0x8e8),*(undefined4 *)(param_1 + 0x8e4));
    return uVar2;
  }
  DVar3 = GetTickCount();
  *(DWORD *)(param_1 + 0x14) = DVar3 + iVar4 * 1000;
  if (*(int *)(param_1 + 0x10) != 7) {
    *(undefined4 *)(param_1 + 0x10) = 7;
  }
  return 0;
}

