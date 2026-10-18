/* speed.exe 00465de0 FUN_00465de0; analysis pseudocode, not buildable source.
 * calls 00465d80 FUN_00465d80
 */

void __thiscall FUN_00465de0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00465d80(*(undefined4 *)(param_1 + 0x28),param_2,*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = param_1;
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    iVar3 = *(int *)(iVar1 + 8);
  }
  *(int *)(iVar1 + 8) = iVar2;
  iVar3 = (param_2 + -1) * *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar2 + 0x30 + ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) * 4) =
       *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_2;
  return;
}

