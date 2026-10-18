/* speed.exe 005c4f60 FUN_005c4f60; analysis pseudocode, not buildable source.
 * calls 005b7780 FUN_005b7780
 * calls 005c4df0 FUN_005c4df0
 * calls 005be6a0 FUN_005be6a0
 */

void __fastcall FUN_005c4f60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  do {
    puVar1 = *(undefined4 **)(param_1 + 0x4128);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x4128) = puVar1[1];
    if (puVar1 == *(undefined4 **)(param_1 + 0x412c)) {
      *(undefined4 *)(param_1 + 0x412c) = puVar1[2];
    }
    if (puVar1[2] != 0) {
      *(undefined4 *)(puVar1[2] + 4) = puVar1[1];
    }
    if (puVar1[1] != 0) {
      *(undefined4 *)(puVar1[1] + 8) = puVar1[2];
    }
    puVar1[1] = 0xabadcafe;
    puVar1[2] = 0xabadcafe;
    *(int *)(param_1 + 0x4124) = *(int *)(param_1 + 0x4124) + -1;
    if (puVar1[7] == 0) {
      for (iVar4 = *(int *)(param_1 + 0xe4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
        if (*(int *)(iVar4 + 0x20) != 0) goto LAB_005c4ffe;
      }
      iVar4 = 0;
LAB_005c4ffe:
      puVar1[7] = iVar4;
      if (iVar4 == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = *(int *)(iVar4 + 0x1c);
        *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(puVar1[7] + 0x20) = 0;
      }
    }
    else {
      iVar6 = *(int *)(puVar1[7] + 0x1c);
    }
    if (((puVar1[5] & 1) != 0) && (-1 < iVar6)) {
      if ((puVar1[5] & 2) == 0) {
        iVar2 = puVar1[7];
        uVar3 = *(undefined4 *)(iVar2 + 0x3c);
        for (iVar4 = *(int *)(param_1 + 0xe0); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
          if (*(int *)(iVar4 + 0x3c) == iVar2) {
            *(undefined4 *)(iVar4 + 0x3c) = uVar3;
          }
        }
      }
      else {
        local_4 = puVar1[7];
        local_8 = *(undefined4 *)(local_4 + 0x3c);
      }
      iVar4 = *(int *)(puVar1[7] + 0x3c);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar4 + 0x24);
      }
      FUN_005be6a0(puVar1[7]);
      iVar6 = iVar6 + -1;
    }
    if ((*(byte *)(puVar1 + 5) & 2) != 0) {
      iVar4 = FUN_005c4df0(puVar1[3],(char)iVar6 + '\x01',puVar1[6]);
      if (iVar4 == 0) {
LAB_005c50a7:
        if ((*(byte *)(puVar1 + 5) & 1) == 0) goto LAB_005c50d1;
      }
      else if ((*(byte *)(puVar1 + 5) & 1) == 0) {
        if (-1 < iVar6) {
          *(undefined4 *)(iVar4 + 0x3c) = puVar1[7];
          goto LAB_005c50d1;
        }
        goto LAB_005c50a7;
      }
      *(undefined4 *)(iVar4 + 0x3c) = local_8;
      for (iVar6 = *(int *)(param_1 + 0xe0); iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
        if (*(int *)(iVar6 + 0x3c) == local_4) {
          *(int *)(iVar6 + 0x3c) = iVar4;
        }
      }
    }
LAB_005c50d1:
    if ((*(byte *)(puVar1 + 5) & 4) != 0) {
      iVar4 = puVar1[7];
      iVar6 = *(int *)(iVar4 + 0x3c);
      if (iVar6 != 0) {
        uVar5 = *(uint *)(iVar4 + 0x20) & puVar1[6];
        *(uint *)(iVar4 + 0x20) = ~uVar5 & *(uint *)(iVar4 + 0x20);
        *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) | uVar5;
        FUN_005b7780(0x334c5493,0,iVar6,0xfffffffc,puVar1[6]);
      }
    }
    if (((*(byte *)(puVar1 + 5) & 8) == 0) || (iVar4 = *(int *)(param_1 + 0xe0), iVar4 == 0)) {
LAB_005c5166:
      (**(code **)*puVar1)(1);
    }
    else {
      iVar6 = puVar1[7];
      do {
        if (*(int *)(iVar4 + 0x3c) == iVar6) {
          uVar5 = *(uint *)(iVar6 + 0x20) & puVar1[6];
          *(uint *)(iVar6 + 0x20) = ~uVar5 & *(uint *)(iVar6 + 0x20);
          *(uint *)(iVar4 + 0x20) = *(uint *)(iVar4 + 0x20) | uVar5;
          FUN_005b7780(0x334c5493,0,iVar4,0xfffffffc,puVar1[6]);
          goto LAB_005c5166;
        }
        iVar4 = *(int *)(iVar4 + 4);
      } while (iVar4 != 0);
      (**(code **)*puVar1)(1);
    }
  } while( true );
}

