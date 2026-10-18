/* speed.exe 00537d60 FUN_00537d60; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00573140 FUN_00573140
 * calls 005868e0 FUN_005868e0
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005a5790 FUN_005a5790
 * calls 005b8400 FUN_005b8400
 * calls 0051dcf0 FUN_0051dcf0
 * calls 005b1360 FUN_005b1360
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_00537d60(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar2 = _malloc(0x44);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar2 + 3;
    *puVar1 = puVar1;
    puVar2[4] = puVar1;
    *(undefined1 *)(puVar2 + 5) = 1;
    *puVar2 = &PTR_FUN_0089dd2c;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0x29) = 0;
    puVar2[0xf] = 0xffffffff;
    *(undefined1 *)(puVar2 + 0x10) = 0;
    *(undefined1 *)((int)puVar2 + 0x2a) = 0;
  }
  FUN_0051dcf0(&DAT_00890978,0);
  FUN_00515e20((int)puVar2 + 0x2a,0x10,&DAT_00890978);
  FUN_005868e0(puVar2);
  FUN_005a5790(puVar2);
  iVar4 = *(int *)(param_1 + 0x10);
  param_2 = param_2 + 1;
  uVar3 = FUN_00573140("READY_INDICATOR_%d",param_2);
  if (iVar4 != 0) {
    iVar4 = FUN_00516af0(iVar4);
    if (iVar4 != 0) {
      iVar4 = FUN_005b8550(uVar3);
      if (iVar4 != 0) {
        iVar4 = FUN_005b1360(0x16a259);
        if (iVar4 != 0) {
          FUN_005b8400(iVar4,0);
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x10);
  uVar3 = FUN_00573140("STATUS_%d",param_2);
  if (iVar4 != 0) {
    iVar4 = FUN_00516af0(iVar4);
    if (iVar4 != 0) {
      iVar4 = FUN_005b8550(uVar3);
      if (iVar4 != 0) {
        iVar4 = FUN_005b1360(0x16a259);
        if (iVar4 != 0) {
          FUN_005b8400(iVar4,0);
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x10);
  uVar3 = FUN_00573140("HIGH_LIGHT_%d",param_2);
  if (iVar4 != 0) {
    iVar4 = FUN_00516af0(iVar4);
    if (iVar4 != 0) {
      iVar4 = FUN_005b8550(uVar3);
      if (iVar4 != 0) {
        iVar4 = FUN_005b1360(0x7ab5521a);
        if (iVar4 != 0) {
          FUN_005b8400(iVar4,0);
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x10);
  uVar3 = FUN_00573140("SCROLL_TEXT_%d",param_2);
  if (iVar4 != 0) {
    iVar4 = FUN_00516af0(iVar4);
    if (iVar4 != 0) {
      iVar4 = FUN_005b8550(uVar3);
      if (iVar4 != 0) {
        iVar4 = FUN_005b1360(0x16a259);
        if (iVar4 != 0) {
          FUN_005b8400(iVar4,0);
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
    }
  }
  return;
}

