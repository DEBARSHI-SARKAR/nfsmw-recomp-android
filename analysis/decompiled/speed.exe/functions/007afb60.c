/* speed.exe 007afb60 FUN_007afb60; analysis pseudocode, not buildable source.
 * calls 0056f120 FUN_0056f120
 * calls 007af330 FUN_007af330
 * calls 007a4b80 FUN_007a4b80
 * calls 0056f7b0 FUN_0056f7b0
 * calls 0056f7a0 FUN_0056f7a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_007afb60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined1 local_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 4) == 0) {
    return (float10)_DAT_00890968;
  }
  local_20 = 0;
  local_10 = 0;
  local_1c = 0;
  local_c = 0;
  local_18 = 0;
  local_8 = 0;
  local_14 = 0;
  local_4 = 0;
  iVar1 = FUN_0056f120(*(undefined1 *)(*(int *)(param_1 + 4) + 0x11));
  if (iVar1 == 0) {
    return (float10)_DAT_00890da8;
  }
  fVar3 = (float10)FUN_0056f7b0();
  FUN_0056f7a0((float)fVar3);
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0xc), iVar2 = FUN_007a4b80(*(undefined4 *)(param_2 + 0x10)),
     iVar1 != iVar2)) {
    FUN_007af330(param_2,local_38);
  }
  if (*(int *)(param_1 + 0x1b4) == 0) goto LAB_007afc1c;
  iVar1 = *(int *)(param_1 + 0x1b4) + -4;
  do {
    if (param_1 == -0x1b4) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x1b0;
    }
    if (iVar1 == iVar2) {
      fVar3 = (float10)FUN_0056f7b0();
      return fVar3;
    }
    if (param_2 == 0) {
      if (*(char *)(iVar1 + 0x14) != '\0') {
        iVar2 = *(int *)(iVar1 + 0xc);
        goto LAB_007afc5d;
      }
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xc);
      if ((*(int *)(param_2 + 0x10) != *(int *)(iVar2 + 0x10)) && (*(char *)(iVar1 + 0x14) != '\0'))
      {
LAB_007afc5d:
        FUN_007af330(iVar2,local_38);
      }
    }
    if (*(int *)(iVar1 + 4) == 0) {
LAB_007afc1c:
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4) + -4;
    }
  } while( true );
}

