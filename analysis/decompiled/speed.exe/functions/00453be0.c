/* speed.exe 00453be0 FUN_00453be0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00453be0(int *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  uint local_10;
  
  if ((param_2 == param_3) && (param_2 = param_3, *(char *)(*param_1 + 10 + param_3 * 0xc) == '\0'))
  {
    uVar7 = (uint)*(ushort *)(param_1 + 3);
    uVar6 = param_1[1];
    param_2 = ((uVar6 - uVar7) + param_3) % uVar6;
    if (*(byte *)(*param_1 + 10 + param_2 * 0xc) < uVar7) {
      do {
        bVar11 = true;
        if (uVar7 == 0) goto LAB_00453ccf;
        param_2 = (param_2 + 1) % uVar6;
        uVar7 = uVar7 - 1;
      } while (*(byte *)(*param_1 + 10 + param_2 * 0xc) < uVar7);
    }
    bVar11 = uVar7 == 0;
LAB_00453ccf:
    if (bVar11) {
      return 0xffffffff;
    }
  }
  iVar5 = *param_1;
  uVar6 = (uint)*(byte *)(iVar5 + 10 + param_2 * 0xc);
  uVar7 = (uVar6 + param_2) % (uint)param_1[1];
  puVar1 = (undefined4 *)(iVar5 + uVar7 * 0xc);
  if (param_3 != uVar7) {
    puVar2 = (undefined4 *)(iVar5 + param_3 * 0xc);
    *puVar2 = *puVar1;
    *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(puVar1 + 2);
    puVar2[1] = puVar1[1];
    *(undefined1 *)((int)puVar2 + 0xb) = *(undefined1 *)((int)puVar1 + 0xb);
    puVar1[1] = puVar1;
    *(undefined1 *)((int)puVar1 + 0xb) = 0;
    *puVar1 = 0;
  }
  uVar10 = 1;
  local_10 = 0;
  uVar8 = 0;
  if (1 < uVar6) {
    do {
      puVar3 = (uint *)(*param_1 + ((uVar10 + param_2) % (uint)param_1[1]) * 0xc);
      if (((*(byte *)((int)puVar3 + 0xb) & 0x10) == 0) && ((uint *)puVar3[1] == puVar3)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar3;
      }
      if ((uVar8 >> (0x20U - (char)*(undefined2 *)((int)param_1 + 0xe) & 0x1f) |
          uVar8 << ((byte)*(undefined2 *)((int)param_1 + 0xe) & 0x1f)) % (uint)param_1[1] == param_2
         ) {
        local_10 = uVar10;
      }
      uVar10 = uVar10 + 1;
      uVar8 = local_10;
    } while (uVar10 < uVar6);
  }
  *(char *)(*param_1 + 10 + param_2 * 0xc) = (char)uVar8;
  uVar4 = *(ushort *)(param_1 + 3);
  if (((uVar6 == uVar4) && (*(byte *)(*param_1 + 10 + param_3 * 0xc) < uVar4)) && (uVar8 < uVar6)) {
    uVar6 = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    if (param_1[1] != 0) {
      pbVar9 = (byte *)(*param_1 + 10);
      do {
        if ((uint)uVar4 <= (uint)*(ushort *)(param_1 + 3)) {
          return uVar7;
        }
        if (*(ushort *)(param_1 + 3) < (ushort)*pbVar9) {
          *(ushort *)(param_1 + 3) = (ushort)*pbVar9;
        }
        uVar6 = uVar6 + 1;
        pbVar9 = pbVar9 + 0xc;
      } while (uVar6 < (uint)param_1[1]);
    }
  }
  return uVar7;
}

