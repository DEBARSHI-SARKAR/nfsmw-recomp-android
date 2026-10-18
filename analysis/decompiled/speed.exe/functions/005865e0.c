/* speed.exe 005865e0 FUN_005865e0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005251e0 FUN_005251e0
 * calls 0057f1d0 FUN_0057f1d0
 */

void __thiscall
FUN_005865e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872324;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0xc);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = FUN_005251e0(*(undefined4 *)(param_1 + 0x10),param_2);
    *puVar1 = uVar2;
    puVar1[1] = param_1;
    puVar1[2] = 0;
    FUN_0057f1d0(puVar1,param_3,param_4,param_6);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar1;
  DAT_0091d8c0 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  ExceptionList = local_c;
  return;
}

