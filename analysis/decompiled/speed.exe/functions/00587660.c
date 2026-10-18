/* speed.exe 00587660 FUN_00587660; analysis pseudocode, not buildable source.
 * calls 00515520 FUN_00515520
 * calls 00514fd0 FUN_00514fd0
 * calls 00524cc0 FUN_00524cc0
 * calls 00524ee0 FUN_00524ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00587660(int param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    local_28 = 0.0;
    local_24 = 0.0;
    FUN_00524ee0(*(undefined4 *)(param_1 + 0x10),&local_28,&local_24);
    param_2 = local_28 - param_2 * _DAT_008933d4;
    param_3 = local_24 - param_3 * _DAT_008933d4;
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4) + -4;
    }
    while( true ) {
      iVar2 = param_1;
      if (param_1 == -4) {
        iVar2 = 0;
      }
      if (iVar3 == iVar2) break;
      uVar1 = *(undefined4 *)(iVar3 + 0x10);
      if (*(char *)(param_1 + 0x29) == '\0') {
        FUN_00514fd0(uVar1,&local_18,local_8);
        FUN_00524cc0(uVar1,local_18,param_3);
        FUN_00515520(*(undefined4 *)(iVar3 + 0x10),local_4,&local_14);
        param_3 = local_14 + *(float *)(param_1 + 0x20) + param_3;
      }
      else {
        FUN_00514fd0(uVar1,local_10,&local_20);
        FUN_00524cc0(uVar1,param_2,local_20);
        FUN_00515520(*(undefined4 *)(iVar3 + 0x10),&local_1c,local_c);
        param_2 = local_1c + *(float *)(param_1 + 0x20) + param_2;
      }
      if (*(int *)(iVar3 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + -4;
      }
    }
  }
  return;
}

