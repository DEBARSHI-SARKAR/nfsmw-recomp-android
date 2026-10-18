/* speed.exe 00572210 FUN_00572210; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 * calls 00460d20 FUN_00460d20
 * calls 0056bb30 FUN_0056bb30
 */

void FUN_00572210(short *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short local_108 [64];
  undefined1 local_88 [132];
  
  if (*param_1 == 0x24) {
    param_1 = param_1 + 1;
    psVar4 = local_108;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      psVar4[0] = 0;
      psVar4[1] = 0;
      psVar4 = psVar4 + 2;
    }
    sVar1 = *param_1;
    uVar3 = 0;
    if (sVar1 != 0x24) {
      iVar2 = (int)local_108 - (int)param_1;
      do {
        if ((sVar1 == 0) || (0x7f < uVar3)) break;
        *(short *)(iVar2 + (int)param_1) = sVar1;
        param_1 = param_1 + 1;
        sVar1 = *param_1;
        uVar3 = uVar3 + 2;
      } while (sVar1 != 0x24);
    }
    FUN_0056bb30(local_88,0x80,local_108);
    FUN_00460d20(local_88,"ICON_SPACER");
  }
  FUN_00503400(0,1,0);
  return;
}

