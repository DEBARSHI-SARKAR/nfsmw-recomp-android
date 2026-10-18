/* speed.exe 00521790 FUN_00521790; analysis pseudocode, not buildable source.
 * calls 00589600 FUN_00589600
 * calls 00652ad0 _malloc
 * calls 005214c0 FUN_005214c0
 * calls 00589300 FUN_00589300
 * calls 005889f0 FUN_005889f0
 * calls 00588b40 FUN_00588b40
 * calls 00588570 FUN_00588570
 * calls 005a5ea0 FUN_005a5ea0
 */

void __thiscall FUN_00521790(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e75c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x18c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589600(0x10,param_2,2,1);
    *puVar1 = &PTR_FUN_0089c76c;
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_005889f0(puVar1);
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  puVar1 = _malloc(0x18c);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589600(0x10,param_2 + 0x40,5,1);
    *puVar1 = &PTR_FUN_0089c7a4;
  }
  local_4 = 0xffffffff;
  FUN_005889f0(puVar1);
  puVar1 = _malloc(0x18c);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589600(0x10,param_2 + 0x60,5,1);
    *puVar1 = &PTR_FUN_0089c7dc;
  }
  local_4 = 0xffffffff;
  FUN_005889f0(puVar1);
  puVar1 = _malloc(0x18c);
  local_4 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589600(0x32,param_2 + 0x80,4,1);
    *puVar1 = &PTR_FUN_0089c814;
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_005889f0(puVar1);
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  pvVar3 = _malloc(0x5c);
  local_4 = 4;
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005214c0(1);
  }
  local_4 = 0xffffffff;
  FUN_00588b40(uVar2);
  puVar1 = _malloc(0x18c);
  local_4 = 5;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589600(2,&DAT_0089c8d0,0,1);
    *puVar1 = &PTR_FUN_0089c898;
  }
  local_4 = 0xffffffff;
  FUN_005889f0(puVar1);
  puVar1 = _malloc(0x5c);
  local_4 = 6;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589300(1);
    *puVar1 = &PTR_FUN_0089c8e0;
  }
  local_4 = 0xffffffff;
  FUN_00588570(puVar1,1);
  FUN_005a5ea0(1);
  ExceptionList = local_c;
  return;
}

