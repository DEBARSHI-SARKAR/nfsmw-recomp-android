/* speed.exe 007906b0 FUN_007906b0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 007c4b80 FUN_007c4b80
 * calls 00460c50 FUN_00460c50
 * calls 00460c70 FUN_00460c70
 * calls 0083a670 FUN_0083a670
 * calls 0083abc0 FUN_0083abc0
 * calls 00460ca0 FUN_00460ca0
 */

int __thiscall FUN_007906b0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar1 = FUN_0083a670(param_3,"GAMEID",0);
  uVar1 = FUN_0083abc0(uVar1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    FUN_00460ca0(param_1 + 0xc,param_2,0x10);
  }
  uVar1 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  iVar2 = FUN_00460c50(param_3);
  pvVar3 = _malloc(iVar2 + 1);
  *(void **)(param_1 + 0x20) = pvVar3;
  FUN_00460c70(pvVar3,param_3);
  return param_1;
}

