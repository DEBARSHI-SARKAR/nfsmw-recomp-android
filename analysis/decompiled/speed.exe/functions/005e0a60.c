/* speed.exe 005e0a60 FUN_005e0a60; analysis pseudocode, not buildable source.
 */

uint FUN_005e0a60(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x34);
  return (param_2 & uVar1 ^ ((param_2 & uVar1) + iVar2) * iVar3 ^
         ((param_2 & uVar1) + iVar4) * iVar5) & ~uVar1 ^ param_2 ^
         (((param_2 & uVar1 ^ ((param_2 & uVar1) + iVar2) * iVar3 ^
           ((param_2 & uVar1) + iVar4) * iVar5) & ~uVar1 ^ param_2) & ~uVar1 ^
          ((((param_2 & uVar1 ^ ((param_2 & uVar1) + iVar2) * iVar3 ^
             ((param_2 & uVar1) + iVar4) * iVar5) & ~uVar1 ^ param_2) & ~uVar1) +
          *(int *)(param_1 + 0x1c)) * *(int *)(param_1 + 0x18) ^
         ((((param_2 & uVar1 ^ ((param_2 & uVar1) + iVar2) * iVar3 ^
            ((param_2 & uVar1) + iVar4) * iVar5) & ~uVar1 ^ param_2) & ~uVar1) +
         *(int *)(param_1 + 0x24)) * *(int *)(param_1 + 0x20)) & uVar1;
}

