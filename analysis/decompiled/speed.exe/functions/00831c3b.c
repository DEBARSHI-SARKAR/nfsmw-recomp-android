/* speed.exe 00831c3b FUN_00831c3b; analysis pseudocode, not buildable source.
 * calls 00831c0c FUN_00831c0c
 */

undefined4 FUN_00831c3b(int param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 10);
  uVar4 = 0;
  if ((bVar1 & 0x10) != 0) {
    uVar4 = 1;
    iVar2 = FUN_00831c0c(param_1);
    pbVar3 = (byte *)(iVar2 + (((*(byte *)(param_1 + 8) >> 4) + 1) * 3 & 0xfffffffc));
    if ((bVar1 & 8) != 0) {
      pbVar3 = pbVar3 + ((uint)*(byte *)(param_1 + 6) * 2 + 7 & 0xfffffffc);
    }
    *param_2 = (uint)*pbVar3;
    param_2[1] = (uint)(pbVar3 + 2);
  }
  return uVar4;
}

