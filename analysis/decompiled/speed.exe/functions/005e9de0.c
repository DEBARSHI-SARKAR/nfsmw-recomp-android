/* speed.exe 005e9de0 FUN_005e9de0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005e9de0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  
  uVar3 = *(uint *)(param_1 + 0xb0);
  puVar6 = (undefined2 *)(-(uint)(uVar3 < uVar3 + *(int *)(param_1 + 0xac) * 0x14) & uVar3);
  iVar7 = DAT_0091e00c;
  do {
    if (puVar6 == (undefined2 *)0x0) {
      return;
    }
    uVar5 = *(uint *)(puVar6 + 2) >> ((byte)*(undefined4 *)(iVar7 + 0x60) & 0x1f);
    uVar4 = 0;
    uVar3 = uVar5;
    do {
      uVar3 = *(uint *)(iVar7 + 0x70) & uVar3;
      if (*(uint *)(*(int *)(iVar7 + 0x78) + uVar3 * 8) == uVar5) {
        iVar2 = *(int *)(*(int *)(iVar7 + 0x78) + 4 + uVar3 * 8);
        if (iVar2 != 0) {
          if ((((byte)*puVar6 >> 1 & 1) == 0) || (((byte)*puVar6 >> 2 & 1) != 0)) {
            if (*(int *)(iVar2 + 0xc0) != 0) {
              pbVar1 = (byte *)(*(int *)(iVar2 + 0xc0) + 2);
              *pbVar1 = *pbVar1 & 0xfe;
              pbVar1 = (byte *)(*(int *)(iVar2 + 0xc0) + 2);
              *pbVar1 = *pbVar1 & 0xfd;
              iVar7 = DAT_0091e00c;
            }
          }
          else if (*(int *)(iVar2 + 0xc0) != 0) {
            pbVar1 = (byte *)(*(int *)(iVar2 + 0xc0) + 2);
            *pbVar1 = *pbVar1 | 1;
            pbVar1 = (byte *)(*(int *)(iVar2 + 0xc0) + 2);
            *pbVar1 = *pbVar1 | 2;
            iVar7 = DAT_0091e00c;
          }
        }
        break;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 <= *(uint *)(iVar7 + 0x74));
    puVar6 = puVar6 + 10;
    if ((undefined2 *)(*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac) * 0x14) <= puVar6) {
      return;
    }
  } while( true );
}

