/* speed.exe 006c5e60 FUN_006c5e60; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006c5e60(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x1dc);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x68))(*(int **)(param_1 + 0x48),iVar1,1);
  }
  if (*(int *)(*(int *)(param_1 + 0x44) + 0x9c) != 0) {
    _DAT_0093de20 = 0;
    _DAT_0093de24 = 0;
    _DAT_0093de28 = 0;
    _DAT_0093de2c = 5;
    _DAT_0093de30 = 6;
    (**(code **)(**(int **)(param_1 + 0x48) + 0x70))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x9c),
               &DAT_0093de20,5);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xec);
  if (iVar1 != 0) {
    if (((DAT_00901818 < 2) || (DAT_00901818 != 2)) || ((DAT_0093d958 & 0x400) == 0)) {
      cVar2 = '\x02';
    }
    else {
      cVar2 = (DAT_0093d898 != 0x102b) + '\x02';
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 0x68))(*(int **)(param_1 + 0x48),iVar1,cVar2);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xc4);
  if (iVar1 != 0) {
    if (((DAT_00901818 < 2) || (DAT_00901818 != 2)) || ((DAT_0093d958 & 0x4000000) == 0)) {
      cVar2 = '\x02';
    }
    else {
      cVar2 = (DAT_0093d898 != 0x102b) + '\x02';
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 0x68))(*(int **)(param_1 + 0x48),iVar1,cVar2);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x114);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x68))
              (*(int **)(param_1 + 0x48),iVar1,(DAT_00901818 != 0) + '\x01');
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x614);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x68))(*(int **)(param_1 + 0x48),iVar1,1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x13c);
  if (iVar1 != 0) {
    uVar3 = DAT_0093d984;
    if (DAT_00901818 != 2) {
      uVar3 = 1;
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 0x68))(*(int **)(param_1 + 0x48),iVar1,uVar3);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x484);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x68))(*(int **)(param_1 + 0x48),iVar1,0xf);
  }
  if (*(int *)(param_1 + 4) == 0xb) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x68))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x18c),0xf);
  }
  return;
}

