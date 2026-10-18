/* speed.exe 0074c210 FUN_0074c210; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0074c210(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = *(int *)(param_1 + 4) + 0x23c + DAT_00904f40 * 0xc;
    if (**(short **)(param_1 + 0x34 + DAT_00904f38 * 4) == 0) {
      if (DAT_00904f3c != *(int *)(iVar2 + 4)) {
        *(int *)(iVar2 + 4) = DAT_00904f3c;
        goto LAB_0074c27d;
      }
    }
    else {
      if (*(int *)(iVar2 + 4) != 0xa155545) {
        *(undefined4 *)(iVar2 + 4) = 0xa155545;
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      }
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = iVar1 + 800;
      if (*(int *)(iVar1 + 0x324) != 0xa155545) {
        *(undefined4 *)(iVar1 + 0x324) = 0xa155545;
LAB_0074c27d:
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = *(int *)(param_1 + 4) + 0x23c + DAT_00904f50 * 0xc;
    if (**(short **)(param_1 + 0x34 + DAT_00904f48 * 4) == 0) {
      if (DAT_00904f4c != *(int *)(iVar2 + 4)) {
        *(int *)(iVar2 + 4) = DAT_00904f4c;
        goto LAB_0074c2e2;
      }
    }
    else {
      if (*(int *)(iVar2 + 4) != 0xa155545) {
        *(undefined4 *)(iVar2 + 4) = 0xa155545;
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      }
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = iVar1 + 800;
      if (*(int *)(iVar1 + 0x324) != 0xa155545) {
        *(undefined4 *)(iVar1 + 0x324) = 0xa155545;
LAB_0074c2e2:
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = *(int *)(param_1 + 4) + 0x23c + DAT_00904f60 * 0xc;
    if (**(short **)(param_1 + 0x34 + DAT_00904f58 * 4) == 0) {
      if (DAT_00904f5c != *(int *)(iVar2 + 4)) {
        *(int *)(iVar2 + 4) = DAT_00904f5c;
        goto LAB_0074c347;
      }
    }
    else {
      if (*(int *)(iVar2 + 4) != 0xa155545) {
        *(undefined4 *)(iVar2 + 4) = 0xa155545;
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      }
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = iVar1 + 800;
      if (*(int *)(iVar1 + 0x324) != 0xa155545) {
        *(undefined4 *)(iVar1 + 0x324) = 0xa155545;
LAB_0074c347:
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = *(int *)(param_1 + 4) + 0x23c + DAT_00904f70 * 0xc;
    if (**(short **)(param_1 + 0x34 + DAT_00904f68 * 4) == 0) {
      if (DAT_00904f6c == *(int *)(iVar2 + 4)) goto LAB_0074c3af;
      *(int *)(iVar2 + 4) = DAT_00904f6c;
    }
    else {
      if (*(int *)(iVar2 + 4) != 0xa155545) {
        *(undefined4 *)(iVar2 + 4) = 0xa155545;
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      }
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = iVar1 + 800;
      if (*(int *)(iVar1 + 0x324) == 0xa155545) goto LAB_0074c3af;
      *(undefined4 *)(iVar1 + 0x324) = 0xa155545;
    }
    *(undefined4 *)(iVar2 + 8) = 0xffffffff;
  }
LAB_0074c3af:
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    if (**(short **)(param_1 + 0x34 + DAT_00904f78 * 4) == 0) {
      iVar2 = iVar2 + 0x23c + DAT_00904f80 * 0xc;
      if (DAT_00904f7c != *(int *)(iVar2 + 4)) {
        *(int *)(iVar2 + 4) = DAT_00904f7c;
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      }
    }
    else {
      iVar2 = iVar2 + 0x23c + DAT_00904f80 * 0xc;
      if (*(int *)(iVar2 + 4) != 0xa155545) {
        *(undefined4 *)(iVar2 + 4) = 0xa155545;
        *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      }
      iVar2 = *(int *)(param_1 + 4);
      if (*(int *)(iVar2 + 0x324) != 0xa155545) {
        *(undefined4 *)(iVar2 + 0x324) = 0xa155545;
        *(undefined4 *)(iVar2 + 0x328) = 0xffffffff;
        return;
      }
    }
  }
  return;
}

