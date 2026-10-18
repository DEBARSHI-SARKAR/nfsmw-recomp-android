/* speed.exe 005ab900 FUN_005ab900; analysis pseudocode, not buildable source.
 * calls 0058fea0 FUN_0058fea0
 * calls 0045ca60 FUN_0045ca60
 * calls 005ab450 FUN_005ab450
 * calls 0057fb50 FUN_0057fb50
 * calls 00465a70 FUN_00465a70
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_005ab900(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *param_1 = 1;
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_005ab450(0,1);
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  if ((DAT_00926064 != 0) && (DAT_0092607c != 0)) {
    *(undefined4 *)(param_1 + 300) = 4;
    *param_1 = 2;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0xff;
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar2 = FUN_0057fb50();
  FUN_0058fea0();
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa8) = uVar2;
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    puVar3 = (undefined4 *)FUN_00465a70(0x8cc8,0x40);
    puVar5 = (undefined4 *)(iVar1 + 0x414);
    puVar6 = puVar3;
    for (iVar4 = 0x2332; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar2 = FUN_0045ca60(puVar3,0x8cc8,0xffffffff);
    *(undefined4 *)(param_1 + 8) = uVar2;
    FUN_004655f0(puVar3);
  }
  return;
}

