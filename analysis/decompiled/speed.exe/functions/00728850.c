/* speed.exe 00728850 FUN_00728850; analysis pseudocode, not buildable source.
 * calls 0045ecf0 FUN_0045ecf0
 * calls 004450c0 FUN_004450c0
 * calls 006beeb0 FUN_006beeb0
 * calls 00722c40 FUN_00722c40
 */

void __thiscall FUN_00728850(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_90 [48];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50 [19];
  
  iVar2 = *(short *)(param_1 + 2) * 0x40;
  uVar1 = *(uint *)(iVar2 + 0x18 + *(int *)(param_2 + 0x20));
  iVar2 = iVar2 + *(int *)(param_2 + 0x20);
  if (((uVar1 & 0x800000) != 0) && (((*(ushort *)(param_1 + 4) ^ uVar1) & 0x400) != 0)) {
    FUN_006beeb0(local_90);
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0x3f800000;
    FUN_004450c0(local_50);
    local_50[0] = 0xbf800000;
    FUN_0045ecf0(local_90,local_90,local_50);
    local_60 = *(undefined4 *)(iVar2 + 0x20);
    local_5c = *(undefined4 *)(iVar2 + 0x24);
    local_58 = *(undefined4 *)(iVar2 + 0x28);
    local_54 = 0x3f800000;
    FUN_00722c40(local_90);
  }
  *(uint *)(iVar2 + 0x18) = (uint)*(ushort *)(param_1 + 4) + (*(uint *)(iVar2 + 0x18) & 0xffff0000);
  return;
}

