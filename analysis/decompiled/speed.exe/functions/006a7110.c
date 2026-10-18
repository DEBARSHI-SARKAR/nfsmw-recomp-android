/* speed.exe 006a7110 FUN_006a7110; analysis pseudocode, not buildable source.
 * calls 004048c0 FUN_004048c0
 * calls 004876f0 FUN_004876f0
 * calls 00772da0 FUN_00772da0
 * calls 0068b8b0 FUN_0068b8b0
 * calls 00487690 FUN_00487690
 */

void __thiscall FUN_006a7110(int param_1,float param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [264];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 0x50);
  if ((iVar1 != 0) &&
     (local_128 = (*(int *)(*(int *)(param_1 + 0xec) + 0x54) - iVar1) / 0x28, local_128 != 0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    FUN_004048c0();
    FUN_00487690();
    iVar3 = *(int *)(param_1 + 0xec) + 0x4c;
    if (1 < *(uint *)(param_1 + 0x11c)) {
      local_120 = *(float *)(iVar1 + 0x20) * param_2;
      local_11c = *(float *)(iVar1 + 0x24) * param_2;
      local_118 = *(float *)(iVar1 + 0x28) * param_2;
      local_114 = *(undefined4 *)(param_1 + 0x118);
      local_110 = local_114;
      local_10c = local_114;
      FUN_004876f0(iVar1 + 0x70,iVar1 + 0x10,&local_114,2,&local_120);
      local_128 = *(uint *)(param_1 + 0x104);
      cVar2 = FUN_00772da0(local_108,iVar3,0,0,0);
      if (cVar2 == '\0') {
        return;
      }
    }
    piVar4 = *(int **)(param_1 + 0x110);
    if (piVar4 != (int *)(param_1 + 0x110)) {
      do {
        if ((((piVar4[0x11] & 1U) != 0) && ((piVar4[0x11] & 8U) == 0)) &&
           (cVar2 = FUN_0068b8b0(iVar1,local_108), cVar2 != '\0')) {
          local_120 = *(float *)(param_1 + 0x104);
          local_128 = CONCAT31(local_128._1_3_,(char)((uint)piVar4[0x11] >> 4)) & 0xffffff01;
          local_11c = 4.2039e-45;
          FUN_00772da0(local_108,iVar3,param_1 + 100,piVar4,local_128);
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)(param_1 + 0x110));
    }
  }
  return;
}

