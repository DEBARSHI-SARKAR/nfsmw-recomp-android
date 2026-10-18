/* speed.exe 0051f520 FUN_0051f520; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 00514cc0 FUN_00514cc0
 * calls 00503400 FUN_00503400
 * calls 00530240 FUN_00530240
 */

void __fastcall FUN_0051f520(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x10)) {
    FUN_00530240();
    return;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00516be0(0xc0942e85,*(undefined4 *)(param_1 + 0xc),0xfffffffc,0xff);
    FUN_00503400(*(undefined4 *)(param_1 + 0x20),0,0);
    iVar3 = *(int *)(param_1 + 0x2c);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != *(int *)(param_1 + 0x20))) {
      *(int *)(iVar3 + 0x24) = *(int *)(param_1 + 0x20);
      *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400000;
    }
    iVar3 = 1;
    FUN_00514cc0(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00516be0(0x8c9d4547,*(undefined4 *)(param_1 + 0xc),0xfffffffc,0xff);
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x20 + iVar3 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != iVar2)) {
      *(int *)(iVar1 + 0x24) = iVar2;
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
    }
    iVar3 = iVar3 + 1;
    FUN_00514cc0(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00516be0(0xd22b95d0,*(undefined4 *)(param_1 + 0xc),0xfffffffc,0xff);
    iVar1 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(param_1 + 0x20 + iVar3 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != iVar3)) {
      *(int *)(iVar1 + 0x24) = iVar3;
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
    }
    FUN_00514cc0(*(undefined4 *)(param_1 + 0x34));
  }
  return;
}

