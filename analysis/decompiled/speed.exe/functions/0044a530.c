/* speed.exe 0044a530 FUN_0044a530; analysis pseudocode, not buildable source.
 * calls 0065fd30 FUN_0065fd30
 * calls 006616f0 FUN_006616f0
 * calls 00652ad0 _malloc
 * calls 0064abe0 FUN_0064abe0
 * calls 0065f740 FUN_0065f740
 */

void FUN_0044a530(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = FUN_0065f740(param_1);
  iVar4 = FUN_0065fd30(param_1,5,0,0,iVar3);
  *(uint *)(iVar4 + 0x3c) = DAT_0090da20;
  FUN_0064abe0(0,param_1);
  FUN_006616f0(&LAB_00447320,0);
  puVar5 = _malloc(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[3] = DAT_0090da20;
    uVar1 = DAT_0090da24;
    puVar5[2] = iVar4;
    puVar5[4] = uVar1;
  }
  *DAT_0090dae4 = puVar5;
  puVar2 = puVar5;
  puVar5[1] = DAT_0090dae4;
  DAT_0090dae4 = puVar2;
  *puVar5 = &DAT_0090dae0;
  DAT_0090da20 = DAT_0090da20 + iVar3;
  if ((DAT_0090da20 & 0xf) != 0) {
    DAT_0090da20 = DAT_0090da20 + (0x10 - (DAT_0090da20 & 0xf));
  }
  return;
}

