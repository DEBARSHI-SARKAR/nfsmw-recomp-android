/* speed.exe 005bc9b0 FUN_005bc9b0; analysis pseudocode, not buildable source.
 * calls 005b98f0 FUN_005b98f0
 * calls 005b4e70 FUN_005b4e70
 * calls 005b42d0 FUN_005b42d0
 * calls 005b50c0 FUN_005b50c0
 * calls 005b4d50 FUN_005b4d50
 */

void __thiscall FUN_005bc9b0(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = *param_2;
  iVar3 = *(int *)(param_1 + 0xc);
  if (uVar2 < 0x6a4d) {
    if (uVar2 == 0x6a4c) {
      FUN_005b50c0(0,0,*(undefined4 *)(param_2 + 2),*(undefined4 *)(iVar3 + 0x60),
                   *(undefined4 *)(iVar3 + 100));
      return;
    }
    if (uVar2 == 0x444c) {
      FUN_005b98f0(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4));
      return;
    }
    if (uVar2 == 0x4953) {
      FUN_005b42d0(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4));
      return;
    }
    if (uVar2 == 0x6343) {
      FUN_005b4d50(0,0,*(undefined4 *)(param_2 + 2),*(undefined4 *)(iVar3 + 0x60),
                   *(undefined4 *)(iVar3 + 100));
      return;
    }
  }
  else if (uVar2 == 0x7343) {
    local_8 = *(undefined4 *)(param_2 + 2);
    local_4 = *(undefined4 *)(param_2 + 4);
    FUN_005b4e70(0,0,&local_8,*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100));
  }
  else {
    if (uVar2 == 0x744c) {
      uVar4 = *(uint *)(iVar3 + 0x68) & 1;
      *(uint *)(iVar3 + 0x68) = uVar4;
      *(uint *)(iVar3 + 0x68) = *(uint *)(param_2 + 2) & 0xfffffffe | uVar4;
      return;
    }
    if (uVar2 == 0x764c) {
      uVar1 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(iVar3 + 0x84) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(iVar3 + 0x88) = uVar1;
      return;
    }
  }
  return;
}

