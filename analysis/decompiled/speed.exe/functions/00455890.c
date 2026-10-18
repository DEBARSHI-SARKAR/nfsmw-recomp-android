/* speed.exe 00455890 FUN_00455890; analysis pseudocode, not buildable source.
 * calls 00451490 FUN_00451490
 */

void __thiscall FUN_00455890(int *param_1,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte bVar8;
  undefined4 *puVar9;
  uint local_4;
  
  puVar3 = param_2;
  uVar7 = 0;
  bVar8 = *(byte *)((int)param_2 + 0xb) >> 4 & 1;
  local_4 = 0;
  if ((bVar8 != 0) || ((uint *)param_2[1] != param_2)) {
    uVar7 = *param_2;
  }
  bVar2 = (byte)*(undefined2 *)((int)param_1 + 0xe);
  uVar7 = (uVar7 >> (0x20 - bVar2 & 0x1f) | uVar7 << (bVar2 & 0x1f)) % (uint)param_1[1];
  if ((bVar8 == 0) && ((uint *)param_2[1] == param_2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *param_2;
  }
  iVar5 = FUN_00451490(uVar4,uVar7,&local_4);
  puVar1 = (uint *)(*param_1 + iVar5 * 0xc);
  *puVar1 = *puVar3;
  *(short *)(puVar1 + 2) = (short)puVar3[2];
  puVar1[1] = puVar3[1];
  *(undefined1 *)((int)puVar1 + 0xb) = *(undefined1 *)((int)puVar3 + 0xb);
  puVar3[1] = (uint)puVar3;
  *(undefined1 *)((int)puVar3 + 0xb) = 0;
  *puVar3 = 0;
  iVar5 = *param_1 + uVar7 * 0xc;
  puVar6 = (undefined4 *)(iVar5 + 10);
  param_2 = (uint *)CONCAT31(param_2._1_3_,(byte)local_4);
  puVar9 = &param_2;
  if ((byte)local_4 <= *(byte *)(iVar5 + 10)) {
    puVar9 = puVar6;
  }
  *(undefined1 *)puVar6 = *(undefined1 *)puVar9;
  if (*(ushort *)(param_1 + 3) < local_4) {
    *(short *)(param_1 + 3) = (short)local_4;
  }
  param_1[2] = param_1[2] + 1;
  return;
}

