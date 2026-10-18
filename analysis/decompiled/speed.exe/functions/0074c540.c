/* speed.exe 0074c540 FUN_0074c540; analysis pseudocode, not buildable source.
 * calls 00747c40 FUN_00747c40
 */

undefined2 * __thiscall FUN_0074c540(undefined2 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((param_2 != 0) && (puVar1 = *(undefined4 **)(param_2 + 0x84), puVar1 != (undefined4 *)0x0)) {
    iVar2 = puVar1[*(int *)(param_1 + 2) + 0x12];
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 != 0) {
      uVar3 = FUN_00747c40(*puVar1,*(int *)(param_1 + 2),0,iVar2,0xffffffff);
      *(undefined4 *)(param_1 + 6) = uVar3;
    }
    return param_1;
  }
  return param_1;
}

