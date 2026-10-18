/* speed.exe 0070f610 FUN_0070f610; analysis pseudocode, not buildable source.
 * calls 00705980 FUN_00705980
 * calls 006fff90 FUN_006fff90
 * calls 007029c0 FUN_007029c0
 * calls 0070e880 FUN_0070e880
 * calls 00708b70 FUN_00708b70
 */

int __thiscall FUN_0070f610(int param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uStack_8;
  
  lVar4 = FUN_006fff90(*param_3,param_3[1]);
  if ((lVar4 != 0) && (uVar1 = FUN_00705980(lVar4), uVar1 < *(uint *)(param_1 + 0x20))) {
    iVar3 = *(int *)(param_1 + 0x1c) + uVar1 * 0x10;
    iVar2 = *(int *)(iVar3 + 8);
    if ((iVar2 != iVar3) && ((iVar2 != iVar3 && (iVar2 != 0)))) {
      return iVar2;
    }
  }
  iVar2 = FUN_0070e880(param_3,0);
  *(undefined1 *)(iVar2 + 0x19) = 0;
  *(undefined1 *)(iVar2 + 4) = 1;
  *(undefined4 *)(iVar2 + 0x1c) = DAT_00925ae8;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x18) = 0;
  iVar3 = (**(code **)(*param_2 + 0x1c))(*param_3);
  *(int *)(iVar2 + 0x28) = iVar3 + param_3[1];
  FUN_00708b70((int)lVar4,uStack_8,iVar2);
  if (200 < (*(uint *)(param_1 + 0x28) & 0xfffffffe)) {
    FUN_007029c0(*(undefined4 *)(param_1 + 0x20));
  }
  return iVar2;
}

