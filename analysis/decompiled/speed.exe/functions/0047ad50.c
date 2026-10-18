/* speed.exe 0047ad50 FUN_0047ad50; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 00468d30 FUN_00468d30
 * calls 00470890 FUN_00470890
 * calls 00468c50 FUN_00468c50
 * calls 00467a80 FUN_00467a80
 * calls 00475a50 FUN_00475a50
 * calls 00468be0 FUN_00468be0
 */

undefined4 * __thiscall
FUN_0047ad50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined1 local_a0 [64];
  undefined1 local_60 [68];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086a46b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00470890(param_2,0x10);
  local_14 = 0;
  *param_1 = &PTR_LAB_00894da8;
  param_1[0x20] = param_3;
  param_1[0x21] = param_4;
  puVar1 = _malloc(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0x3f333333;
    *(undefined2 *)(puVar1 + 10) = 0;
    *(undefined2 *)((int)puVar1 + 0x2a) = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  param_1[0x22] = puVar1;
  pvVar2 = _malloc(0x84);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00467a80(1,0x3f333333);
  }
  param_1[0x23] = uVar3;
  pvVar2 = _malloc(0x84);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00467a80(1,0x3f333333);
  }
  param_1[0x24] = uVar3;
  FUN_00475a50(0,local_a0,0,local_60);
  FUN_00468be0(param_1[0x22]);
  FUN_00468c50(param_1[0x23],local_a0,0);
  FUN_00468d30(param_1[0x24],local_60,0);
  ExceptionList = local_1c;
  return param_1;
}

