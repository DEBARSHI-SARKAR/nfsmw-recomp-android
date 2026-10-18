/* speed.exe 00827acf FUN_00827acf; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00827acf(int param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(&DAT_0090c930 + param_1 * 4);
  param_2[2] = param_2[2] - param_1;
  uVar3 = param_2[1];
  uVar5 = uVar3 >> ((byte)param_1 & 0x1f);
  iVar4 = param_2[2];
  param_2[1] = uVar5;
  if (iVar4 < 8) {
    bVar1 = *(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    param_2[1] = (uint)bVar1 << ((byte)iVar4 & 0x1f) | uVar5;
    param_2[2] = iVar4 + 8;
  }
  return uVar2 & uVar3;
}

