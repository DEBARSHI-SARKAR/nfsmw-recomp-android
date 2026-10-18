/* speed.exe 00826bc5 FUN_00826bc5; analysis pseudocode, not buildable source.
 * calls 00828976 FUN_00828976
 * calls 00822050 FUN_00822050
 */

undefined4 FUN_00826bc5(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x1c)) {
    iVar2 = FUN_00828976(&param_4,param_2);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar2;
    param_4 = param_4 + iVar2 * 4;
    if (iVar2 < param_2) {
      FUN_00822050(param_4,(param_2 - iVar2) * 4);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

