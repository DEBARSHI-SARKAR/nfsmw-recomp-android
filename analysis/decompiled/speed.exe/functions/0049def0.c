/* speed.exe 0049def0 FUN_0049def0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0049def0(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined2 *puVar7;
  int local_4;
  
  iVar3 = param_3;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar4 = 0;
  bVar6 = 0;
  local_4 = 0;
  if (*(char *)(iVar1 + 8) != '\0') {
    puVar7 = (undefined2 *)(iVar1 + 10);
    do {
      bVar2 = (byte)((ushort)*puVar7 >> 8);
      bVar5 = bVar2 >> 3 & 3;
      switch(bVar2 >> 5) {
      case 0:
        bVar6 = bVar6 + 1;
        uVar4 = (byte)((byte)*param_2 >> (8 - bVar6 & 0x1f)) & 1;
        break;
      case 1:
        bVar6 = bVar6 + 2;
        uVar4 = (byte)((byte)*param_2 >> (8 - bVar6 & 0x1f)) & 3;
        break;
      case 2:
        bVar6 = bVar6 + 4;
        uVar4 = (byte)((byte)*param_2 >> (8 - bVar6 & 0x1f)) & 0xf;
        break;
      case 3:
        uVar4 = (uint)(byte)*param_2;
        param_2 = (uint *)((int)param_2 + 1);
        break;
      case 4:
        uVar4 = (uint)(ushort)*param_2;
        param_2 = (uint *)((int)param_2 + 2);
        break;
      case 5:
        uVar4 = *param_2;
        param_2 = param_2 + 1;
      }
      if (7 < bVar6) {
        param_2 = (uint *)((int)param_2 + 1);
        bVar6 = 0;
      }
      param_3._0_1_ = (byte)*puVar7;
      if (bVar5 == 0) {
        *(char *)((uint)(byte)param_3 + iVar3) = (char)uVar4;
      }
      else if (bVar5 == 1) {
        *(short *)((uint)(byte)param_3 + iVar3) = (short)uVar4;
      }
      else if (bVar5 == 3) {
        *(uint *)((uint)(byte)param_3 + iVar3) = uVar4;
      }
      local_4 = local_4 + 1;
      puVar7 = puVar7 + 1;
    } while (local_4 < (int)(uint)*(byte *)(iVar1 + 8));
  }
  return;
}

