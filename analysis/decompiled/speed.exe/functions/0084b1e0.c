/* speed.exe 0084b1e0 FUN_0084b1e0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084a840 FUN_0084a840
 * calls 00862116 Ordinal_111
 * calls 00862194 Ordinal_16
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 * calls 0086219a Ordinal_17
 * calls 0086216a WSASetEvent
 */

undefined4
FUN_0084b1e0(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  DWORD DVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 0xc) == 2) || (*(int *)(param_1 + 0xc) == 3)) {
    FUN_0084bd60(param_1 + 100);
    if (*(char *)(param_1 + 0xa8) == '\0') {
      uVar4 = *(uint *)(param_1 + 0x98);
      if ((uVar4 != 0) && (0 < (int)param_3)) {
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = *(undefined4 *)(param_1 + 0x88);
          param_5[1] = *(undefined4 *)(param_1 + 0x8c);
          param_5[2] = *(undefined4 *)(param_1 + 0x90);
          param_5[3] = *(undefined4 *)(param_1 + 0x94);
          *param_6 = 0x10;
        }
        if (0 < (int)uVar4) {
          if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          puVar5 = (undefined4 *)(param_1 + 0xa9);
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *param_2 = *puVar5;
            puVar5 = puVar5 + 1;
            param_2 = param_2 + 1;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)param_2 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            param_2 = (undefined4 *)((int)param_2 + 1);
          }
          *(undefined4 *)(param_1 + 0x9c) = 0;
        }
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      uVar2 = DAT_009c3710;
      if (*(int *)(param_1 + 0x9c) != 0x3e5) {
        *(undefined4 *)(param_1 + 0x9c) = 0;
        WSASetEvent(uVar2);
      }
    }
    FUN_0084bdf0(param_1 + 100);
  }
  else {
    if (param_5 == (undefined4 *)0x0) {
      uVar4 = Ordinal_16(*(undefined4 *)(param_1 + 0x18),param_2,param_3,0);
    }
    else {
      uVar4 = Ordinal_17(*(undefined4 *)(param_1 + 0x18),param_2,param_3,0,param_5,param_6);
      if (0 < (int)uVar4) {
        DVar1 = GetTickCount();
        *(char *)((int)param_5 + 0xb) = (char)DVar1;
        *(char *)((int)param_5 + 10) = (char)(DVar1 >> 8);
        *(char *)((int)param_5 + 9) = (char)(DVar1 >> 0x10);
        *(char *)(param_5 + 2) = (char)(DVar1 >> 0x18);
        Ordinal_111();
        goto LAB_0084b32b;
      }
    }
    Ordinal_111();
  }
LAB_0084b32b:
  if (uVar4 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_0084a840();
  return uVar2;
}

