/* speed.exe 008349fa FUN_008349fa; analysis pseudocode, not buildable source.
 */

undefined4 FUN_008349fa(int param_1,int param_2,int *param_3,int *param_4)

{
  undefined1 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  if (param_2 < (int)(uint)*(byte *)(param_1 + 5)) {
    iVar4 = (*(byte *)(param_1 + 4) & 0x7f) + 2;
    puVar1 = (undefined1 *)(iVar4 * param_2 + 0xc + param_1);
    iVar5 = (*(byte *)(param_1 + 7) + 1) * 0x100;
    iVar6 = (uint)CONCAT11(*puVar1,puVar1[1]) * iVar5;
    if (param_2 + 1 < (int)(uint)*(byte *)(param_1 + 5)) {
      uVar2 = CONCAT11(puVar1[iVar4],(puVar1 + iVar4)[1]);
    }
    else {
      uVar2 = *(ushort *)(param_1 + 8);
    }
    *param_3 = iVar6;
    *param_4 = (uint)uVar2 * iVar5 - iVar6;
    uVar3 = 1;
  }
  return uVar3;
}

