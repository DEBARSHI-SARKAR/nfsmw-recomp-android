/* speed.exe 0064d280 FUN_0064d280; analysis pseudocode, not buildable source.
 */

uint __thiscall
FUN_0064d280(int param_1,int param_2,undefined4 param_3,uint param_4,int *param_5,undefined4 param_6
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  uVar4 = *(uint *)(param_2 + 0x20);
  iVar1 = *(int *)(param_2 + 0x24);
  if ((*(int *)(param_2 + 0x1c) - iVar1 == (uint)(*(uint *)(param_2 + 0x18) < uVar4)) &&
     (*(uint *)(param_2 + 0x18) - uVar4 < param_4)) {
    param_4 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x20);
  }
  iVar2 = *(int *)(param_2 + 0x10);
  iVar3 = ((uVar4 >> 0xb | iVar1 << 0x15) - *(int *)(param_1 + 0x814)) + iVar2;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *(int *)(param_1 + 0x818) = *(int *)(param_1 + 0x818) + iVar3;
  *(uint *)(param_1 + 0x814) =
       (param_4 + uVar4 >> 0xb | (iVar1 + (uint)CARRY4(param_4,uVar4)) * 0x200000) + iVar2;
  uVar4 = *(int *)(param_2 + 0xc) * 0x800;
  (**(code **)(*param_5 + 0x1c))
            (param_6,uVar4 + *(uint *)(param_2 + 0x20),
             ((int)uVar4 >> 0x1f) + *(int *)(param_2 + 0x24) +
             (uint)CARRY4(uVar4,*(uint *)(param_2 + 0x20)),0,0,0);
  uVar5 = (**(code **)(*param_5 + 0x14))(param_6,unaff_EDI,unaff_ESI,0,0);
  uVar4 = *(uint *)(param_2 + 0x20);
  *(uint *)(param_2 + 0x20) = uVar4 + uVar5;
  *(uint *)(param_2 + 0x24) =
       *(int *)(param_2 + 0x24) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar4,uVar5);
  return uVar5;
}

