/* speed.exe 00531ad0 FUN_00531ad0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00593910 thunk_FUN_005931b0
 * calls 00516af0 FUN_00516af0
 * calls 0045d3a0 FUN_0045d3a0
 */

void __fastcall FUN_00531ad0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_005931b0();
  iVar1 = *(int *)(param_1 + -0x1c);
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if (iVar1 != 0) {
      iVar1 = FUN_00516af0(iVar1);
      if (iVar1 != 0) {
        iVar1 = FUN_005b8550(0x4a2eebc8);
        if (iVar1 != 0) {
          iVar1 = FUN_005b1360(0x1b20c3);
          if (iVar1 != 0) {
            FUN_005b8400(iVar1,0);
            *(undefined4 *)(iVar1 + 0x10) = 0;
          }
        }
      }
    }
    if (*(int *)(param_1 + -0x1c) != 0) {
      iVar1 = FUN_00516af0(*(int *)(param_1 + -0x1c));
      if (iVar1 != 0) {
        iVar1 = FUN_005b8550(0x8a6ad1c1);
        if (iVar1 != 0) {
          iVar1 = FUN_005b1360(0x7ab5521a);
          if (iVar1 != 0) {
            FUN_005b8400(iVar1,0);
            *(undefined4 *)(iVar1 + 0x10) = 0;
          }
        }
      }
    }
    if (*(int *)(param_1 + -0x1c) == 0) goto LAB_00531c8a;
    iVar1 = FUN_00516af0(*(int *)(param_1 + -0x1c));
    if (iVar1 == 0) goto LAB_00531c8a;
    iVar1 = FUN_005b8550(0x8f2fad70);
    if (iVar1 == 0) goto LAB_00531c8a;
    uVar2 = 0x249db7b7;
  }
  else {
    if (iVar1 != 0) {
      iVar1 = FUN_00516af0(iVar1);
      if (iVar1 != 0) {
        iVar1 = FUN_005b8550(0x4a2eebc8);
        if (iVar1 != 0) {
          iVar1 = FUN_005b1360(0x1b20c2);
          if (iVar1 != 0) {
            FUN_005b8400(iVar1,0);
            *(undefined4 *)(iVar1 + 0x10) = 0;
          }
        }
      }
    }
    if (*(int *)(param_1 + -0x1c) != 0) {
      iVar1 = FUN_00516af0(*(int *)(param_1 + -0x1c));
      if (iVar1 != 0) {
        iVar1 = FUN_005b8550(0x8a6ad1c1);
        if (iVar1 != 0) {
          iVar1 = FUN_005b1360(0x249db7b7);
          if (iVar1 != 0) {
            FUN_005b8400(iVar1,0);
            *(undefined4 *)(iVar1 + 0x10) = 0;
          }
        }
      }
    }
    if (*(int *)(param_1 + -0x1c) == 0) goto LAB_00531c8a;
    iVar1 = FUN_00516af0(*(int *)(param_1 + -0x1c));
    if (iVar1 == 0) goto LAB_00531c8a;
    iVar1 = FUN_005b8550(0x8f2fad70);
    if (iVar1 == 0) goto LAB_00531c8a;
    uVar2 = 0x7ab5521a;
  }
  iVar1 = FUN_005b1360(uVar2);
  if (iVar1 != 0) {
    FUN_005b8400(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
LAB_00531c8a:
  iVar1 = FUN_0045d3a0(0);
  if ((iVar1 < 1) && (*(int *)(param_1 + -0x1c) != 0)) {
    iVar1 = FUN_00516af0(*(int *)(param_1 + -0x1c));
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0x7890734);
      if (iVar1 != 0) {
        iVar1 = FUN_005b1360(0x16a259);
        if (iVar1 != 0) {
          FUN_005b8400(iVar1,0);
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
      }
    }
  }
  return;
}

