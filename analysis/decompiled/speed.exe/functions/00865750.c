/* speed.exe 00865750 FUN_00865750; analysis pseudocode, not buildable source.
 * calls 00866cc0 GetTickCount
 * calls 00866d30 FUN_00866d30
 * calls 00866a80 FUN_00866a80
 * calls 008651e0 FUN_008651e0
 * calls 00866d10 FUN_00866d10
 */

int FUN_00865750(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*param_1 == 0) {
    iVar1 = FUN_00866a80(param_6);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      return -1;
    }
    param_1[0xf] = param_6;
  }
  if (param_6 != param_1[0xf]) {
    return -2;
  }
  uVar2 = FUN_00866d30(param_4);
  uVar3 = FUN_00866d10(param_5);
  puVar4 = (undefined4 *)FUN_008651e0(param_1,param_2,param_3);
  if (puVar4 == (undefined4 *)0x0) {
    return -3;
  }
  iVar1 = param_1[5];
  puVar7 = puVar4;
  for (iVar6 = 0x117; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *puVar4 = uVar2;
  puVar4[1] = uVar3 & 0xffff;
  puVar4[9] = 0;
  puVar4[10] = 1;
  DVar5 = GetTickCount();
  puVar4[0x111] = DVar5;
  puVar4[4] = *param_3;
  puVar4[5] = param_3[1];
  puVar4[6] = param_3[2];
  puVar4[7] = param_3[3];
  puVar4[8] = param_3[4];
  puVar4[0xc] = DAT_0090d504;
  return ((int)puVar4 - iVar1) / 0x45c;
}

