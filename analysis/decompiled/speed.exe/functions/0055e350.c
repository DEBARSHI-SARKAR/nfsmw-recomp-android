/* speed.exe 0055e350 FUN_0055e350; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00586ca0 FUN_00586ca0
 * calls 005b8550 FUN_005b8550
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 00586760 FUN_00586760
 * calls 005110d0 FUN_005110d0
 * calls 005a8cb0 FUN_005a8cb0
 * calls 005566e0 FUN_005566e0
 * calls 005926b0 FUN_005926b0
 * calls 005a8c50 FUN_005a8c50
 * calls 005af1c0 FUN_005af1c0
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_0055e350(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 1) {
    iVar1 = FUN_005af1c0("MOUSE ARROW LEFT1");
    if (*(int *)(param_2 + 0x10) == iVar1) {
      FUN_005566e0(0);
      iVar1 = *(int *)(param_1 + 0x10);
      uVar2 = FUN_005af1c0("LEFT ARROW");
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_00516af0(iVar1);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_005b8550(uVar2);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_005b1360(0xe647b375);
      if (iVar1 == 0) {
        return;
      }
      FUN_005b8400(iVar1,0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
      return;
    }
    iVar1 = *(int *)(param_2 + 0x10);
    iVar3 = FUN_005af1c0("MOUSE ARROW RIGHT1");
    if (iVar1 != iVar3) {
      if (iVar1 != -0x26207a6f) {
        return;
      }
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xa808e057,0x1b20c3,1);
      FUN_005a8c50();
      if (*(int *)(param_1 + 0x70) != 0) {
        FUN_00586760(0x249db7b7);
        FUN_005926b0(1);
        return;
      }
LAB_0055e50e:
      FUN_005926b0(1);
      return;
    }
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = FUN_005af1c0("MOUSE ARROW LEFT2");
    if (*(int *)(param_2 + 0x10) == iVar1) {
      FUN_005566e0(0);
      pcVar5 = "LEFT ARROW";
      goto LAB_0055e423;
    }
    iVar1 = *(int *)(param_2 + 0x10);
    iVar3 = FUN_005af1c0("MOUSE ARROW RIGHT2");
    if (iVar1 != iVar3) {
      if (iVar1 != -0x26207a70) {
        return;
      }
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xa808e057,0x1b20c2,1);
      FUN_005a8cb0();
      FUN_005110d0();
      goto LAB_0055e50e;
    }
  }
  FUN_005566e0(1);
  pcVar5 = "RIGHT ARROW";
LAB_0055e423:
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_005af1c0(pcVar5,0xe647b375,1);
  FUN_00524920(uVar2,uVar4);
  return;
}

