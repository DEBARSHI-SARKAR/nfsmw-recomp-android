/* speed.exe 004a3060 FUN_004a3060; analysis pseudocode, not buildable source.
 * calls 00494b10 FUN_00494b10
 */

void __thiscall FUN_004a3060(int param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  *param_2 = param_1 + 0x12;
  *param_3 = param_1 + 0x12 + (uint)*(byte *)(param_1 + 6) * 0xc;
  uVar4 = 1 << (*(byte *)(param_1 + 0x10) & 0x1f);
  uVar3 = (uint)*(ushort *)(param_1 + 4) % uVar4;
  iVar2 = ((uVar4 + 1) * (uint)*(byte *)(param_1 + 6) * 3 + 1 & 0xfffffffe) *
          (*(ushort *)(param_1 + 4) / uVar4) + param_1 + 0x12 + (uint)*(byte *)(param_1 + 6) * 0xc;
  if (0 < (int)uVar3) {
    iVar2 = iVar2 + (uVar3 + 1) * (uint)*(byte *)(param_1 + 6) * 3;
  }
  *param_4 = iVar2;
  uVar1 = FUN_00494b10();
  *param_5 = uVar1;
  return;
}

