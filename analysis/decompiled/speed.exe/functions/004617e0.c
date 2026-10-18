/* speed.exe 004617e0 FUN_004617e0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00460bf0 FUN_00460bf0
 * calls 007ec1bd FUN_007ec1bd
 */

void __thiscall FUN_004617e0(int *param_1,int param_2)

{
  ushort *puVar1;
  char *pcVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if (param_2 != 0) {
    iVar4 = param_2 - param_1[2] >> 3;
    if ((iVar4 < 0) || (*param_1 <= iVar4)) {
      iVar4 = -1;
    }
    if ((short)iVar4 != -1) {
      puVar7 = (ushort *)(param_1[2] + (short)iVar4 * 8);
      FUN_007ec1bd();
      puVar7[2] = puVar7[2] - 1;
      if (puVar7[2] == 0) {
        uVar5 = FUN_00460bf0(param_2);
        uVar5 = uVar5 & 0x7ff;
        if ((ushort *)param_1[uVar5 + 0xf] == puVar7) {
          param_1[uVar5 + 0xf] = 0;
        }
        pcVar2 = (char *)(uVar5 + 0x203c + (int)param_1);
        *pcVar2 = *pcVar2 + -1;
        uVar3 = *puVar7;
        *(undefined1 *)(puVar7 + 3) = 0;
        param_1[0xd] = param_1[0xd] + -1;
        param_1[0xb] = param_1[0xb] + (uint)uVar3 * -8;
        puVar6 = puVar7 + (uint)*puVar7 * 4;
        if ((puVar6 != (ushort *)(param_1[2] + *param_1 * 8)) && (puVar6[2] == 0)) {
          *puVar7 = *puVar6 + *puVar7;
          puVar6 = puVar6 + (uint)*puVar6 * 4;
          if (puVar6 != (ushort *)(param_1[2] + *param_1 * 8)) {
            puVar6[1] = (ushort)((int)puVar6 - (int)puVar7 >> 3);
          }
        }
        puVar6 = puVar7 + (uint)puVar7[1] * -4;
        if ((puVar7 != (ushort *)param_1[2]) && (puVar6[2] == 0)) {
          *puVar6 = *puVar6 + *puVar7;
          puVar1 = puVar7 + (uint)*puVar7 * 4;
          puVar7 = puVar6;
          if (puVar1 != (ushort *)(param_1[2] + *param_1 * 8)) {
            puVar1[1] = (ushort)((int)puVar1 - (int)puVar6 >> 3);
          }
        }
        if (*(ushort *)param_1[0xa0f] < *puVar7) {
          param_1[0xa0f] = (int)puVar7;
        }
      }
      FUN_007ec1c8();
    }
  }
  return;
}

