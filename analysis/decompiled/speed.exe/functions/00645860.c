/* speed.exe 00645860 FUN_00645860; analysis pseudocode, not buildable source.
 * calls 006442e0 FUN_006442e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00645860(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar5 = 0;
    do {
      uVar2 = DAT_00920430;
      iVar3 = *(int *)(param_1 + 0x24) + iVar5;
      if (_DAT_00890968 <= *(float *)(*(int *)(param_1 + 0x24) + 0x1c + iVar5)) {
        fVar1 = *(float *)(iVar3 + 0x1c);
        *(undefined4 *)(iVar3 + 0x1c) = 0xbf800000;
        *(float *)(iVar3 + 0x18) = (param_2 - fVar1) + *(float *)(iVar3 + 0x18);
        FUN_006442e0(uVar2,param_3);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x40;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  return;
}

