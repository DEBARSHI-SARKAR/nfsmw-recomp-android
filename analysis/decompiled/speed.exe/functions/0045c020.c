/* speed.exe 0045c020 FUN_0045c020; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0045c020(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      if (param_1[2] == 0) break;
      iVar1 = *(int *)(*param_1 + 4 + iVar3);
      iVar2 = *param_1 + iVar3;
      if (iVar1 != iVar2) {
        if ((iVar1 != iVar2) && (iVar1 != 0)) {
          FUN_0045a0c0();
          DAT_0090dcd4 = DAT_0090dcd4 - 0x2c;
          if (DAT_0090dcd0 < DAT_0090dcd4) {
            DAT_0090dcd0 = DAT_0090dcd4;
          }
          (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x2c,0);
        }
        param_1[2] = param_1[2] + -1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar4 < (uint)param_1[1]);
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(*param_1,param_1[1] * 0xc,0);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = param_1[3] & 1;
    return;
  }
  param_1[2] = 0;
  param_1[3] = param_1[3] & 1;
  return;
}

