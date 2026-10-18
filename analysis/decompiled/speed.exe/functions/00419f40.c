/* speed.exe 00419f40 FUN_00419f40; analysis pseudocode, not buildable source.
 * calls 00627320 FUN_00627320
 * calls 0076dd30 FUN_0076dd30
 * calls 006ed200 FUN_006ed200
 * calls 0076dcd0 FUN_0076dcd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00419f40(short *param_1,undefined1 *param_2,float *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *param_1 * 0x16 + DAT_009b38c0;
  FUN_006ed200();
  iVar2 = FUN_00627320();
  *param_3 = (float)iVar2 * _DAT_00890980;
  uVar3 = FUN_0076dd30(iVar5);
  uVar4 = 1;
  if (0 < (int)uVar3) {
    uVar4 = uVar3;
  }
  uVar4 = DAT_0090d978 % uVar4;
  DAT_0090d978 = DAT_0090d978 + 1;
  uVar1 = FUN_0076dcd0(iVar5,uVar4);
  *param_2 = uVar1;
  return 1;
}

