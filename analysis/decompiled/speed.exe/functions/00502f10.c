/* speed.exe 00502f10 FUN_00502f10; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_00502f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  if (0 < param_5) {
    iVar3 = 0;
    do {
      iVar1 = param_1[3];
      *(int *)(iVar1 + iVar3 + 0x28) = param_4;
      param_4 = param_4 + *(int *)(iVar1 + iVar3 + 0x1c) * 0x10;
      iVar3 = iVar3 + 0x34;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *DAT_0091c164 = param_1;
  puVar2 = param_1;
  param_1[1] = DAT_0091c164;
  DAT_0091c164 = puVar2;
  *param_1 = &DAT_0091c160;
  return;
}

