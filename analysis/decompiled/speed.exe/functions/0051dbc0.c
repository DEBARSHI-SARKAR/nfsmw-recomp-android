/* speed.exe 0051dbc0 FUN_0051dbc0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 00508b10 FUN_00508b10
 * calls 00503360 FUN_00503360
 * calls 00514cc0 FUN_00514cc0
 * calls 005af1c0 FUN_005af1c0
 * calls 0056e560 FUN_0056e560
 * calls 00514c70 FUN_00514c70
 * calls 00510d30 FUN_00510d30
 * calls 00510da0 FUN_00510da0
 */

void __thiscall FUN_0051dbc0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = FUN_005af1c0("TRACK_MAP");
    }
    else {
      iVar1 = FUN_00573140("TRACK_MAP_UNLOCK_%d",*(int *)(param_1 + 0x18));
    }
  }
  else {
    iVar1 = FUN_0056e560("TRACK_MAP_",*(int *)(param_1 + 0xc));
  }
  if (iVar1 != param_2) {
    FUN_00503360(&param_2,1);
    *(int *)(param_1 + 0x14) = iVar1;
    FUN_00514c70(*(undefined4 *)(param_1 + 0x10));
    param_2 = *(undefined4 *)(param_1 + 0x14);
    FUN_00508b10(&param_2,1,&LAB_0052c2a0,param_2,*(undefined4 *)(param_1 + 8));
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 6) = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != param_2)) {
    *(int *)(iVar1 + 0x24) = param_2;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
  }
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0xcc) != '\0') {
    FUN_00510d30();
    FUN_00510da0();
  }
  return;
}

