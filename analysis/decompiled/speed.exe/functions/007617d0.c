/* speed.exe 007617d0 FUN_007617d0; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 007a15d0 FUN_007a15d0
 * calls 00761700 FUN_00761700
 * calls 007c4b80 FUN_007c4b80
 * calls 00735b60 FUN_00735b60
 * calls 0056e340 FUN_0056e340
 * calls 00627860 FUN_00627860
 * calls 0078b2c0 FUN_0078b2c0
 */

void __fastcall FUN_007617d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if ((DAT_009b4174 == 0) || (*param_1 == 1)) {
    iVar2 = *param_1;
    if ((iVar2 != 1) && (*param_1 = 1, iVar2 == 5)) {
      FUN_0078b2c0();
      uVar1 = FUN_007c4b80();
      FUN_00627860(uVar1);
    }
    bVar5 = DAT_009b416c != 0;
    uVar1 = FUN_0056e340();
    FUN_00761700(0,0,bVar5,uVar1);
    if ((DAT_00926064 == 0) && (DAT_009b416c != 0)) {
      FUN_00735b60();
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
    iVar2 = FUN_0045ce40();
    param_1[0xc] = iVar2;
    param_1[0xd] = 0;
    iVar2 = FUN_0078b2c0();
    param_1[8] = iVar2;
    iVar3 = FUN_0078b2c0();
    iVar2 = param_1[8];
    iVar4 = FUN_0078b2c0();
    param_1[10] = (iVar3 - iVar2) - iVar4;
    iVar2 = FUN_0078b2c0();
    param_1[7] = iVar2;
    param_1[0x42] = 0;
    FUN_007a15d0();
    iVar2 = *param_1;
    *(undefined1 *)((int)param_1 + 0x19) = 1;
    if ((iVar2 != 2) && (*param_1 = 2, iVar2 == 5)) {
      FUN_0078b2c0();
      uVar1 = FUN_007c4b80();
      FUN_00627860(uVar1);
    }
  }
  return;
}

