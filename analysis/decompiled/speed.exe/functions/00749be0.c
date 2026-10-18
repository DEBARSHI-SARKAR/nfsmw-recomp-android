/* speed.exe 00749be0 FUN_00749be0; analysis pseudocode, not buildable source.
 * calls 00749be0 FUN_00749be0
 * calls 0073b9c0 FUN_0073b9c0
 */

void __thiscall
FUN_00749be0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_3 * 0x10 + 8 + param_2;
  iVar2 = *(int *)(iVar1 + 8);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
    FUN_0073b9c0(iVar2,param_4,param_5,param_6,param_7);
  }
  uVar3 = 0;
  if (*(char *)(iVar1 + 0xe) != '\0') {
    do {
      if (((*(int *)(param_1 + 0x14) != param_3) ||
          ((*(uint *)(param_1 + 0x18) & 1 << ((byte)uVar3 & 0x1f)) != 0)) &&
         (iVar2 = *(byte *)(iVar1 + 0xf) + uVar3,
         (*(byte *)(iVar2 * 0x10 + 0x14 + param_2) & 1) == 0)) {
        FUN_00749be0(param_2,iVar2,param_4,param_5,param_6,param_7);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(iVar1 + 0xe));
  }
  return;
}

